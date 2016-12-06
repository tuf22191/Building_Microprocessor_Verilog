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
static const char *ng0 = "C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/TB_32bit_Multiplier.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static const char *ng3 = "Sim Fin";
static int ng4[] = {0, 0, 0, 0};
static int ng5[] = {1000, 0};
static unsigned int ng6[] = {0U, 0U};
static const char *ng7 = "Multiplication is wrong is wrong";
static unsigned int ng8[] = {4294967295U, 0U};



static void Always_43_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);

LAB4:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    goto LAB2;

}

static void Always_50_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);

LAB4:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3384);
    xsi_process_wait(t2, 11000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(52, ng0);
    xsi_vlogfile_write(1, 0, 0, ng3, 1, t0);
    xsi_set_current_line(53, ng0);
    xsi_vlog_finish(1);
    goto LAB2;

}

static void Initial_58_2(char *t0)
{
    char t6[8];
    char t17[16];
    char t18[16];
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
    char *t15;
    char *t16;
    char *t19;
    unsigned int t20;

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);

LAB4:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3632);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(67, ng0);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
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

LAB8:    xsi_set_current_line(82, ng0);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB15:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB16;

LAB17:    goto LAB1;

LAB7:    xsi_set_current_line(67, ng0);

LAB9:    xsi_set_current_line(68, ng0);
    t13 = (t0 + 2408);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 1928);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 32);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    xsi_vlogtype_concat(t17, 64, 64, 2U, t5, 32, t4, 32);
    t7 = (t0 + 1448);
    xsi_vlogvar_assign_value(t7, t17, 0, 0, 64);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    xsi_vlogtype_concat(t17, 64, 64, 2U, t5, 32, t4, 32);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t17, 0, 0, 64);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1608);
    t7 = (t5 + 56U);
    t13 = *((char **)t7);
    xsi_vlog_unsigned_multiply(t17, 64, t4, 64, t13, 64);
    t14 = (t0 + 2248);
    xsi_vlogvar_assign_value(t14, t17, 0, 0, 32);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 4144);
    *((int *)t2) = 1;
    t3 = (t0 + 3856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 2248);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t13 = ((char*)((ng6)));
    xsi_vlogtype_concat(t17, 64, 64, 2U, t13, 32, t7, 32);
    t14 = (t0 + 1048U);
    t15 = *((char **)t14);
    xsi_vlog_unsigned_not_equal(t18, 64, t17, 64, t15, 64);
    t14 = (t18 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (~(t8));
    t10 = *((unsigned int *)t18);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB11:    xsi_set_current_line(76, ng0);

LAB14:    xsi_set_current_line(77, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    goto LAB13;

LAB16:    xsi_set_current_line(82, ng0);

LAB18:    xsi_set_current_line(85, ng0);
    t13 = (t0 + 2408);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng6)));
    xsi_vlogtype_concat(t17, 64, 64, 2U, t16, 32, t15, 32);
    t19 = (t0 + 1448);
    xsi_vlogvar_assign_value(t19, t17, 0, 0, 64);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    memcpy(t6, t4, 8);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t9 | t10);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 4294967295U);
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 4294967295U);
    t13 = ((char*)((ng8)));
    xsi_vlogtype_concat(t17, 64, 64, 2U, t13, 32, t6, 32);
    t14 = (t0 + 1608);
    xsi_vlogvar_assign_value(t14, t17, 0, 0, 64);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1608);
    t7 = (t5 + 56U);
    t13 = *((char **)t7);
    xsi_vlog_unsigned_multiply(t17, 64, t4, 64, t13, 64);
    t14 = (t0 + 2248);
    xsi_vlogvar_assign_value(t14, t17, 0, 0, 32);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4160);
    *((int *)t2) = 1;
    t3 = (t0 + 3856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(91, ng0);
    t4 = (t0 + 2248);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t13 = ((char*)((ng8)));
    xsi_vlogtype_concat(t17, 64, 64, 2U, t13, 32, t7, 32);
    t14 = (t0 + 1048U);
    t15 = *((char **)t14);
    xsi_vlog_unsigned_not_equal(t18, 64, t17, 64, t15, 64);
    t14 = (t18 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (~(t8));
    t10 = *((unsigned int *)t18);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB20;

LAB21:
LAB22:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB15;

LAB20:    xsi_set_current_line(91, ng0);

LAB23:    goto LAB22;

}


extern void work_m_00000000004168883098_2828638251_init()
{
	static char *pe[] = {(void *)Always_43_0,(void *)Always_50_1,(void *)Initial_58_2};
	xsi_register_didat("work_m_00000000004168883098_2828638251", "isim/TB_32bit_Multiplier_isim_beh.exe.sim/work/m_00000000004168883098_2828638251.didat");
	xsi_register_executes(pe);
}
