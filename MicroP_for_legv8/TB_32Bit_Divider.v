`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:45:47 12/05/2016
// Design Name:   Thirty_Two_Bit_Divider
// Module Name:   C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/TB_32Bit_Divider.v
// Project Name:  MicroP_for_legv8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Thirty_Two_Bit_Divider
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_32Bit_Divider;

	// Inputs
	reg [63:0] dividend;
	reg [63:0] divisor;
   reg clk;
	// Outputs
	wire [63:0] quotient;

	// Instantiate the Unit Under Test (UUT)
	Thirty_Two_Bit_Divider uut (
		.dividend(dividend), 
		.divisor(divisor), 
		.quotient(quotient)
	);



   always begin
		clk = 1;
		#10;
		clk =0;
		#10;
	 end
 
	 always begin
		#11000000;
		$display("Sim Fin");
		$finish;
	 end	
	 
 
	initial begin
		// Initialize Inputs
		dividend = 0;
		divisor = 1;

		// Wait 100 ns  for global reset to finish
		#100;
        
		  
		dividend = 20;divisor = 5;
		@(negedge clk)
		if(quotient[2:0]!={3'b100}) begin
		$display("Divider not working");
		end
		
		dividend = 2000;divisor = 50;
		@(negedge clk)
		if(quotient[31:0]!=40) begin
		$display("Divider not working");
		end
		
		dividend = 19;divisor = 6;
		@(negedge clk)
		if(quotient[31:0]!=3) begin
		$display("Divider not working");
		end		
		
		dividend = 34;divisor = 3;
		@(negedge clk) 
		if(quotient[31:0]!=11) begin
		$display("Divider not working");
		end		
		
		// Add stimulus here
      $display("End of test  for divider module");
	end
      
endmodule

