`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:52:06 12/10/2016
// Design Name:   Sixty_Four_Bit_Sign_Extender
// Module Name:   C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/TB_Sign_Extender.v
// Project Name:  MicroP_for_legv8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Sixty_Four_Bit_Sign_Extender
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_Sign_Extender;

	// Inputs
	reg [4:0] in;

	// Outputs
	wire [63:0] out;

	// Instantiate the Unit Under Test (UUT)
	Sixty_Four_Bit_Sign_Extender uut (
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		
		in = 5'b11111;
		#100;
		if(out != 64'b1111111111111111111111111111111111111111111111111111111111111111)begin
		$display("Negative Sign Extension not working");
		end
		
		
		in = 5'b00000;
		#100;
		if(out != 64'b0000000000000000000000000000000000000000000000000000000000000000)begin
		$display("Zero Sign Extension not working");
		end
		
		in = 5'b10100;
		#100;
		if(out != 64'b1111111111111111111111111111111111111111111111111111111111110100)begin
		$display("Positive Sign Extension not working");
		end
		// Add stimulus here

	end
      
endmodule

