`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:21:20 12/06/2016 
// Design Name: 
// Module Name:    Mux1 
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
module Mux1(
    input [31:0] adder_1,
    input [31:0] adder_2,
    input mux_1_control,
    output [31:0] data_out
    );

 assign data_out = (mux_1_control)? adder_2: adder_1;

endmodule
