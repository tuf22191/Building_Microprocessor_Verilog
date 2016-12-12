`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:33:45 12/11/2016 
// Design Name: 
// Module Name:    DATAPATH_AND_MEMORIES_IM_DM 
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
module DATAPATH_AND_MEMORIES_IM_DM(
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
			// Inputs
		reg [31:0] address;
		reg clk;
			// Outputs
		wire [31:0] instruction;

			// Instantiate the Unit Under Test (UUT)
		Instruction_Memory_Thirty_Two_Bit uut (
				.instruction(instruction), 
				.address(address),
				.clk(clk)
			);
	
	
	 //Register File

endmodule
