`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:41:55 12/05/2016
// Design Name:   Data_Memory
// Module Name:   C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/TB_Data_Memory.v
// Project Name:  MicroP_for_legv8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Data_Memory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_Data_Memory;

	// Inputs
	reg read_data_flag;
	reg write_data_flag;
	reg [31:0] data_to_write;
	reg [7:0] address_of_data;
	reg clk;

	// Outputs
	wire [63:0] data_read_out;

	// Instantiate the Unit Under Test (UUT)
	Data_Memory uut (
		.read_data_flag(read_data_flag), 
		.write_data_flag(write_data_flag), 
		.data_to_write(data_to_write), 
		.address_of_data(address_of_data), 
		.clk(clk), 
		.data_read_out(data_read_out)
	);

    always begin
		clk = 1;
		#10;
		clk = 0;
		#10;
	 end

	//for the timing out of the application
	always begin 
		#11000000
		$display("Simulation ENDDDED!");
		$finish; // because always blocks are executing in parallel, it works
	end


    integer i;//for the for loop counter 

	initial begin
		// Initialize Inputs
		read_data_flag = 0;
		write_data_flag = 0;
		data_to_write = 0;
		address_of_data = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
		  read_data_flag=0;
		  #10;
		  i=0;
		  if(data_read_out == i)begin
				$display("data read out is 0 for read flag 0");
		  end
		
        read_data_flag=1;
		  for(i=0;i<256;i=i+1)begin
		     address_of_data = i;
		     @(negedge clk);
			  @(negedge clk);
			  if(data_read_out!=i)begin
		      $display("i value initialization not working");
		     end
			  $display("i is %d and data_read_out is %d", i, data_read_out); 
		  end
		  $display("passed second stage");
		  write_data_flag = 1;  
		  read_data_flag=1;
		  for(i=0;i<256;i=i+1)begin
		     address_of_data = i;
			  data_to_write = 5;
			  @(negedge clk);
		     @(negedge clk);
			  if(data_read_out!=5)begin
		      $display("i value initialization not working");
		     end
			  $display("i is %d and data_read_out is %d and address is %d", i, data_read_out, address_of_data); 
		  end
		  
		// Add stimulus here

	end
      
endmodule

