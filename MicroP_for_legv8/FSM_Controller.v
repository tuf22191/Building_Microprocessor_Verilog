`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:36:24 12/13/2016 
// Design Name: 
// Module Name:    FSM_Controller 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module FSM_Controller(
		input clk,
		input [9:0] opcode,
      input [31:0] instruction,             		//regular controller
		output reg mem_write_dm, mem_read_dm, branch, reg_write_rf, mux2, mux3,
		output reg [4:0] read_reg_1, read_reg_2, write_reg,
		output reg [6:0] sign_extension_bits,
		output reg [2:0] alu_op  
    );
	 //how many states
	 reg [3:0] state = 0, next_state;
	 
	 always@(posedge clk)begin
		state = next_state;
	 end
	 
	 //reg [2:0] counter; //for seeing if the register is good
	 
	 parameter START = 0;
	 parameter FETCH = 1;
	 parameter LOAD_IMMEDIATE_INSTRUCTION = 2;
	 parameter ARITHMETIC_INSTRUCTION_A = 3;
	 parameter ARITHMETIC_INSTRUCTION_B = 4;
    parameter STORE_INSTRUCTION = 5;
    parameter LOAD_IMMEDIATE_INSTRUCTION_A=6;
    parameter LOAD_IMMEDIATE_INSTRUCTION_B =7;
 
    always@(state)begin
		
		case(state)
			START: begin
			   $display("initialized in start");
				mem_write_dm = 0;
				mem_read_dm = 0;
				branch = 0;
				reg_write_rf=0;
				mux2=0; mux3=0;
				read_reg_1 = 5'b00000; 
				read_reg_2= 5'b00000; 
				write_reg= 5'b00000;
				sign_extension_bits=7'b0000000;
				alu_op =3'b101; 
			
			   if(instruction == 0)begin
				   next_state = START;
				end 
				else begin
				   next_state = FETCH;
				end
				
			end //end start
			
			FETCH: begin //
	          $display("in fetch! %d is opcode", opcode);
         	case(opcode)
				 10'b1000101000: begin  //ADDITION !!!
				  $display("in addition");
					alu_op = 3'b010;// to add in ALU
					mem_read_dm = 0;
					mem_write_dm = 0;
					branch = 0;
					//reg_write_rf = 1;
					mux2 = 0;
					mux3 = 1;
					next_state=ARITHMETIC_INSTRUCTION_A;
				 end
					 
				 10'b1100101100: begin  //SUBTRACTION !!!
				   $display("in subtraction");
					alu_op = 3'b001;//
					mem_read_dm = 0;
					mem_write_dm = 0;
					branch = 0;
					//reg_write_rf = 1;
					mux2 = 0;
					mux3 = 1;
					next_state=ARITHMETIC_INSTRUCTION_A;
				 end
					 
				 10'b0000011111: begin  //DIVISION !!!
					alu_op = 3'b011;// 
					mem_read_dm = 0;
					mem_write_dm = 0;
					branch = 0;
					//reg_write_rf = 1;
					mux2 = 0;
					mux3 = 1;
					next_state=ARITHMETIC_INSTRUCTION_A;
				 end
					  
				 10'b1111100000: begin  //MULTIPLICATION !!!
					alu_op = 3'b100;//
					mem_read_dm = 0;
					mem_write_dm = 0;
					branch = 0;
					//reg_write_rf = 1;
					mux2 = 0;
					mux3 = 1;
					next_state=ARITHMETIC_INSTRUCTION_A;
				 end	 
				
				 10'b1010101010: begin  //Load Immediate Instruction !!!
					alu_op = 3'b010;// use addition from ALU of immediate sign extended and zero
					mem_read_dm = 0;  //first register in register file is always 0!
					mem_write_dm = 0;
					branch = 0;
					//reg_write_rf = 1;
					mux2 = 0; 
					mux3 = 0; //where the sign extensition is done
					next_state =LOAD_IMMEDIATE_INSTRUCTION_A;
				 end 
			   
				 10'b1111011000: begin  //Storing Instruction to Data Memory!!
					alu_op = 3'b101;// Add a zero to address
					mem_read_dm = 0; // 986=load , 984= store
					mem_write_dm = 1;   //use bottom register for location of rf that has the data for data memory
					branch = 0;           // b/c data memory gets second register automatically
					//reg_write_rf = 0;    //use top reg for address
					mux2 = 1; //doesn't matter
					mux3 = 0; //doesn't matter
	           end	
				
			  endcase //the opcode
			   //SET THE REGISTER FILE
				reg_write_rf = 0;
				read_reg_1 = instruction[21:17];
				read_reg_2 =instruction[9:5];
				write_reg = instruction[4:0];
				sign_extension_bits = instruction[16:10];
			   $display("next_state = %d", next_state);
				
			end //end Fetch
			
			ARITHMETIC_INSTRUCTION_A: begin
				reg_write_rf = 1; //write the result
				next_state = ARITHMETIC_INSTRUCTION_B;
			end //end ARITHMETIC_INSTRUCTION
			
		   ARITHMETIC_INSTRUCTION_B: begin
				reg_write_rf = 0; //now stop reading the result
				next_state = FETCH;
			end //end ARITHMETIC_INSTRUCTION
		
		   LOAD_IMMEDIATE_INSTRUCTION_A: begin
				reg_write_rf = 1; //now stop reading the result
				next_state = LOAD_IMMEDIATE_INSTRUCTION_B;
			end //end ARITHMETIC_INSTRUCTION
		
		   LOAD_IMMEDIATE_INSTRUCTION_B: begin
				reg_write_rf = 1; //now stop reading the result
				next_state = FETCH;
			end //end ARITHMETIC_INSTRUCTION
		   
		endcase//end the case
	 end //always

endmodule
