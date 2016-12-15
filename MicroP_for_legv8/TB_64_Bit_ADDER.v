`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:34:30 12/14/2016
// Design Name:   Sixty_Four_Bit_Adder
// Module Name:   C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/TB_64_Bit_ADDER.v
// Project Name:  MicroP_for_legv8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Sixty_Four_Bit_Adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_64_Bit_ADDER;

	// Inputs
	reg [63:0] a;
	reg [63:0] b;
	reg c_in;
   reg clk;
	
	// Outputs
	wire [63:0] sum;
	wire c_out;

	// Instantiate the Unit Under Test (UUT)
	Sixty_Four_Bit_Adder uut (
		.sum(sum), 
		.c_out(c_out), 
		.a(a), 
		.b(b), 
		.c_in(c_in)
	);


	//integer i;
   //integer res;
	
	integer  i;
	reg [63:0] res;
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
			a=0;
			b=0;
						
			#10;
			
			res = 1<<i+i<<30;
			a=2*i;
			b=i<<30; 
			#10;
			if(sum!= res) begin
				$display("mismatch");
			end//if 
			
			$display("a is %d , b is %d, sum is %d, real sum is %d", a, b, sum, res);
		end //for


	end //initial
      
endmodule

