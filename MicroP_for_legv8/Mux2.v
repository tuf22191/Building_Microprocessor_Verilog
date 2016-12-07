`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:59:52 12/06/2016 
// Design Name: 
// Module Name:    Mux2 
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
module Mux2(
    input [63:0] data_mem_in,
    input [63:0] alu_in,
    output [63:0] data_out,
    input mux_2_control
    );
//if 1 for selecter, send the top
    assign data_out = (mux_2_control)? data_mem_in: alu_in;

endmodule
