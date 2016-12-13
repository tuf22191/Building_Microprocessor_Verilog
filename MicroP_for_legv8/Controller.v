`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:13:49 12/10/2016 
// Design Name: 
// Module Name:    Controller 
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
module Controller(
	input [9:0] opcode,
	output reg mem_write_dm, mem_read_dm, branch, reg_write_rf, mux2, mux3,
	output reg [2:0] alu_op                               //rf is for register file
    );

    
    
always @(opcode) begin 
    
    case(opcode)
	 10'b1000101000: begin  //ADDITION !!!
		alu_op = 3'b010;// to add in ALU
		mem_read_dm = 0;
		mem_write_dm = 0;
		branch = 0;
		reg_write_rf = 1;
		mux2 = 0;
		mux3 = 1;
	 end
	 	 
	 10'b1100101100: begin  //SUBTRACTION !!!
		alu_op = 3'b001;//
		mem_read_dm = 0;
		mem_write_dm = 0;
		branch = 0;
		reg_write_rf = 1;
		mux2 = 0;
		mux3 = 1;
	 end
		 
	 10'b0000011111: begin  //DIVISION !!!
		alu_op = 3'b011;// 
		mem_read_dm = 0;
		mem_write_dm = 0;
		branch = 0;
		reg_write_rf = 1;
		mux2 = 0;
		mux3 = 1;
	 end
		  
    10'b1111100000: begin  //MULTIPLICATION !!!
		alu_op = 3'b100;//
		mem_read_dm = 0;
		mem_write_dm = 0;
		branch = 0;
		reg_write_rf = 1;
		mux2 = 0;
		mux3 = 1;
	 end	 
	
	 10'b1010101010: begin  //Load Immediate Instruction !!!
		alu_op = 3'b010;// use addition from ALU of immediate sign extended and zero
		mem_read_dm = 0;  //first register in register file is always 0!
		mem_write_dm = 0;
		branch = 0;
		reg_write_rf = 1;
		mux2 = 0; 
		mux3 = 0; //where the sign extensition is done
		//#15;
	 end //time critical?
	
	 10'b1111011010: begin  //Loading Instruction from Data Memory!!
		alu_op = 3'b111;// 3'b111 for ALU is default. So, result =0
		mem_read_dm = 1; // 986=load , 984= store
		mem_write_dm = 0;
		branch = 0;
		reg_write_rf = 1;
		mux2 = 2;
		mux3 = 0;
	 end	 
	
	 10'b1111011000: begin  //Storing Instruction from Data Memory!!
		alu_op = 3'b101;// Add a zero to address
		mem_read_dm = 0; // 986=load , 984= store
		mem_write_dm = 1;   //use bottom register for location of rf that has the data for data memory
		branch = 0;           // b/c data memory gets second register automatically
		reg_write_rf = 0;    //use top reg for address
		mux2 = 1; //doesn't matter
		mux3 = 0; //doesn't matter
	 end	
	 
	 //To do , add the branching functionality 
//	 
//	 10'b1111011000: begin  //Unconditional Branching!!
//		alu_op = 3'b101;// Add a zero to address
//		mem_read_dm = 0; // 986=load , 984= store
//		mem_write_dm = 1;   //use bottom register for location of rf that has the data for data memory
//		branch = 0;           // b/c data memory gets second register automatically
//		reg_write_rf = 0;    //use top reg for address
//		mux2 = 1; //doesn't matter
//		mux3 = 0; //doesn't matter
//	 end	
//	 
//	 10'b1111011000: begin  //Storing Instruction from Data Memory!!
//		alu_op = 3'b101;// Add a zero to address
//		mem_read_dm = 0; // 986=load , 984= store
//		mem_write_dm = 1;   //use bottom register for location of rf that has the data for data memory
//		branch = 0;           // b/c data memory gets second register automatically
//		reg_write_rf = 0;    //use top reg for address
//		mux2 = 1; //doesn't matter
//		mux3 = 0; //doesn't matter
//	 end	
	  
	 default: begin 
		alu_op = 0;
		mem_write_dm =0; 
		mem_read_dm =0; 
		branch =0; 
		reg_write_rf =0; 
		mux2 =0;
		mux3 =0;
	 end//default
	 endcase
	

end//always

endmodule
