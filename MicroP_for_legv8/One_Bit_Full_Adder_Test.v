`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:36:13 11/06/2016
// Design Name:   one_bit_full_adder
// Module Name:   C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/One_Bit_Full_Adder_Test.v
// Project Name:  MicroP_for_legv8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: one_bit_full_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module One_Bit_Full_Adder_Test;

	// Inputs
	reg c_in;
	reg a;
	reg b;

	// Outputs
	wire sum;
	wire c_out;

	// Instantiate the Unit Under Test (UUT)
	one_bit_full_adder uut (
		.c_in(c_in), 
		.a(a), 
		.b(b), 
		.sum(sum), 
		.c_out(c_out)
	);

	initial begin
	   $monitor( "%g = clock , %d = c_in , %d = a, %d = b, %d = sum, %d = c_out ",$time,c_in,a,b,sum,c_out);
		// Initialize Inputs
		c_in = 0;
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		#50
			c_in = 1;
			a = 0;
			b =0;
		#50
			c_in = 0;
			a = 1;
			b =0;
		#50
			c_in = 0;
			a = 0;
			b =1;
      #50
			c_in = 1;
			a = 1;
			b =0;
		#50
			c_in = 1;
			a = 0;
			b =1;
		#50
			c_in = 1;
			a = 1;
			b =1;
		// Add stimulus here

	end
      
endmodule

