`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:20:23 12/05/2016 
// Design Name: 
// Module Name:    Sixty_Four_Bit_Adder 
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
module Sixty_Four_Bit_Adder(
    output [63:0] sum,
    output c_out,
    input [63:0] a,
    input [63:0] b,
    input c_in
    );

wire c_1to2, c_2to3, c_0to1;


Sixteen_Bit_Adder a1 (.c_in(c_in), .a(a[15:0]), .b(b[15:0]), .sum(sum[15:0]), .c_out(c_0to1));
Sixteen_Bit_Adder a2 (.c_in(c_0to1), .a(a[31:16]), .b(b[31:16]), .sum(sum[31:16]), .c_out(c_1to2));
Sixteen_Bit_Adder a3 (.c_in(c_1to2), .a(a[47:32]), .b(b[47:32]), .sum(sum[47:32]), .c_out(c_2to3));
Sixteen_Bit_Adder a4 (.c_in(c_2to3), .a(a[63:48]), .b(b[63:48]), .sum(sum[63:48]), .c_out(c_out));


endmodule
