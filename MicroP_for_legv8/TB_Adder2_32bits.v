`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:46:48 12/07/2016
// Design Name:   Adder2_32bit_adder
// Module Name:   C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/TB_Adder2_32bits.v
// Project Name:  MicroP_for_legv8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Adder2_32bit_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_Adder2_32bits;

	// Inputs
	reg [31:0] a_in;
	reg [31:0] b_in;

	// Outputs
	wire [31:0] sum;

	// Instantiate the Unit Under Test (UUT)
	Adder2_32bit_adder uut (
		.a_in(a_in), 
		.b_in(b_in), 
		.sum(sum)
	);
   integer i, prod;
	initial begin
		// Initialize Inputs
		a_in = 0;
		b_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		  for(i=0;i<10100;i=i+1)begin
		  a_in = i;
		  b_in = i+1;
		  prod= i+(i+1);
		  #10;
		  if(sum!=prod)begin
		  $display("adder not working");
		  end//if
		  
		  end//for  
		  
		  
		  
		  
		// Add stimulus here

	end
      
endmodule

