`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:15:55 12/05/2016 
// Design Name: 
// Module Name:    Sixteen_Bit_Adder 
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
module Sixteen_Bit_Adder(
    output [15:0] sum,
    output c_out,
    input [15:0] a,
    input [15:0] b,
    input c_in
    ); 

wire c_1to2, c_2to3, c_0to1;

Four_Bit_Adder a1 (.c_in(c_in), .a(a[3:0]), .b(b[3:0]), .sum(sum[3:0]), .c_out(c_0to1));
Four_Bit_Adder a2 (.c_in(c_0to1), .a(a[7:4]), .b(b[7:4]), .sum(sum[7:4]), .c_out(c_1to2));
Four_Bit_Adder a3 (.c_in(c_1to2), .a(a[11:8]), .b(b[11:8]), .sum(sum[11:8]), .c_out(c_2to3));
Four_Bit_Adder a4 (.c_in(c_2to3), .a(a[15:12]), .b(b[15:12]), .sum(sum[15:12]), .c_out(c_out));


endmodule
