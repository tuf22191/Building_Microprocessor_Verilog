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
static const char *ng0 = "the ropcode is %d, the time is %d";
static const char *ng1 = "C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/FSM_Controller.v";
static const char *ng2 = "initialized in start %d";
static int ng3[] = {0, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {5U, 0U};
static unsigned int ng6[] = {3U, 0U};
static int ng7[] = {1, 0};
static const char *ng8 = "ropcode in a state, %d";
static const char *ng9 = "in fetch! %d is opcode, %d";
static unsigned int ng10[] = {552U, 0U};
static unsigned int ng11[] = {2U, 0U};
static unsigned int ng12[] = {812U, 0U};
static unsigned int ng13[] = {1U, 0U};
static unsigned int ng14[] = {31U, 0U};
static unsigned int ng15[] = {992U, 0U};
static unsigned int ng16[] = {4U, 0U};
static unsigned int ng17[] = {682U, 0U};
static const char *ng18 = "we should be in load at time: %d";
static unsigned int ng19[] = {984U, 0U};
static const char *ng20 = "next_state = %d, current time: %d";
static const char *ng21 = "why are we in default state?";

void Monitor_37_1(char *);
void Monitor_37_1(char *);


static void Monitor_37_1_Func(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;

LAB0:    t1 = (t0 + 4960);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 3, ng0, 3, t0, (char)118, t3, 10, (char)118, t4, 64);

LAB1:    return;
}

static void Initial_35_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;

LAB0:    xsi_set_current_line(35, ng1);

LAB2:    xsi_set_current_line(36, ng1);
    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng2, 2, t0, (char)118, t1, 64);
    xsi_set_current_line(37, ng1);
    Monitor_37_1(t0);
    xsi_set_current_line(38, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4960);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 10);
    xsi_set_current_line(39, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4800);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(40, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(41, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(42, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(43, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(46, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(47, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(48, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(49, ng1);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB1:    return;
}

static void Always_53_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 6128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng1);
    t2 = (t0 + 7192);
    *((int *)t2) = 1;
    t3 = (t0 + 6160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng1);

LAB5:    xsi_set_current_line(54, ng1);
    t4 = (t0 + 4640);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4480);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB2;

}

static void Always_57_3(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 6376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng1);
    t2 = (t0 + 7208);
    *((int *)t2) = 1;
    t3 = (t0 + 6408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng1);

LAB5:    xsi_set_current_line(58, ng1);
    t4 = (t0 + 4800);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng6)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(62, ng1);
    t2 = (t0 + 4800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 2, t5, 32);
    t6 = (t0 + 4800);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 2);
    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(58, ng1);

LAB13:    xsi_set_current_line(59, ng1);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 4800);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 2);
    xsi_set_current_line(60, ng1);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 22);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 22);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 1023U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 1023U);
    t5 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t5, t8, 0, 0, 10, 0LL);
    goto LAB12;

}

static void Always_79_4(char *t0)
{
    char t10[16];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;

LAB0:    t1 = (t0 + 6624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng1);
    t2 = (t0 + 7224);
    *((int *)t2) = 1;
    t3 = (t0 + 6656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(79, ng1);

LAB5:    xsi_set_current_line(81, ng1);
    t4 = (t0 + 4960);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng8, 2, t0, (char)118, t6, 10);
    xsi_set_current_line(82, ng1);
    t2 = (t0 + 4480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = (t0 + 472);
    t6 = *((char **)t5);
    t7 = xsi_vlog_unsigned_case_compare(t4, 4, t6, 32);
    if (t7 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t7 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t7 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t7 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t7 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(200, ng1);

LAB48:    xsi_set_current_line(201, ng1);
    xsi_vlogfile_write(1, 0, 0, ng21, 1, t0);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(83, ng1);

LAB20:    xsi_set_current_line(84, ng1);
    t5 = (t0 + 4960);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t11 = xsi_vlog_time(t10, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng9, 3, t0, (char)118, t9, 10, (char)118, t10, 64);
    xsi_set_current_line(85, ng1);
    t2 = (t0 + 4960);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB21:    t6 = ((char*)((ng10)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 10, t6, 10);
    if (t7 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng12)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 10);
    if (t7 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng14)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 10);
    if (t7 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng15)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 10);
    if (t7 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng17)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 10);
    if (t7 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng19)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 10);
    if (t7 == 1)
        goto LAB32;

LAB33:
LAB35:
LAB34:    xsi_set_current_line(154, ng1);

LAB43:    xsi_set_current_line(155, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(156, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(157, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(158, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(159, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(160, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(161, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(162, ng1);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 4640);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);

LAB36:    xsi_set_current_line(167, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(168, ng1);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    memset(t12, 0, 8);
    t2 = (t12 + 4);
    t6 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (t13 >> 17);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t6);
    t16 = (t15 >> 17);
    *((unsigned int *)t2) = t16;
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t17 & 31U);
    t18 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t18 & 31U);
    t8 = (t0 + 3680);
    xsi_vlogvar_assign_value(t8, t12, 0, 0, 5);
    xsi_set_current_line(169, ng1);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    memset(t12, 0, 8);
    t2 = (t12 + 4);
    t6 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (t13 >> 5);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t6);
    t16 = (t15 >> 5);
    *((unsigned int *)t2) = t16;
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t17 & 31U);
    t18 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t18 & 31U);
    t8 = (t0 + 3840);
    xsi_vlogvar_assign_value(t8, t12, 0, 0, 5);
    xsi_set_current_line(170, ng1);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    memset(t12, 0, 8);
    t2 = (t12 + 4);
    t6 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (t13 >> 0);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t6);
    t16 = (t15 >> 0);
    *((unsigned int *)t2) = t16;
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t17 & 31U);
    t18 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t18 & 31U);
    t8 = (t0 + 4000);
    xsi_vlogvar_assign_value(t8, t12, 0, 0, 5);
    xsi_set_current_line(171, ng1);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    memset(t12, 0, 8);
    t2 = (t12 + 4);
    t6 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (t13 >> 10);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t6);
    t16 = (t15 >> 10);
    *((unsigned int *)t2) = t16;
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t17 & 127U);
    t18 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t18 & 127U);
    t8 = (t0 + 4160);
    xsi_vlogvar_assign_value(t8, t12, 0, 0, 7);
    xsi_set_current_line(172, ng1);
    t2 = (t0 + 4640);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t8 = xsi_vlog_time(t10, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng20, 3, t0, (char)118, t6, 4, (char)118, t10, 64);
    goto LAB19;

LAB9:    xsi_set_current_line(176, ng1);

LAB44:    xsi_set_current_line(177, ng1);
    t2 = ((char*)((ng7)));
    t6 = (t0 + 3200);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(178, ng1);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 4640);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(179, ng1);
    t2 = (t0 + 4640);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t8 = xsi_vlog_time(t10, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng20, 3, t0, (char)118, t6, 4, (char)118, t10, 64);
    goto LAB19;

LAB11:    xsi_set_current_line(182, ng1);

LAB45:    xsi_set_current_line(183, ng1);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 3200);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(184, ng1);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 4640);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(185, ng1);
    t2 = (t0 + 4640);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t8 = xsi_vlog_time(t10, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng20, 3, t0, (char)118, t6, 4, (char)118, t10, 64);
    goto LAB19;

LAB13:    xsi_set_current_line(188, ng1);

LAB46:    xsi_set_current_line(189, ng1);
    t2 = ((char*)((ng7)));
    t6 = (t0 + 3200);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(190, ng1);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 4640);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(191, ng1);
    t2 = (t0 + 4640);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t8 = xsi_vlog_time(t10, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng20, 3, t0, (char)118, t6, 4, (char)118, t10, 64);
    goto LAB19;

LAB15:    xsi_set_current_line(194, ng1);

LAB47:    xsi_set_current_line(195, ng1);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 3200);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(196, ng1);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 4640);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(197, ng1);
    t2 = (t0 + 4640);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t8 = xsi_vlog_time(t10, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng20, 3, t0, (char)118, t6, 4, (char)118, t10, 64);
    goto LAB19;

LAB22:    xsi_set_current_line(86, ng1);

LAB37:    xsi_set_current_line(88, ng1);
    t8 = ((char*)((ng11)));
    t9 = (t0 + 4320);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 3);
    xsi_set_current_line(89, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(90, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(91, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(93, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(94, ng1);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(95, ng1);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 4640);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    goto LAB36;

LAB24:    xsi_set_current_line(98, ng1);

LAB38:    xsi_set_current_line(100, ng1);
    t3 = ((char*)((ng13)));
    t6 = (t0 + 4320);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 3);
    xsi_set_current_line(101, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(102, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(103, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(105, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(106, ng1);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(107, ng1);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 4640);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    goto LAB36;

LAB26:    xsi_set_current_line(110, ng1);

LAB39:    xsi_set_current_line(111, ng1);
    t3 = ((char*)((ng6)));
    t6 = (t0 + 4320);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 3);
    xsi_set_current_line(112, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(113, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(114, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(116, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(117, ng1);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(118, ng1);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 4640);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    goto LAB36;

LAB28:    xsi_set_current_line(121, ng1);

LAB40:    xsi_set_current_line(122, ng1);
    t3 = ((char*)((ng16)));
    t6 = (t0 + 4320);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 3);
    xsi_set_current_line(123, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(124, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(125, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(127, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(128, ng1);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(129, ng1);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 4640);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    goto LAB36;

LAB30:    xsi_set_current_line(132, ng1);

LAB41:    xsi_set_current_line(133, ng1);
    t3 = xsi_vlog_time(t10, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng18, 2, t0, (char)118, t10, 64);
    xsi_set_current_line(134, ng1);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(135, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(136, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(137, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(139, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(140, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(141, ng1);
    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t2 = (t0 + 4640);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    goto LAB36;

LAB32:    xsi_set_current_line(144, ng1);

LAB42:    xsi_set_current_line(145, ng1);
    t3 = ((char*)((ng5)));
    t6 = (t0 + 4320);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 3);
    xsi_set_current_line(146, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(147, ng1);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(148, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(150, ng1);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(151, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB36;

}

void Monitor_37_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 6680);
    t2 = (t0 + 7240);
    xsi_vlogfile_monitor((void *)Monitor_37_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000001327498521_1661935800_init()
{
	static char *pe[] = {(void *)Initial_35_0,(void *)Always_53_2,(void *)Always_57_3,(void *)Always_79_4,(void *)Monitor_37_1};
	xsi_register_didat("work_m_00000000001327498521_1661935800", "isim/FSM_Controller_isim_beh.exe.sim/work/m_00000000001327498521_1661935800.didat");
	xsi_register_executes(pe);
}
