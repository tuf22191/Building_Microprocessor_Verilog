`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:50:21 12/05/2016 
// Design Name: 
// Module Name:    Thirty_Two_Bit_Multiplier 
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

/*

"An output reg foo is just shorthand for output foo_wire; reg foo; assign foo_wire = foo. It's handy when you plan to register that output anyway. 
I don't think input reg is meaningful for module (perhaps task).  input wire and output wire are the same as input and output: it's just more explicit." 

by Ben Jackson


*/

//////////////////////////////////////////////////////////////////////////////////
module Thirty_Two_Bit_Multiplier(
    input [63:0] a,
    input [63:0] b,
    output wire [63:0] product
    );
  
    
   
    assign product = a[31:0]*b[31:0];
  
  
  //The other way to do it! Just showing you that I know how to do it. Although the below had a bug. 
   /*assign product = {64{a[0]}} & b[63:0] +  
              ({64{a[1]}} & b[63:0])<<1 +
              ({64{a[2]}} & b[63:0])<<2 +
              ({64{a[3]}} & b[63:0])<<3 +
              ({64{a[4]}} & b[63:0])<<4 +
              ({64{a[5]}} & b[63:0])<<5 +
              ({64{a[6]}} & b[63:0])<<6 +
              ({64{a[7]}} & b[63:0])<<7 +
              ({64{a[8]}} & b[63:0])<<8 +
              ({64{a[9]}} & b[63:0])<<9 +
              ({64{a[10]}} & b[63:0])<<10 +
              ({64{a[11]}} & b[63:0])<<11 +
              ({64{a[12]}} & b[63:0])<<12 +
              ({64{a[13]}} & b[63:0])<<13 +
              ({64{a[14]}} & b[63:0])<<14 +
              ({64{a[15]}} & b[63:0])<<15 +
              ({64{a[16]}} & b[63:0])<<16 +
              ({64{a[17]}} & b[63:0])<<17 +
              ({64{a[18]}} & b[63:0])<<18 +
              ({64{a[19]}} & b[63:0])<<19 +
              ({64{a[20]}} & b[63:0])<<20 +
              ({64{a[21]}} & b[63:0])<<21 +
              ({64{a[22]}} & b[63:0])<<22 +
              ({64{a[23]}} & b[63:0])<<23 +
              ({64{a[24]}} & b[63:0])<<24 +
              ({64{a[25]}} & b[63:0])<<25 +
				  ({64{a[26]}} & b[63:0])<<26 +
              ({64{a[27]}} & b[63:0])<<27 +
              ({64{a[28]}} & b[63:0])<<28 +
              ({64{a[29]}} & b[63:0])<<29 +
              ({64{a[30]}} & b[63:0])<<30 +
              ({64{a[31]}} & b[63:0])<<31 +
              ({64{a[32]}} & b[63:0])<<32;*/
endmodule
