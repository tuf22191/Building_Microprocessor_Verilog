`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:43:36 12/11/2016
// Design Name:   Mux1
// Module Name:   C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/TB_MUX1.v
// Project Name:  MicroP_for_legv8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Mux1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_MUX1;

	// Inputs
	reg [31:0] adder_1;
	reg [31:0] adder_2;
	reg mux_1_control;

	// Outputs
	wire [31:0] data_out;

	// Instantiate the Unit Under Test (UUT)
	Mux1 uut (
		.adder_1(adder_1), 
		.adder_2(adder_2), 
		.mux_1_control(mux_1_control), 
		.data_out(data_out)
	);

	initial begin
		// Initialize Inputs
		adder_1 = 0;
		adder_2 = 0;
		mux_1_control = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		 // Just needed the automatic

	end
      
endmodule

