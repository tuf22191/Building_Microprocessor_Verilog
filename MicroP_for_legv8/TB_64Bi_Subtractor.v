`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:52:22 12/05/2016
// Design Name:   Sixty_Four_Bit_Subtractor
// Module Name:   C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/TB_64Bi_Subtractor.v
// Project Name:  MicroP_for_legv8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Sixty_Four_Bit_Subtractor
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_64Bi_Subtractor;

	// Inputs
	reg [63:0] a_in;
	reg [63:0] b_in;
	reg carry_in;
   reg clk;
	// Outputs
	wire carry_out;
	wire [63:0] difference;

	// Instantiate the Unit Under Test (UUT)
	Sixty_Four_Bit_Subtractor uut (
		.a_in(a_in), 
		.b_in(b_in), 
		.carry_in(carry_in), 
		.carry_out(carry_out), 
		.difference(difference)
	);

    always begin
		clk = 1;
		#10;
		clk =0;
		#10;
	 end
 
	 always begin
		#200;
		$display("Sim Fin");
		$finish;
	 end	
	 
	 integer a,b,diff;
	 
	 initial begin
		// Initialize Inputs
		a_in = 0;
		b_in = 0;
		carry_in = 0;
      
		// Wait 100 ns for global reset to finish
		#100;
        
		 
       a = 54;
		 b = 17;
		 diff = 54-17;
		 a_in = {32'b00000000000000000000000000000000,a};
		 b_in = {32'b00000000000000000000000000000000,b};
		 @(negedge clk)
		 //@(negedge clk)
		 if({32'b00000000000000000000000000000000,diff}!= difference) begin
		 $display("Sub1 is wrong");
		 end
		 
		 
		 
		 a = 54;
		 b = -17;
		 diff = 54+17;
		 a_in = {32'b00000000000000000000000000000000,a};
		 b_in = {32'b11111111111111111111111111111111,b};
		 @(negedge clk)
		 //@(negedge clk)
		 if({32'b00000000000000000000000000000000,diff}!= difference) begin
		 $display("Sub2 is wrong");
		 end
 		 
		 a = 10;
		 b = 17;
		 diff = 10-17;
		 a_in = {32'b00000000000000000000000000000000,a};
		 b_in = {32'b00000000000000000000000000000000,b};
		 @(negedge clk)
		 //@(negedge clk)
		 if({32'b11111111111111111111111111111111,diff}!= difference) begin
		 $display("Sub2 is wrong");
		 end
		// Add stimulus here

	end
      
endmodule

