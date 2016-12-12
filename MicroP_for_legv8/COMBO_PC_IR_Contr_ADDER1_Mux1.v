`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:36:57 12/11/2016
// Design Name:   Adder1_32bit_adder
// Module Name:   C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/COMBO_PC_IR_Contr_ADDER1_Mux1.v
// Project Name:  MicroP_for_legv8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Adder1_32bit_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module COMBO_PC_IR_Contr_ADDER1_Mux1;

	// Inputs
	//reg [31:0] address_counter;
	reg reset;
	reg clk;

	// Outputs
	wire [31:0] address1; //adder2, pc, instruction memory
	wire [31:0] instruction; 
	wire [31:0] data_out; //BY PC and Mux1
	wire [31:0] sum2; //adder2 and mux1
	
	// Instantiate the Unit Under Test (UUT)
	Thirty_Two_Bit_Program_Counter uut (
		.address_counter(data_out), 
		.address(address1), 
		.reset(reset),  
		.clk(clk)
	);
   ////////////////////////////////////////

	// Instantiate the Unit Under Test (UUT)
	Instruction_Memory_Thirty_Two_Bit uut2 (
		.instruction(instruction), 
		.address(address1),
		.clk(clk)
	);
	///////////////////////////////////////
	wire mem_write_dm;
	wire mem_read_dm;
	wire branch;
	wire reg_write_rf;
	wire mux2;
	wire mux3;
	wire [2:0] alu_op;

	// Instantiate the Unit Under Test (UUT)
	Controller uut3 (
		.opcode(instruction[31:22]), 
		.mem_write_dm(mem_write_dm), 
		.mem_read_dm(mem_read_dm), 
		.branch(branch), 
		.reg_write_rf(reg_write_rf), 
		.mux2(mux2), 
		.mux3(mux3), 
		.alu_op(alu_op)
	);
	
	//////////////////////////////////////// Adder1
	// Inputs
	//reg [31:0] b_in;
	wire [31:0] sum;

	// Instantiate the Unit Under Test (UUT)
	Adder1_32bit_adder uut4 (
		.b_in(address1), 
		.sum(sum)
	);
	
	////////////////////////////////////////Mux1
		// Inputs
	//reg [31:0] adder_1;
	//reg [31:0] adder_2;
	//reg mux_1_control;

	// Outputs

	// Instantiate the Unit Under Test (UUT)
	Mux1 uut5 (
		.adder_1(sum),//adder1 really is adder1 from outisde 
		.adder_2(sum2), 
		.mux_1_control(1'b0), //UPDATE
		.data_out(data_out)
	);
	
	////////////////////////////////////////Adder2
	
	// Instantiate the Unit Under Test (UUT)
	Adder2_32bit_adder uut6 (
			.a_in(address1), 
			.b_in(instruction), 
			.sum(sum2)
		);
	
	
	
   always begin
	clk =1;#10;
	clk =0;#10;
	end
	
	always begin
	#1100;
	$finish("finished with simulation");
	end

	initial begin
		// Initialize Inputs
		
		
		// Wait 100 ns for global reset to finish
		#100;
         $monitor( "%g = clock , %d = address_counter , %d = address1, %d =instruction ",$time,data_out,address1, instruction);
		// Add stimulus here
      reset=1;
		#100;
//		@(posedge clk)
//		//address_counter = 1;
//		@(posedge clk)
//		//address_counter = 2;
//		@(posedge clk)
//		//address_counter = 3;
//		@(posedge clk)
//		//address_counter = 4;
//		@(posedge clk)
//		//address_counter = 5;
//		@(posedge clk)
//		//address_counter = 6;
//		@(posedge clk)
//		//address_counter = 7;
//		@(posedge clk)
		reset=0;
		#1000;
		//address_counter = 8;
		$display("CHECK BETWEEN 200 and 400 ns");
		$finish;
		
	end
      
endmodule

