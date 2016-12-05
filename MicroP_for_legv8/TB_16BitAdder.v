`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:33:11 12/05/2016
// Design Name:   Sixteen_Bit_Adder
// Module Name:   C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/TB_16BitAdder.v
// Project Name:  MicroP_for_legv8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Sixteen_Bit_Adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_16BitAdder;

	// Inputs
	reg [15:0] a;
	reg [15:0] b;
	reg c_in;
	reg clk;
   
	// Outputs
	wire [15:0] sum;
	wire c_out;

	// Instantiate the Unit Under Test (UUT)
	Sixteen_Bit_Adder uut (
		.sum(sum), 
		.c_out(c_out), 
		.a(a), 
		.b(b), 
		.c_in(c_in)
	);

   

   always begin
	   clk = 1;
		#10;
		clk = 0;
		#10;	
	end
	
	always begin
	   #11000000 //waiting for a while before we finish
		$display("Simulation ended");
		$finish;	
	end
	
	
	//integer i;
   //integer res;
	
	integer  i;
	integer  res;
	initial begin
	$display("Simulation started");
		// Initialize Inputs
		a = 0;
		b = 0;
		c_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
         
		// Add stimulus here


      for(i = 0;i<32767;i=i+1)begin
			@(negedge clk);
			
			res = i+i;
			a=i;
			b=i;
			@(negedge clk);
			if({16'b0000000000000000,sum} != res) begin
				$display("mismatch");
			
			end//if
			
			$display("i is %d , sum is %d", i,sum);
		end //for


	end //initial
      
endmodule

