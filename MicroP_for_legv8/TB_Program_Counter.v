`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:34:49 12/10/2016
// Design Name:   Thirty_Two_Bit_Program_Counter
// Module Name:   C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/TB_Program_Counter.v
// Project Name:  MicroP_for_legv8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Thirty_Two_Bit_Program_Counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_Program_Counter;

	// Inputs
	reg [7:0] address_counter;
	reg reset;
	reg clk;

	// Outputs
	wire [7:0] address;

	// Instantiate the Unit Under Test (UUT)
	Thirty_Two_Bit_Program_Counter uut (
		.address_counter(address_counter), 
		.address(address), 
		.reset(reset), 
		.clk(clk)
	);

     always begin
	clk=1;
	#10;
	clk=0;
	#10;	
	end

	always begin
	$display("Simulation Starting : ***********");
	#11000;
	$display("Simulation Ended : Success ******");
	$finish;
	end



	initial begin
		// Initialize Inputs
		address_counter = 0;
		reset = 1;
		

		// Wait 100 ns for global reset to finish
		#100;
				@(posedge clk)
				@(posedge clk)
				@(posedge clk)
				@(posedge clk)
		
      reset = 0;
		address_counter = address_counter +1;
		@(posedge clk)
		if(address!=1)begin
		$display("error1");
		end
		
		// 
		address_counter = address_counter +1;
		@(posedge clk)
		if(address!=2)begin
		$display("error2");
		end
		
		//adjust the address_counter
		address_counter = address_counter +1;
		@(posedge clk)
		if(address!=3)begin
		$display("error2");
		end
		
		//with the reset
		reset = 1;
		@(posedge clk)
		if(address!=0)begin
		$display("error4");
		end
		// Add stimulus here

	end
      
endmodule

