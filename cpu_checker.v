`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:41:53 09/11/2022 
// Design Name: 
// Module Name:    cpu_checker 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module cpu_checker(
	input clk,
	input reset,
	input [7:0] char,
	output [1:0] format_type
    );
	reg [3:0] state = 4'h0;
	reg [1:0] type = 2'b00; //初始化 type是否一位就足够了？
	reg [2:0] count = 3'b000;
	
	always @(posedge clk)
	begin
	
		if (reset == 1'b1)
		begin 
			state <= 4'h0;
			type <= 2'b00;
			count <= 3'b000;
		end
	
		else
		begin//42@00003004: $28 <= ff00ff00 :格式要求
			
			if (state == 4'h0)
			begin
				
				if (char == "^")
				begin
					state <= state + 4'h1;
					count <= 3'b000;//下面进入数字输入
				end
				
				else 
				begin
					state <= state;
				end
			
			end
			
			else if (state == 4'h1)//输入十进制数
			begin
				
				if (char >= "0" && char <= "9" && count <= 3'b011)//这个条件不太好写
				begin
					count <= count + 3'b001;
					state <= state;
				end
				
				else if (char == "@" && count >=  3'b001 && count <= 3'b100)//这样写似乎有些问题 //后面不再是数字且数字后面是空格
				begin
					count <= 3'b000;
					state <= state + 4'h1;//跳一步
				end

				else if (char == "^")
				begin
					state <= state;
					count <= 3'b000;//这个也要重新复位
					
				end
				
				else
				begin
					state <= 4'h0;
					count <= 3'b000;
				end
				
			end 
			
			else if (state == 4'h2)
			begin
			
				if (((char >= "0" && char <= "9") ||(char >= "a" && char <= "f")) && count < 3'b111)
				begin
					count <= count + 3'b001;
					state <= state;
				end
				
				else if (((char >= "0" && char <= "9") ||(char >= "a" && char <= "f")) && count == 3'b111)
				begin
					state <= state + 4'h1;
					count <= 3'b000;//进行复位 //使用之后也清零
				end
				
				else if (char == "^")
				begin
					state <= 4'h1;
					count <= 3'b000;//这个也要重新复位
				end
				
				else
				begin
					state <= 4'h0;
					count <= 3'b000;//使用之后也清零
				end
			
			end
		
			else if (state == 4'h3)
			begin
			
				if (char == ":")//输入冒号，状泰转移
				begin
					state <= state + 4'h1;
				end
				
				else if (char == "^")
				begin
					state <= 4'h1;
				end
				
				else
				begin
					state <= 4'h0;
				end
				
			end
			
			else if (state == 4'h4)//从这个地方就产生两种情况了
			begin
				
				if (char == " ")
				begin
					state <= state;//状态不变
				end
				
				else if (char == "$")
				begin
					state <= state + 4'h1;
					type <= type + 2'b01;
					count <= 3'b000;
				end
				
				else if (char == "*")//处理bug:之前为state
				begin
					state <= state + 4'h1;
					type <= type + 2'b10;
					count <= 3'b000;
				end
				
				else if (char == "^")
				begin
					state <= 4'h1;
					type <= 2'b00;//重新复位
				end
				
				else 
				begin
					state <= 4'h0;
					type <= 2'b00;//重新复位
				end
			
			end 
			
			else if (state == 4'h5)//这里的数字取决于之前输入的类型判定符号
			begin
				if (type == 2'b01)
				begin
					if (char >= "0" && char <= "9" && count <= 3'b010)//这个条件不太好写
					begin
						count <= count + 3'b001;
						state <= state;
					end
					
					else if (char >= "0" && char <= "9" && count == 3'b011)//数位达到4个
					begin
						count <= 3'b000;//复位
						state  <= state + 4'h1;//状态转移
					end
					
					else if (char == " " && count >=  3'b001)//这样写似乎有些问题 //后面不再是数字且数字后面是空格
					begin
						count <= 3'b000;
						state <= state + 4'h1;//跳一步
					end
					
					else if (char == "<" && count >= 3'b001)
					begin
						count <= 3'b000;
						state <= state + 4'h2;//跳两步
					end
					
					else if (char == "^")
					begin
						state <= 4'h1;
						type <= 2'b00;//重新复位
						count <= 3'b000;
					end
								
					else
					begin
						state <= 4'h0;
						type <= 2'b00;
						count <= 3'b000;//复位
					end
					
				end
				
				else if (type == 2'b10)
				begin
				
					if (((char >= "0" && char <= "9") ||(char >= "a" && char <= "f")) && count < 3'b111)//还是一步步的跳
					begin
						count <= count + 3'b001;
						state <= state;
					end
					
					else if (((char >= "0" && char <= "9") ||(char >= "a" && char <= "f")) && count == 3'b111)//3'b111->7
					begin
						state <= state + 4'h1;
						count <= 3'b000;//复位
					end
					
					else if (char == "^")
					begin
						state <= 4'h1;
						type <= 2'b00;//重新复位
						count <= 3'b000;
					end

					else
					begin
						state <= 4'h0;
						type <= 2'b00; //复位
						count <= 3'b000;
					end
				
				end
				
				else
				begin
					state <= 4'h0;
					type <= 2'b00;//复位
					count <= 3'b000;
				end
				
			end
			
			else if (state == 4'h6)//输入为空格
			begin
			
				if (char == " ")
				begin
					state <= state;
				end
				
				else if (char == "<")
				begin
					state <= state + 4'h1;
				end
				
				else if (char == "^")
				begin
					state <= 4'h1;
					type <= 2'b00;//重新复位
				end
				
				else 
				begin 
					state <= 4'h0;
					type <= 2'b00;
				end
				
			end
			
			else if (state == 4'h7)//输入为"<"
			begin
				if (char == "=")
				begin
					state <= state + 4'h1;
				end
				
				else if (char == "^")
				begin
					state <= 4'h1;
					type <= 2'b00;//重新复位
				end
				
				else 
				begin 
					state <= 4'h0;
					type <= 2'b00;
				end
			
			end
			
			else if (state == 4'h8)//输入为" "
			begin
				if (char == " ")
				begin
					state <= state;
				end
				
				else if ((char >= "0" && char <= "9") ||(char >= "a" && char <= "f"))
				begin
					count <= 3'b001;//计数器初始化
					state <= state + 4'h1;
				end
				
				else if (char == "^")
				begin
					state <= 4'h1;
					type <= 2'b00;//重新复位
					count <= 3'b000;
				end
				
				else
				begin
					state <= 4'h0;
					type <= 2'b00;
					count <= 3'b000;
				end
			end
			
			else if (state == 4'h9)//输入为0-9, a-f
			begin
							
				if (((char >= "0" && char <= "9") ||(char >= "a" && char <= "f")) && count < 3'b111)
				begin
					count <= count + 3'b001;
					state <= state;
				end
				
				else if (((char >= "0" && char <= "9") ||(char >= "a" && char <= "f")) && count == 3'b111)
				begin
					state <= state + 4'h1;//注意要复位
					count <= 3'b000;
				end
				
				else if (char == "^")
				begin
					state <= 4'h1;
					type <= 2'b00;//重新复位
					count <= 3'b000;//重新复位
				end
				
				else
				begin
					state <= 4'h0;
					count <= 3'b000;//使用之后也清零
					type <= 2'b00;//复位
				end			
			end

			else if (state == 4'ha)//state 10 输入结束符 "#"
			begin
				
				if (char == "#")
				begin 
					state <= state + 4'h1;
				end
				
				else if (char == "^")
				begin
					state <= 4'h1;
					type <= 2'b00;//重新复位
				end
				
				else
				begin
					state <= 4'h0;
					type <= 2'b00;
				end
			
			end
			
			else if (state == 4'hb)//state 11 开始新一轮检查
			begin
			
				if (char == "^")
				begin
					state <= 4'h1;//回到第一个状态
					type <= 2'b00;
				end
				
				else
				begin
					state <= 4'h0;//回到第二个状态
					type <= 2'b00;//type也要清零
				end
				
			end
			
			else
			begin
				state <= 4'h0;
				type <= 2'b00;
			end
			
		end
	end
		
	assign format_type = //输出结果
	(state != 4'hb) ? 2'b00 ://11状态一定满足输出要求
	(type == 2'b01) ? 2'b01 :
	2'b10;

endmodule
