`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:03:59 11/21/2016 
// Design Name: 
// Module Name:    Four_Bit_Adder 
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
module Four_Bit_Adder(sum, c_out, a, b, c_in);
	output [3:0] sum;
	output c_out;
	input [3:0] a,b;
	input c_in;
	wire c_1to2, c_2to3, c_0to1;

one_bit_full_adder a1 (.c_in(c_in), .a(a[0]), .b(b[0]), .sum(sum[0]), .c_out(c_0to1));
one_bit_full_adder a2 (.c_in(c_0to1), .a(a[1]), .b(b[1]), .sum(sum[1]), .c_out(c_1to2));
one_bit_full_adder a3 (.c_in(c_1to2), .a(a[2]), .b(b[2]), .sum(sum[2]), .c_out(c_2to3));
one_bit_full_adder a4 (.c_in(c_2to3), .a(a[3]), .b(b[3]), .sum(sum[3]), .c_out(c_out));

endmodule
