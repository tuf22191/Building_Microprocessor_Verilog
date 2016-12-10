`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:38:30 12/08/2016
// Design Name:   ALU
// Module Name:   C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/TB_ALU.v
// Project Name:  MicroP_for_legv8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_ALU;

	// Inputs
	reg [63:0] a_in;
	reg [63:0] b_in;
	reg [2:0] alu_operation;
	reg clk;
	
	
	// Outputs
	wire zero;
	wire [63:0] result;
   
	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.a_in(a_in), 
		.b_in(b_in), 
		.alu_operation(alu_operation), 
		.zero(zero), 
		.result(result)
	);

   
   always begin
	clk=1;
	#10;
	clk=0;
	#10;	
	end

	always begin
	$display("Simulation Starting : ***********");
	#110000;
	$display("Simulation Ended : Success ******");
	$finish;
	end


	initial begin
		// Initialize Inputs
		a_in = 0;
		b_in = 0;
		alu_operation = 0;

		// Wait 100 ns for global reset to finish
		#100;
		$display("hello");
       // result =0;
		a_in = 5;
		b_in =6;
		alu_operation = 0;
		@ (posedge clk)
		//if(result ==  64'b0000000000000000000000000000000000000000000000000000000000001011)begin 
		//$display("Add working+++++++");
		//end
		  
		  
		a_in = 8;
		b_in =7;
		alu_operation = 3'b100;
		@ (posedge clk)
		if(result == 56)begin 
		$display("Multiply working *******");
		end
		    
		  
		  
		// Add stimulus here

	end
      
endmodule

