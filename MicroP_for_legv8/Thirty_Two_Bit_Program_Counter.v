`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:09:05 12/08/2016 
// Design Name: 
// Module Name:    Thirty_Two_Bit_Program_Counter 
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
module Thirty_Two_Bit_Program_Counter(
    input [7:0] address_counter,
    output reg [7:0] address,
	 input reset,
    input clk
    );

     initial begin
	      address = 0 ;
	  end
     
     always @(*)begin  //you can change it to be on the clock
			if(reset)begin
				address <= 0;
			end
			else begin
			   address <= address_counter;
			end //else
  
	  end //always


endmodule
