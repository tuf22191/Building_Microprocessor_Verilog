`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:59:41 12/12/2016
// Design Name:   Mux3
// Module Name:   C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/TB_MUX3.v
// Project Name:  MicroP_for_legv8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Mux3
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_MUX3;

	// Inputs
	reg [63:0] register;
	reg [63:0] immediate;
	reg control;

	// Outputs
	wire [63:0] result;

	// Instantiate the Unit Under Test (UUT)
	Mux3 uut (
		.register(register), 
		.immediate(immediate), 
		.control(control), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		register = 0;
		immediate = 0;
		control = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

