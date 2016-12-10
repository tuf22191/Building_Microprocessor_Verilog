`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:18:13 12/08/2016 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [63:0] a_in,
    input [63:0] b_in,
    input [2:0] alu_operation,
    output reg zero,
    output reg [63:0] result
    );
	 
	 wire [63:0] sub_output;
	 wire [63:0] add_output;
	 wire [63:0] divide_output;
	 wire [63:0] multiply_output;
	 reg carry_in  =1;
	 reg carry_out;
	 
	 initial begin
			result = 64'b0000000000000000000000000000000000000000000000000000000000000000; //initialize before, because we get the x's
	 end
	 
	 //instantiate with the wiring 
	  Sixty_Four_Bit_Subtractor subtractor (.a_in(a_in), .b_in(b_in), .carry_in(carry_in), .carry_out(carry_out), .difference(sub_output));
	  Sixty_Four_Bit_Adder adder (.sum(add_output), .c_out(carry_out), .a(a_in), .b(b_in),.c_in(0));
	  Thirty_Two_Bit_Multiplier multiplier (		.a(a_in), 		.b(b_in), 		.product(multiply_output));
	  Thirty_Two_Bit_Divider divider (	.dividend(a_in), 		.divisor(b_in), 		.quotient(divide_output)	);
	  

	 
	 always @(alu_operation)begin             // so if a is  reg and b is a reg as well we cannot do a = b; or assign a = b;. b must be a wire. 
	   //initialize before, other
		//result <= 0; 
	//	result =0; 
	   case(alu_operation) 
		
		  3'b010: result = a_in+b_in;//add_output;
		  3'b001: result = a_in-b_in;//sub_output;
		  3'b100: result = multiply_output;
	  	  3'b011: result = divide_output;
		  default: result=64'b0000000000000000000000000000000000000000000000000000000000000000;
		endcase
//		if(alu_operation == 3'b000)begin//+
//		     result = add_output;
//		end
//		else if(alu_operation == 3'b001)begin
//			 result = sub_output;
//		end
//		else if(alu_operation == 3'b100)begin
//			  result = multiply_output;
//		end
//		else if(alu_operation == 3'b011)begin
//		    result = divide_output;
//		end
//		else begin
//		   assign result=64'b0000000000000000000000000000000000000000000000000000000000000000;
//		end
		
      if(result ==0)begin 
		   zero =1;
		end
	   else begin
		   zero =0;
		end
		
		
		
	 end
	 
	 

endmodule
