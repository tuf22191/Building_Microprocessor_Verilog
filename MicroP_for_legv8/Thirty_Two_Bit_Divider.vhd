----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:42:41 12/05/2016 
-- Design Name: 
-- Module Name:    Thirty_Two_Bit_Divider - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Thirty_Two_Bit_Divider is
    Port ( dividend : in  STD_LOGIC_VECTOR (0 downto 0);
           divisor : in  STD_LOGIC_VECTOR (0 downto 0);
           quotient  : out  STD_LOGIC_VECTOR (0 downto 0));
end Thirty_Two_Bit_Divider;

architecture Behavioral of Thirty_Two_Bit_Divider is

begin


end Behavioral;

