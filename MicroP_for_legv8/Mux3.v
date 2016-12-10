`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:03:18 12/08/2016 
// Design Name: 
// Module Name:    Mux3 
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
module Mux3(
    input [63:0] register,
    input [63:0] immediate,
    input control,
    output [63:0] result
    );

      assign result = (control)? register: immediate; //+64 0's here?

endmodule
