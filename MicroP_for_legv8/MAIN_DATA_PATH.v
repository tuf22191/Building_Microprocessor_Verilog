`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:21:58 12/11/2016 
// Design Name: 
// Module Name:    MAIN_DATA_PATH 
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
module MAIN_DATA_PATH(
    input wire mem_write_dm, mem_read_dm, branch, reg_write_rf, mux2, mux3,
    input wire reg [2:0] alu_op  
    );

    //PROGRAM COUNTER
			// Inputs
		reg [7:0] address_counter;
		reg reset;
		reg clk;

		// Outputs
		wire [7:0] address;

		// Instantiate the Unit Under Test (UUT)
		Thirty_Two_Bit_Program_Counter uut (
			.address_counter(address_counter), 
			.address(address), 
			.reset(reset), 
			.clk(clk)
		); 
		
	 // INSTRUCTION MEMORY
	 

endmodule
