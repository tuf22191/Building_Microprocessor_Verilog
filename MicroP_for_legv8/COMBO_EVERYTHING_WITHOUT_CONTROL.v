`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:29:36 12/12/2016
// Design Name:   Thirty_Two_Bit_Divider
// Module Name:   C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/COMBO_EVERYTHING_WITHOUT_CONTROL.v
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

module COMBO_EVERYTHING_WITHOUT_CONTROL;

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
		.address_counter(data_out), //done
		.address(address1), //done
		.reset(reset),  //done
		.clk(clk)//done
	);
   ////////////////////////////////////////INSTRUCTION MEMORY

	// Instantiate the Unit Under Test (UUT)
	Instruction_Memory_Thirty_Two_Bit uut2 (
		.instruction(instruction), //done
		.address(address1), //done
		.clk(clk) //done
	);
	///////////////////////////////////////CONTROLLER
	wire mem_write_dm;
	wire mem_read_dm;
	wire branch;
	wire reg_write_rf;
	wire mux2;
	wire mux3;
	wire [2:0] alu_op;

	// Instantiate the Unit Under Test (UUT)
	Controller uut3 (
		.opcode(instruction[31:22]), //done
		.mem_write_dm(mem_write_dm), //done
		.mem_read_dm(mem_read_dm), //done
		.branch(branch),  //done
		.reg_write_rf(reg_write_rf), //done
		.mux2(mux2), //done
		.mux3(mux3), //done
		.alu_op(alu_op)//done
	);
	
	//////////////////////////////////////// Adder1
	// Inputs
	//reg [31:0] b_in;
	wire [31:0] sum;

	// Instantiate the Unit Under Test (UUT)
	Adder1_32bit_adder uut4 (
		.b_in(address1), //done
		.sum(sum) //done
	);
	
	////////////////////////////////////////Mux1
		// Inputs
	//reg [31:0] adder_1;
	//reg [31:0] adder_2;
	//reg mux_1_control;
    wire mux1;
	// Outputs

	// Instantiate the Unit Under Test (UUT)
	Mux1 uut5 (          //CHECK THE mux1 definition
		.adder_1(sum),//adder1 really is adder1 from outisde 
		.adder_2(sum2), //done
		.mux_1_control(mux1), //done
		.data_out(data_out) //done
	);
	
	////////////////////////////////////////Adder2
	
	// Instantiate the Unit Under Test (UUT)
	Adder2_32bit_adder uut6 (
			.a_in(address1), 
			.b_in(instruction), 
			.sum(sum2)
		);
	
	//////////////////////////////////////////////REGISTER FILE
		// Inputs
		//reg [4:0] read_reg_address_1;
		//reg [4:0] read_reg_address_2;
		reg [63:0] data;
		//reg [4:0] write_reg_address;
		reg reg_write;
		//reg clk;

		// Outputs
		wire [63:0] reg_out_1_rf;
		wire [63:0] reg_out_2_rf;
	   wire [63:0] data_out_mux2; //used by mux2 and also data of register file


	// Instantiate the Unit Under Test (UUT)
	Sixty_Four_Bit_Register_File uut7 (
		.read_reg_address_1(instruction[21:17]), //h. up
		.read_reg_address_2(instruction[9:5]),//h. up 
		.data(data_out_mux2), 
		.write_reg_address(instruction[4:0]), //h. up
		.reg_write(reg_write_rf), //h. up
		.clk(clk), //h. up
		.reg_out_1(reg_out_1_rf), //done
		.reg_out_2(reg_out_2_rf) //done
	);

   //////////////////////////////////////////////MUX2
		// Inputs
		reg [63:0] data_mem_in;
		wire [63:0] alu_result; //used by the ALU and MUX2
		//reg  mux_2_control;
		//reg clk;
		// Outputs
		wire [31:0] data_read_out; // For mux2 and the data memory

	// Instantiate the Unit Under Test (UUT)
	Mux2 uut (
		.data_mem_in(data_read_out), //done
		.alu_in(alu_result), //done
		.data_out(data_out_mux2), //wired
		.mux_2_control(mux2)//wired
	);

   //////////////////////////////////////////////MUX3
		// Inputs
		//reg [63:0] register;
		reg [63:0] immediate;
		//reg control;

		// Outputs
		wire [63:0] result_alu_bottom;
	   wire [63:0] sign_extend_out; //used by the sign extend and then mux3
		
	// Instantiate the Unit Under Test (UUT)
	Mux3 uut (
		.register(reg_out_2_rf), //done
		.immediate(sign_extend_out), //done
		.control(mux3), //wire
		.result(result_alu_bottom) //done
	);
	
	//////////////////////////////////////////////SIGN EXTENSION
		// Inputs
		//reg [6:0] sign_extend_in;

		// Output
	// Instantiate the Unit Under Test (UUT)
	Sixty_Four_Bit_Sign_Extender uut (
		.in(instruction[16:10]), 
		.out(sign_extend_out)
	);

	 /////////////////////////////////////////////ALU WORKING
		// Inputs
		//reg [63:0] a_in;
		//reg [63:0] b_in;
		//reg [2:0] alu_operation;
		//reg clk;
		
		
		// Outputs
		wire zero;
		//wire [63:0] result_ALU;
   
	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.a_in(reg_out_1_rf), //done
		.b_in(result_alu_bottom), //done
		.alu_operation(alu_op), //done
		.zero(zero), //done
		.result(alu_result) //done
	);
	
	////////////////////////////////////////////////DATA MEMORY
	
		// Inputs
		//reg read_data_flag;
		//reg write_data_flag;
		//reg [31:0] data_to_write;
		//reg [7:0] address_of_data;
		//reg clk;

	// Outputs

	// Instantiate the Unit Under Test (UUT)
	Data_Memory uut (
		.read_data_flag(mem_read_dm), //done
		.write_data_flag(mem_write_dm),//done 
		.data_to_write(reg_out_2_rf), //done
		.address_of_data(alu_result[7:0]), //done
		.clk(clk), //done
		.data_read_out(data_read_out) //done
	);
	
	////////////////////////////////////////////////Branching AND gate
	
	and uut ( mux1, zero, branch); //done
	
	
	
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

