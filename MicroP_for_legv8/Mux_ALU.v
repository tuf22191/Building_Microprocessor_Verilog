`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:53:26 12/09/2016 
// Design Name: 
// Module Name:    Mux_ALU 
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
module Mux_ALU(
    input [63:0] a,
    input [63:0] b,
    input [63:0] c,
    input [63:0] d,
    output [63:0] out,
    input [2:0] control
    );
    
	 always @ (*) begin
	     out<= 64'b0000000000000000000000000000000000000000000000000000000000000000;
	 end
	 

endmodule
