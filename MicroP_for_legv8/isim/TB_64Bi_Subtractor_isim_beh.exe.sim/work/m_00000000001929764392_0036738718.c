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
static const char *ng0 = "C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/TB_64Bi_Subtractor.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static const char *ng3 = "Sim Fin";
static int ng4[] = {0, 0, 0, 0};
static int ng5[] = {54, 0};
static int ng6[] = {17, 0};
static unsigned int ng7[] = {0U, 0U};
static const char *ng8 = "Sub1 is wrong";
static unsigned int ng9[] = {4294967295U, 0U};
static int ng10[] = {10, 0};



static void Always_45_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);

LAB4:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    goto LAB2;

}

static void Always_52_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);

LAB4:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(54, ng0);
    xsi_vlogfile_write(1, 0, 0, ng3, 1, t0);
    xsi_set_current_line(55, ng0);
    xsi_vlog_finish(1);
    goto LAB2;

}

static void Initial_60_2(char *t0)
{
    char t4[8];
    char t6[16];
    char t12[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;

LAB0:    t1 = (t0 + 3984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);

LAB4:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3792);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng5)));
    t3 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_signed_minus(t4, 32, t2, 32, t3, 32);
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng7)));
    xsi_vlogtype_concat(t6, 64, 64, 2U, t7, 32, t5, 32);
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 64);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng7)));
    xsi_vlogtype_concat(t6, 64, 64, 2U, t7, 32, t5, 32);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 64);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 4304);
    *((int *)t2) = 1;
    t3 = (t0 + 4016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(77, ng0);
    t5 = (t0 + 2568);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng7)));
    xsi_vlogtype_concat(t6, 64, 64, 2U, t9, 32, t8, 32);
    t10 = (t0 + 1208U);
    t11 = *((char **)t10);
    xsi_vlog_unsigned_not_equal(t12, 64, t6, 64, t11, 64);
    t10 = (t12 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB7;

LAB8:
LAB9:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t2, 32);
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng5)));
    t3 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t2, 32, t3, 32);
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng7)));
    xsi_vlogtype_concat(t6, 64, 64, 2U, t7, 32, t5, 32);
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 64);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng9)));
    xsi_vlogtype_concat(t6, 64, 64, 2U, t7, 32, t5, 32);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 64);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4320);
    *((int *)t2) = 1;
    t3 = (t0 + 4016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB7:    xsi_set_current_line(77, ng0);

LAB10:    xsi_set_current_line(78, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB9;

LAB11:    xsi_set_current_line(90, ng0);
    t5 = (t0 + 2568);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng7)));
    xsi_vlogtype_concat(t6, 64, 64, 2U, t9, 32, t8, 32);
    t10 = (t0 + 1208U);
    t11 = *((char **)t10);
    xsi_vlog_unsigned_not_equal(t12, 64, t6, 64, t11, 64);
    t10 = (t12 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB12;

LAB13:
LAB14:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng10)));
    t3 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_signed_minus(t4, 32, t2, 32, t3, 32);
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng7)));
    xsi_vlogtype_concat(t6, 64, 64, 2U, t7, 32, t5, 32);
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 64);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng7)));
    xsi_vlogtype_concat(t6, 64, 64, 2U, t7, 32, t5, 32);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 64);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 4336);
    *((int *)t2) = 1;
    t3 = (t0 + 4016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB12:    xsi_set_current_line(90, ng0);

LAB15:    xsi_set_current_line(91, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB14;

LAB16:    xsi_set_current_line(101, ng0);
    t5 = (t0 + 2568);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng9)));
    xsi_vlogtype_concat(t6, 64, 64, 2U, t9, 32, t8, 32);
    t10 = (t0 + 1208U);
    t11 = *((char **)t10);
    xsi_vlog_unsigned_not_equal(t12, 64, t6, 64, t11, 64);
    t10 = (t12 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB17;

LAB18:
LAB19:    goto LAB1;

LAB17:    xsi_set_current_line(101, ng0);

LAB20:    xsi_set_current_line(102, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB19;

}


extern void work_m_00000000001929764392_0036738718_init()
{
	static char *pe[] = {(void *)Always_45_0,(void *)Always_52_1,(void *)Initial_60_2};
	xsi_register_didat("work_m_00000000001929764392_0036738718", "isim/TB_64Bi_Subtractor_isim_beh.exe.sim/work/m_00000000001929764392_0036738718.didat");
	xsi_register_executes(pe);
}
