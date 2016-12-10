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



static void implSig1_execute(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    xsi_vlogtype_unsigned_bit_neg(t3, 64, t4, 64);
    t2 = (t0 + 3568);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_bit_copy(t8, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t2, 0, 63);
    t9 = (t0 + 3488);
    *((int *)t9) = 1;

LAB1:    return;
}


extern void work_m_00000000003310734055_2517683542_init()
{
	static char *pe[] = {(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000003310734055_2517683542", "isim/TB_ALU_isim_beh.exe.sim/work/m_00000000003310734055_2517683542.didat");
	xsi_register_executes(pe);
}
