`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:19:19 12/05/2016 
// Design Name: 
// Module Name:    Sixty_Four_Bit_Subtractor 
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
module Sixty_Four_Bit_Subtractor(
    input [63:0] a_in,
    input [63:0] b_in,
    input carry_in,
	 output carry_out,
	 output [63:0] difference
    );

   reg to_1 = 1;
	//Adder information 
	//output [63:0] sum,
    //output c_out,
    //input [63:0] a,
    //input [63:0] b,
    //input c_in
    //always begin
	 //one_complement  <= ~b_in;
	 //end
 
	Sixty_Four_Bit_Adder sub (.sum(difference), .c_out(carry_out), .a(a_in), .b(~b_in), .c_in(to_1));;

endmodule
