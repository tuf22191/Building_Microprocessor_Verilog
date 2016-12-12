/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002186640144_4122600708_init();
    work_m_00000000003713821275_0282755603_init();
    work_m_00000000002856147916_3949724951_init();
    work_m_00000000002856147916_1550937369_init();
    work_m_00000000000989793529_3159269461_init();
    work_m_00000000001398929605_0025480347_init();
    work_m_00000000001462917053_0989320821_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001462917053_0989320821");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
