`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:26:37 12/06/2016 
// Design Name: 
// Module Name:    Instruction_Memory_Thirty_Two_Bit 
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
module Instruction_Memory_Thirty_Two_Bit(
    output reg [31:0] instruction, //instruction coming out (the "data" out)
    input [31:0] address,
	 input clk
    );

	 reg [31:0] THE_MEMORY [0:255];//8 bits long the memory
	 
	 
	 integer i;
	 //initializae the data : SAW THIS ONLINE - So we have all 0's , do we have to initialize it?
	 initial begin   //probably do not need this
		//instruction <= 0; //non blocking part
		
		THE_MEMORY[0]= 10;//0; //initialize  it
		THE_MEMORY[1]= 9;
		THE_MEMORY[2]= 8;
		THE_MEMORY[3]= 7;
		THE_MEMORY[4]= 6;
		THE_MEMORY[5]= 5;
		THE_MEMORY[6]= 4;
		THE_MEMORY[7]= 3;
		THE_MEMORY[8]= 2;
		THE_MEMORY[9]= 1;
		//put the data here
	 end
	 
//	 always @(*)//(posedge clk) // remove the posedge?
//		begin
//		    instruction <= THE_MEMORY[address[4:0]];
//	 end

	 always @(posedge clk)//(posedge clk) // remove the posedge?
		begin
		    instruction <= THE_MEMORY[address[4:0]];
	 end
			// assign instruction = THE_MEMORY[address[4:0]];

	 //clock on outside coming in, or just have external wait, (have clk as input)

endmodule
