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
	reg [1:0] type = 2'b00; //��ʼ�� type�Ƿ�һλ���㹻�ˣ�
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
		begin//42@00003004: $28 <= ff00ff00 :��ʽҪ��
			
			if (state == 4'h0)
			begin
				
				if (char == "^")
				begin
					state <= state + 4'h1;
					count <= 3'b000;//���������������
				end
				
				else 
				begin
					state <= state;
				end
			
			end
			
			else if (state == 4'h1)//����ʮ������
			begin
				
				if (char >= "0" && char <= "9" && count <= 3'b011)//���������̫��д
				begin
					count <= count + 3'b001;
					state <= state;
				end
				
				else if (char == "@" && count >=  3'b001 && count <= 3'b100)//����д�ƺ���Щ���� //���治�������������ֺ����ǿո�
				begin
					count <= 3'b000;
					state <= state + 4'h1;//��һ��
				end

				else if (char == "^")
				begin
					state <= state;
					count <= 3'b000;//���ҲҪ���¸�λ
					
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
					count <= 3'b000;//���и�λ //ʹ��֮��Ҳ����
				end
				
				else if (char == "^")
				begin
					state <= 4'h1;
					count <= 3'b000;//���ҲҪ���¸�λ
				end
				
				else
				begin
					state <= 4'h0;
					count <= 3'b000;//ʹ��֮��Ҳ����
				end
			
			end
		
			else if (state == 4'h3)
			begin
			
				if (char == ":")//����ð�ţ�״̩ת��
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
			
			else if (state == 4'h4)//������ط��Ͳ������������
			begin
				
				if (char == " ")
				begin
					state <= state;//״̬����
				end
				
				else if (char == "$")
				begin
					state <= state + 4'h1;
					type <= type + 2'b01;
					count <= 3'b000;
				end
				
				else if (char == "*")//����bug:֮ǰΪstate
				begin
					state <= state + 4'h1;
					type <= type + 2'b10;
					count <= 3'b000;
				end
				
				else if (char == "^")
				begin
					state <= 4'h1;
					type <= 2'b00;//���¸�λ
				end
				
				else 
				begin
					state <= 4'h0;
					type <= 2'b00;//���¸�λ
				end
			
			end 
			
			else if (state == 4'h5)//���������ȡ����֮ǰ����������ж�����
			begin
				if (type == 2'b01)
				begin
					if (char >= "0" && char <= "9" && count <= 3'b010)//���������̫��д
					begin
						count <= count + 3'b001;
						state <= state;
					end
					
					else if (char >= "0" && char <= "9" && count == 3'b011)//��λ�ﵽ4��
					begin
						count <= 3'b000;//��λ
						state  <= state + 4'h1;//״̬ת��
					end
					
					else if (char == " " && count >=  3'b001)//����д�ƺ���Щ���� //���治�������������ֺ����ǿո�
					begin
						count <= 3'b000;
						state <= state + 4'h1;//��һ��
					end
					
					else if (char == "<" && count >= 3'b001)
					begin
						count <= 3'b000;
						state <= state + 4'h2;//������
					end
					
					else if (char == "^")
					begin
						state <= 4'h1;
						type <= 2'b00;//���¸�λ
						count <= 3'b000;
					end
								
					else
					begin
						state <= 4'h0;
						type <= 2'b00;
						count <= 3'b000;//��λ
					end
					
				end
				
				else if (type == 2'b10)
				begin
				
					if (((char >= "0" && char <= "9") ||(char >= "a" && char <= "f")) && count < 3'b111)//����һ��������
					begin
						count <= count + 3'b001;
						state <= state;
					end
					
					else if (((char >= "0" && char <= "9") ||(char >= "a" && char <= "f")) && count == 3'b111)//3'b111->7
					begin
						state <= state + 4'h1;
						count <= 3'b000;//��λ
					end
					
					else if (char == "^")
					begin
						state <= 4'h1;
						type <= 2'b00;//���¸�λ
						count <= 3'b000;
					end

					else
					begin
						state <= 4'h0;
						type <= 2'b00; //��λ
						count <= 3'b000;
					end
				
				end
				
				else
				begin
					state <= 4'h0;
					type <= 2'b00;//��λ
					count <= 3'b000;
				end
				
			end
			
			else if (state == 4'h6)//����Ϊ�ո�
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
					type <= 2'b00;//���¸�λ
				end
				
				else 
				begin 
					state <= 4'h0;
					type <= 2'b00;
				end
				
			end
			
			else if (state == 4'h7)//����Ϊ"<"
			begin
				if (char == "=")
				begin
					state <= state + 4'h1;
				end
				
				else if (char == "^")
				begin
					state <= 4'h1;
					type <= 2'b00;//���¸�λ
				end
				
				else 
				begin 
					state <= 4'h0;
					type <= 2'b00;
				end
			
			end
			
			else if (state == 4'h8)//����Ϊ" "
			begin
				if (char == " ")
				begin
					state <= state;
				end
				
				else if ((char >= "0" && char <= "9") ||(char >= "a" && char <= "f"))
				begin
					count <= 3'b001;//��������ʼ��
					state <= state + 4'h1;
				end
				
				else if (char == "^")
				begin
					state <= 4'h1;
					type <= 2'b00;//���¸�λ
					count <= 3'b000;
				end
				
				else
				begin
					state <= 4'h0;
					type <= 2'b00;
					count <= 3'b000;
				end
			end
			
			else if (state == 4'h9)//����Ϊ0-9, a-f
			begin
							
				if (((char >= "0" && char <= "9") ||(char >= "a" && char <= "f")) && count < 3'b111)
				begin
					count <= count + 3'b001;
					state <= state;
				end
				
				else if (((char >= "0" && char <= "9") ||(char >= "a" && char <= "f")) && count == 3'b111)
				begin
					state <= state + 4'h1;//ע��Ҫ��λ
					count <= 3'b000;
				end
				
				else if (char == "^")
				begin
					state <= 4'h1;
					type <= 2'b00;//���¸�λ
					count <= 3'b000;//���¸�λ
				end
				
				else
				begin
					state <= 4'h0;
					count <= 3'b000;//ʹ��֮��Ҳ����
					type <= 2'b00;//��λ
				end			
			end

			else if (state == 4'ha)//state 10 ��������� "#"
			begin
				
				if (char == "#")
				begin 
					state <= state + 4'h1;
				end
				
				else if (char == "^")
				begin
					state <= 4'h1;
					type <= 2'b00;//���¸�λ
				end
				
				else
				begin
					state <= 4'h0;
					type <= 2'b00;
				end
			
			end
			
			else if (state == 4'hb)//state 11 ��ʼ��һ�ּ��
			begin
			
				if (char == "^")
				begin
					state <= 4'h1;//�ص���һ��״̬
					type <= 2'b00;
				end
				
				else
				begin
					state <= 4'h0;//�ص��ڶ���״̬
					type <= 2'b00;//typeҲҪ����
				end
				
			end
			
			else
			begin
				state <= 4'h0;
				type <= 2'b00;
			end
			
		end
	end
		
	assign format_type = //������
	(state != 4'hb) ? 2'b00 ://11״̬һ���������Ҫ��
	(type == 2'b01) ? 2'b01 :
	2'b10;

endmodule
