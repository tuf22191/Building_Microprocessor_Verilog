`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:43:45 12/05/2016 
// Design Name: 
// Module Name:    Thirty_Two_Bit_Divider 
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
module Thirty_Two_Bit_Divider(
input wire [63:0] dividend,
input wire [63:0] divisor,
output wire [63:0] quotient
    );

assign quotient = dividend/divisor;

endmodule
