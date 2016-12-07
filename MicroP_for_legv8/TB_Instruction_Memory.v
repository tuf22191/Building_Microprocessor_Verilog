`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:39:39 12/06/2016
// Design Name:   Instruction_Memory_Thirty_Two_Bit
// Module Name:   C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/TB_Instruction_Memory.v
// Project Name:  MicroP_for_legv8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Instruction_Memory_Thirty_Two_Bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_Instruction_Memory;

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
	
	
	always begin
	clk =1;#10;
	clk =0;#10;
	end
	
	always begin
	#1100
	$finish("finished with simulation");
	end
	
	
   integer i;
	integer res;
	initial begin
		// Initialize Inputs
		address = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		
		for(i=0;i<10;i=i+1)begin
		   address = i;
		   res = 10-i;
			//@(negedge clk)
			#20;
		   if(instruction!=res)begin
			$display("%d %d", instruction, res);
			$display("Instruction memory not initialized!");
			end//if
		 
		 
		end//for
		
		
		
		// Add stimulus here

	end
      
endmodule

