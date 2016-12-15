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
static const char *ng0 = "C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/TB_64_Bit_ADDER.v";
static const char *ng1 = "Simulation started";
static int ng2[] = {0, 0, 0, 0};
static int ng3[] = {0, 0};
static int ng4[] = {32767, 0};
static int ng5[] = {1, 0, 0, 0};
static int ng6[] = {30, 0};
static int ng7[] = {2, 0, 0, 0};
static const char *ng8 = "mismatch";
static const char *ng9 = "a is %d , b is %d, sum is %d, real sum is %d";
static int ng10[] = {1, 0};



static void Initial_52_0(char *t0)
{
    char t6[8];
    char t15[16];
    char t17[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);

LAB4:    xsi_set_current_line(53, ng0);
    xsi_vlogfile_write(1, 0, 0, ng1, 1, t0);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(65, ng0);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    goto LAB1;

LAB7:    xsi_set_current_line(65, ng0);

LAB9:    xsi_set_current_line(66, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 1608);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 64);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2248);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t5, 32, t14, 32);
    xsi_vlog_signed_lshift(t15, 64, t2, 32, t6, 32);
    t16 = ((char*)((ng6)));
    xsi_vlog_signed_lshift(t17, 64, t15, 64, t16, 32);
    t18 = (t0 + 2408);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 64);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2248);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    xsi_vlog_signed_multiply(t15, 64, t2, 32, t5, 32);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t15, 0, 0, 64);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    xsi_vlog_signed_lshift(t15, 64, t4, 32, t5, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t15, 0, 0, 64);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlog_unsigned_not_equal(t15, 64, t3, 64, t5, 64);
    t7 = (t15 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB12;

LAB13:
LAB14:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    t7 = (t5 + 56U);
    t13 = *((char **)t7);
    t14 = (t0 + 1048U);
    t16 = *((char **)t14);
    t14 = (t0 + 2408);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng9, 5, t0, (char)118, t4, 64, (char)118, t13, 64, (char)118, t16, 64, (char)118, t19, 64);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB12:    xsi_set_current_line(75, ng0);

LAB15:    xsi_set_current_line(76, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB14;

}


extern void work_m_00000000002098161781_0567946103_init()
{
	static char *pe[] = {(void *)Initial_52_0};
	xsi_register_didat("work_m_00000000002098161781_0567946103", "isim/TB_64_Bit_ADDER_isim_beh.exe.sim/work/m_00000000002098161781_0567946103.didat");
	xsi_register_executes(pe);
}
