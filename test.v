`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:45:53 09/11/2022
// Design Name:   cpu_checker
// Module Name:   C:/Users/10791/cpu_checker/test.v
// Project Name:  cpu_checker
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cpu_checker
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk;
	reg reset;
	reg [7:0] char;

	// Outputs
	wire [1:0] format_type;

	// Instantiate the Unit Under Test (UUT)
	cpu_checker uut (
		.clk(clk), 
		.reset(reset), 
		.char(char), 
		.format_type(format_type)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		
		#10 reset = 0;
		
		#2 char = "^";
		#2 char = "2";
		#2 char = "4";
		#2 char = "2";
		#2 char = "@";
		#2 char = "0"; 
		#2 char = "0";
		#2 char = "0";
		#2 char = "3";
		#2 char = "0";
		#2 char = "f";
		#2 char = "4";
		#2 char = "4";
		#2 char = ":";
		#2 char = " ";
		#2 char = "$";
		#2 char = "3";
		#2 char = "1";
		#2 char = " ";
		#2 char = "<";
		#2 char = "=";
		#2 char = "1";
		#2 char = "2";
		#2 char = "3";
		#2 char = "4";
		#2 char = "5";
		#2 char = "6";
		#2 char = "7";
		#2 char = "8";
		#2 char = "#";
		#2 char = "x";
		
		#2 char = "^";
		#2 char = "2";
		#2 char = "4";
		#2 char = "2";
		#2 char = "@";
		#2 char = "0"; 
		#2 char = "0";
		#2 char = "0";
		#2 char = "0";
		#2 char = "3";
		#2 char = "0";
		#2 char = "f";
		#2 char = "4";
		#2 char = ":";
		#2 char = " ";
		#2 char = "*";
		#2 char = "1";
		#2 char = "2";
		#2 char = "3";
		#2 char = "4";
		#2 char = "5";
		#2 char = "6";
		#2 char = "7";
		#2 char = "8";
		#2 char = " ";
		#2 char = "<";
		#2 char = "=";
		#2 char = "1";
		#2 char = "2";
		#2 char = "3";
		#2 char = "4";
		#2 char = "5";
		#2 char = "6";
		#2 char = "7";
		#2 char = "8";
		#2 char = "#";
		
		#2 char = "^";
		#2 char = "2";
		#2 char = "4";
		#2 char = "2";
		#2 char = "@";
		#2 char = "0"; 
		#2 char = "0";
		#2 char = "0";
		#2 char = "0";
		#2 char = "3";
		#2 char = "0";
		#2 char = "f";
		#2 char = "4";
		#2 char = ":";
		#2 char = " ";
		#2 char = "$";
		#2 char = "3";
		#2 char = "1";
		#2 char = " ";
		#2 char = "<";
		#2 char = "=";
		#2 char = "1";
		#2 char = "2";
		#2 char = "3";
		#2 char = "4";
		#2 char = "5";
		#2 char = "6";
		#2 char = "7";
		#2 char = "8";
		#2 char = "#";
		#2 char = "B";
		#2 char = "#";
		#2 char = "^";
		#2 char = "3";
		#2 char = "3";
		#2 char = "8";
		#2 char = "@";
		#2 char = "0";
		#2 char = "0";
		#2 char = "0";
		#2 char = "0";
		#2 char = "3";
		#2 char = "1";
		#2 char = "3";
		#2 char = "0";
		#2 char = ":";
		#2 char = " ";
		#2 char = "*";
		#2 char = "0";
		#2 char = "0";
		#2 char = "0";
		#2 char = "0";
		#2 char = "0";
		#2 char = "0";
		#2 char = "8";
		#2 char = "8";
		#2 char = " ";
		#2 char = "<";
		#2 char = "=";
		#2 char = " ";
		#2 char = "f";
		#2 char = "f";
		#2 char = "f";
		#2 char = "f";
		#2 char = "b";
		#2 char = "5";
		#2 char = "2";
		#2 char = "B";
		#2 char = " ";
		#2 char = "#";
		#2 char = "^";
		#2 char = "1";
		#2 char = "0";
		#2 char = "2";
		#2 char = "4";
		#2 char = "@";
		#2 char = "0";
		#2 char = "0";
		#2 char = "0";
		#2 char = "0";
		#2 char = "3";
		#2 char = "0";
		#2 char = "f";
		#2 char = "c";
		#2 char = ":";
		#2 char = "$";
		#2 char = "2";
		#2 char = "<";
		#2 char = "=";
		#2 char = "8";
		#2 char = "9";
		#2 char = "a";
		#2 char = "b";
		#2 char = "c";
		#2 char = "d";
		#2 char = "e";
		#2 char = "f";
		#2 char = "#";
		#2 char = "x";
		#2 char = "^";
		#2 char = "2";
		#2 char = "4";
		#2 char = "2";
		#2 char = "@";
		#2 char = "0"; 
		#2 char = "0";
		#2 char = "0";
		#2 char = "3";
		#2 char = "0";
		#2 char = "f";
		#2 char = "4";
		#2 char = ":";
		#2 char = " ";
		#2 char = "$";
		#2 char = "3";
		#2 char = "1";
		#2 char = " ";
		#2 char = "<";
		#2 char = "=";
		#2 char = "1";
		#2 char = "2";
		#2 char = "3";
		#2 char = "4";
		#2 char = "5";
		#2 char = "6";
		#2 char = "7";
		#2 char = "8";
		#2 char = "#";
		#2 char = "x";
				
		//finish = 1;

	end
	always #1 clk = ~clk;
      
endmodule

