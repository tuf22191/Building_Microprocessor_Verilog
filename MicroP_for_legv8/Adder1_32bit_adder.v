`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:53:24 12/07/2016 
// Design Name: 
// Module Name:    Adder1_32bit_adder 
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
module Adder1_32bit_adder(
    input [31:0] b_in,
    output [31:0] sum
    );

     //reg [31:0] a_in = 4;

     Adder2_32bit_adder adder (.a_in(32'b00000000000000000000000000000001), .b_in(b_in), .sum(sum));

endmodule
