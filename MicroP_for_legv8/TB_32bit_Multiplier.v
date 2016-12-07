`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:04:09 12/05/2016
// Design Name:   Thirty_Two_Bit_Multiplier
// Module Name:   C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/TB_32bit_Multiplier.v
// Project Name:  MicroP_for_legv8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Thirty_Two_Bit_Multiplier
//
// Dependencies:
//  
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_32bit_Multiplier;

	// Inputs
	reg [63:0] a;
	reg [63:0] b;
   reg clk;
	
	// Outputs
	wire [63:0] product;

	// Instantiate the Unit Under Test (UUT)
	Thirty_Two_Bit_Multiplier uut (
		.a(a), 
		.b(b), 
		.product(product)
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
	 
	 integer a_int,b_int,prod, i;

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		  
		for(i=0;i<1000;i=i+1)begin
          a_int=i;
			 b_int=i;
			 a={32'b00000000000000000000000000000000,i};
			 b={32'b00000000000000000000000000000000,i};
			 prod = a*b;
			  
          @(negedge clk)
			 
			 if({32'b00000000000000000000000000000000,prod}!= product) begin
				$display("Multiplication is wrong is wrong");
		    end
			  
		end
		
		for(i=0;i<1000;i=i+1)begin //work on the negative part of the multiplier
          //a_int=i;
			 //b_int=~i;
			 a={32'b00000000000000000000000000000000,i};
			 b={32'b11111111111111111111111111111111,~i};
			 prod = a*b;
			  
          @(negedge clk)
			 
			 if({32'b11111111111111111111111111111111,prod}!= product) begin
				$display("Multiplication is wrong is wrong negative");
		    end
			  
		end
		  
		  
		// Add stimulus here

	end
      
endmodule

