`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:54:00 12/13/2016
// Design Name:   FSM_Controller
// Module Name:   C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/TB_FSM_CONTROLLER.v
// Project Name:  MicroP_for_legv8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FSM_Controller
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_FSM_CONTROLLER;

	// Inputs
	reg clk;
	reg [9:0] opcode;
	reg [31:0] instruction;

	// Outputs
	wire mem_write_dm;
	wire mem_read_dm;
	wire branch;
	wire reg_write_rf;
	wire mux2;
	wire mux3;
	wire [4:0] read_reg_1;
	wire [4:0] read_reg_2;
	wire [4:0] write_reg;
	wire [6:0] sign_extension_bits;
	wire [2:0] alu_op;

	// Instantiate the Unit Under Test (UUT)
	FSM_Controller uut (  
		.clk(clk), 
		.opcode(opcode), 
		.instruction(instruction),  
		.mem_write_dm(mem_write_dm), 
		.mem_read_dm(mem_read_dm), 
		.branch(branch), 
		.reg_write_rf(reg_write_rf),  
		.mux2(mux2), 
		.mux3(mux3), 
		.read_reg_1(read_reg_1), 
		.read_reg_2(read_reg_2), 
		.write_reg(write_reg), 
		.sign_extension_bits(sign_extension_bits), 
		.alu_op(alu_op)
	);

   wire [63:0] pin6;
	wire [63:0] reg_out_1_rf;
		wire [63:0] reg_out_2_rf;
	   wire [63:0] data_out_mux2; //used by mux2 and also data of register file


	// Instantiate the Unit Under Test (UUT)
	Sixty_Four_Bit_Register_File uut7 (
		.read_reg_address_1(read_reg_1), //h. up
		.read_reg_address_2(read_reg_2),//h. up 
		.data(data_out_mux2), 
		.write_reg_address(write_reg), //h. up
		.reg_write(reg_write_rf), //h. up
		.clk(clk), //h. up
		.reg_out_1(reg_out_1_rf), //done
		.reg_out_2(reg_out_2_rf), //done
      .answer_answer2(pin6)
	);
	
	
   always begin
	clk=1;
	#10;
	clk=0;
	#10;	
	end

always begin 
		#2200
		$display("Simulation ENDDDED!");
		$finish; // because always blocks are executing in parallel, it works
	end


	initial begin
		// Initialize Inputs
		//opcode = 10'b1100101100; //subtraction  - 812
		//instruction = {10'b1100101100,5'b00010,7'b0000000 ,5'b00011,5'b00110};
		
	
		// Wait 100 ns for global reset to finish
		#120;
		$display("STARTING NOW!");
		
		opcode = 10'b1010101010; //loading  - 682
      instruction = {10'b1010101010,5'b00000,7'b0001100 ,5'b00000,5'b00010};
		#120;
		
		
		opcode = 10'b1100101100; //subtraction
		instruction = {10'b1100101100,5'b00010,7'b0000000 ,5'b00011,5'b00110};
		#120;
   
		
		opcode = 10'b1010101010; //loading
      instruction = {10'b1010101010,5'b00000,7'b0001100 ,5'b00000,5'b00010};
		#120;
		
		opcode = 10'b1100101100; //subtraction
		instruction = {10'b1100101100,5'b00010,7'b0000000 ,5'b00011,5'b00110};
		#120;
    	       
		// Add stimulus here

	end 
      
endmodule

