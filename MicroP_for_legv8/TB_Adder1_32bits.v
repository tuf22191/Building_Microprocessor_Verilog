`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:57:00 12/07/2016
// Design Name:   Adder1_32bit_adder
// Module Name:   C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/TB_Adder1_32bits.v
// Project Name:  MicroP_for_legv8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Adder1_32bit_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_Adder1_32bits;

	// Inputs
	reg [31:0] b_in;
	wire [31:0] sum;

	// Instantiate the Unit Under Test (UUT)
	Adder1_32bit_adder uut (
		.b_in(b_in), 
		.sum(sum)
	);
   integer i = 0;
	initial begin
		// Initialize Inputs
		b_in = 0;
//		sum = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		  for(i=0;i<122423;i=i+1)begin
		   b_in = i;
			#20;
			if(sum!= i+4)begin
			$display("adder1 not working: sum is %d and b_in was %d", sum, b_in);
			end//if
		  
		  end//for	  
		  
		  
		// Add stimulus here

	end
      
endmodule

