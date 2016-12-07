`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:10:39 12/06/2016
// Design Name:   Mux2
// Module Name:   C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/TB_Mux2.v
// Project Name:  MicroP_for_legv8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Mux2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_Mux2;

	// Inputs
	reg [63:0] data_mem_in;
	reg [63:0] alu_in;
	reg  mux_2_control;
	reg clk;
	// Outputs
	wire [63:0] data_out;

	// Instantiate the Unit Under Test (UUT)
	Mux2 uut (
		.data_mem_in(data_mem_in), 
		.alu_in(alu_in), 
		.data_out(data_out), 
		.mux_2_control(mux_2_control)
	);

    always begin
	 #11000000;
	 $display("Simulation ended for Mux2");
	 $finish;
	 end
	 
	 always begin
	 clk = 1;
	 #10;
	 clk=0;
	 #10;	 
	 end


	initial begin
		// Initialize Inputs
		data_mem_in = 0;
		alu_in = 0;
		mux_2_control = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		data_mem_in = 42;
		mux_2_control = 1;
		@(negedge clk)
		if(data_out != data_mem_in)begin
		
		$display("mux control value 1 not working");
		end
		  
		 
		alu_in = 3;
		mux_2_control = 1;
		@(negedge clk)
		if(data_out != data_mem_in)begin
		
		$display("mux control value 1 not working");
		end 
		 
		 
		alu_in = 23;
		mux_2_control = 0;
		@(negedge clk)
		if(data_out != 23)begin
		
		$display("mux control value 0 not working");
		end 
		 
		// Add stimulus here

	end
      
endmodule

