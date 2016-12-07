`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:27:44 12/05/2016 
// Design Name: 
// Module Name:    Data_Memory 
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
module Data_Memory(
    input wire read_data_flag,
    input wire write_data_flag,
    input wire [31:0] data_to_write,
    input wire [7:0] address_of_data,
	 input wire clk,
	 output reg [31:0] data_read_out
    );
	 
	 reg [31:0] THE_MEMORY [0:255];//
	 
	 integer i;
	 //initializae the data : SAW THIS ONLINE - So we have all 0's , do we have to initialize it?
	 initial begin   //probably do not need this
		data_read_out <= 0; //non blocking part
		for(i=0; i<256; i=i+1)begin
		 THE_MEMORY[i]= i;//0; //initialize  it
		end		
		//put the data here
	 end
	 
	 always @(posedge clk) 
		begin
	    if(write_data_flag == 1'b1) begin
		    THE_MEMORY[address_of_data] <= data_to_write;
		 end
		 if(read_data_flag == 1'b1) begin
		    data_read_out <= THE_MEMORY[address_of_data];
		 end
	 
	 end
	 


endmodule
