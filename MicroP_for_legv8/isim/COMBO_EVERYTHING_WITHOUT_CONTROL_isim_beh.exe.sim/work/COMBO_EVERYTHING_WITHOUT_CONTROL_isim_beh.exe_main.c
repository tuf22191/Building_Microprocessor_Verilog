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
    work_m_00000000004047982618_2523287212_init();
    work_m_00000000000507747901_1660698083_init();
    work_m_00000000002669960887_4144471541_init();
    work_m_00000000002186640144_4122600708_init();
    work_m_00000000003713821275_0282755603_init();
    work_m_00000000002856147916_3949724951_init();
    work_m_00000000002856147916_1550937369_init();
    work_m_00000000002469802301_3159269461_init();
    work_m_00000000001398929605_0025480347_init();
    work_m_00000000003508550986_0035540680_init();
    work_m_00000000004278900040_2238585713_init();
    work_m_00000000002815763568_2601983858_init();
    work_m_00000000003172182274_3960483812_init();
    work_m_00000000001386841999_2516722272_init();
    work_m_00000000002856147916_1343035491_init();
    work_m_00000000003842750673_2517683542_init();
    work_m_00000000000413811316_3522681633_init();
    work_m_00000000003731338912_3500046205_init();
    work_m_00000000002568441667_0886308060_init();
    work_m_00000000002704407460_1124448613_init();
    work_m_00000000000980875050_2514814764_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000980875050_2514814764");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}