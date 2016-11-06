`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:15:53 11/06/2016 
// Design Name: 
// Module Name:    one_bit_full_adder 
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
module one_bit_full_adder(c_in, a, b, sum, c_out);

     input a, b, c_in;
	  output sum, c_out;
     wire w1, w2, w3; 
	  
	  half_adder adder1(.a(a),.b(b),.c_out(w2), .sum(w1));
	  half_adder adder2(.a(c_in),.b(w1),.c_out(w3), .sum(sum));
	  
	  or(c_out, w2, w3);


endmodule
