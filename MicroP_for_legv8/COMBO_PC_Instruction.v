`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:05:55 12/11/2016
// Design Name:   Thirty_Two_Bit_Program_Counter
// Module Name:   C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/COMBO_PC_Instruction.v
// Project Name:  MicroP_for_legv8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Thirty_Two_Bit_Program_Counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module COMBO_PC_Instruction;

	// Inputs
	reg [31:0] address_counter;
	reg reset;
	reg clk;

	// Outputs
	wire [31:0] address1;
	wire [31:0] instruction; 
	
	// Instantiate the Unit Under Test (UUT)
	Thirty_Two_Bit_Program_Counter uut (
		.address_counter(address_counter), 
		.address(address1), 
		.reset(reset), 
		.clk(clk)
	);

	// Instantiate the Unit Under Test (UUT)
	Instruction_Memory_Thirty_Two_Bit uut2 (
		.instruction(instruction), 
		.address(address1),
		.clk(clk)
	);

   always begin
	clk =1;#10;
	clk =0;#10;
	end
	
	always begin
	#110000
	$finish("finished with simulation");
	end

	initial begin
		// Initialize Inputs
		address_counter = 0;
		
		// Wait 100 ns for global reset to finish
		#100;
         $monitor( "%g = clock , %d = address_counter , %d = address1, %d =instruction ",$time,address_counter,address1, instruction);
		// Add stimulus here
      
		@(posedge clk)
		address_counter = 1;
		@(posedge clk)
		address_counter = 2;
		@(posedge clk)
		address_counter = 3;
		@(posedge clk)
		address_counter = 4;
		@(posedge clk)
		address_counter = 5;
		@(posedge clk)
		address_counter = 6;
		@(posedge clk)
		address_counter = 7;
		@(posedge clk)
		address_counter = 8;
		
		
	end
      
endmodule

