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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/Thirty_Two_Bit_Multiplier.v";



static void Cont_40_0(char *t0)
{
    char t3[16];
    char t5[16];
    char t7[16];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    xsi_vlog_get_part_select_value(t3, 64, t4, 31, 0);
    t2 = (t0 + 1208U);
    t6 = *((char **)t2);
    xsi_vlog_get_part_select_value(t5, 64, t6, 31, 0);
    xsi_vlog_unsigned_multiply(t7, 64, t3, 64, t5, 64);
    t2 = (t0 + 2928);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    xsi_vlog_bit_copy(t11, 0, t7, 0, 64);
    xsi_driver_vfirst_trans(t2, 0, 63);
    t12 = (t0 + 2848);
    *((int *)t12) = 1;

LAB1:    return;
}


extern void work_m_00000000000413811316_3522681633_init()
{
	static char *pe[] = {(void *)Cont_40_0};
	xsi_register_didat("work_m_00000000000413811316_3522681633", "isim/COMBO_EVERYTHING_DIFFCLOCKS_isim_beh.exe.sim/work/m_00000000000413811316_3522681633.didat");
	xsi_register_executes(pe);
}
