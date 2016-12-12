`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:44:11 12/07/2016 
// Design Name: 
// Module Name:    Adder2_32bit_adder 
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
module Adder2_32bit_adder(
    input [31:0] a_in,
    input [31:0] b_in,
    output [31:0] sum
    );


//reg c_in = 0;
wire c_1to2, c_0to1;


Sixteen_Bit_Adder a1 (.c_in(1'b0), .a(a_in[15:0]), .b(b_in[15:0]), .sum(sum[15:0]), .c_out(c_0to1));
Sixteen_Bit_Adder a2 (.c_in(c_0to1), .a(a_in[31:16]), .b(b_in[31:16]), .sum(sum[31:16]), .c_out(c_1to2));


endmodule
