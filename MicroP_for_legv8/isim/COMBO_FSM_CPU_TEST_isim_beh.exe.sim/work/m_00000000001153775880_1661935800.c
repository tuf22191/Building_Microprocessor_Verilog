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
static const char *ng0 = "C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/FSM_Controller.v";
static const char *ng1 = "initialized in start: time: %d";
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {5U, 0U};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {1, 0};
static const char *ng7 = "IN fetch! %d is ropcode, time: %d";
static unsigned int ng8[] = {552U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {812U, 0U};
static unsigned int ng11[] = {1U, 0U};
static unsigned int ng12[] = {31U, 0U};
static unsigned int ng13[] = {992U, 0U};
static unsigned int ng14[] = {4U, 0U};
static unsigned int ng15[] = {682U, 0U};
static const char *ng16 = "we should be in load at time: %d";
static unsigned int ng17[] = {984U, 0U};
static unsigned int ng18[] = {986U, 0U};
static unsigned int ng19[] = {7U, 0U};
static const char *ng20 = "next_state = %d, current time: %d \n";
static const char *ng21 = "IN A_INSTRUCTION_A! %d is ropcode, time: %d";
static const char *ng22 = "IN A_INSTRUCTION_B! %d is ropcode, time: %d";
static const char *ng23 = "IN L_I_INSTRUCTION_A! %d is ropcode, time: %d";
static const char *ng24 = "IN L_I_INSTRUCTION_B! %d is ropcode, time: %d";
static const char *ng25 = "IN STORING_INSTRUCTION_A! %d is ropcode, time: %d";
static const char *ng26 = "IN STORING_INSTRUCTION_B! %d is ropcode, time: %d";
static const char *ng27 = "IN  LOADING_INSTRUCTION_A! %d is ropcode, time: %d";
static const char *ng28 = "IN LOADING_INSTRUCTION_B! %d is ropcode, time: %d";
static const char *ng29 = "why are we in default state?";



static void Initial_35_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;

LAB0:    xsi_set_current_line(35, ng0);

LAB2:    xsi_set_current_line(36, ng0);
    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng1, 2, t0, (char)118, t1, 64);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 10);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3264);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB1:    return;
}

static void Always_55_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 6832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 7648);
    *((int *)t2) = 1;
    t3 = (t0 + 6864);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 5184);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 5024);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB2;

}

static void Always_59_2(char *t0)
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

LAB0:    t1 = (t0 + 7080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 7664);
    *((int *)t2) = 1;
    t3 = (t0 + 7112);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 5344);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
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
LAB12:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 5344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 2, t5, 32);
    t6 = (t0 + 5344);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 2);
    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(60, ng0);

LAB13:    xsi_set_current_line(61, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 5344);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 2);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2864U);
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
    t5 = (t0 + 5504);
    xsi_vlogvar_wait_assign_value(t5, t8, 0, 0, 10, 0LL);
    goto LAB12;

}

static void Always_83_3(char *t0)
{
    char t12[16];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;

LAB0:    t1 = (t0 + 7328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 7680);
    *((int *)t2) = 1;
    t3 = (t0 + 7360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng0);

LAB5:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 5024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 472);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(259, ng0);

LAB63:    xsi_set_current_line(260, ng0);
    xsi_vlogfile_write(1, 0, 0, ng29, 1, t0);

LAB27:    goto LAB2;

LAB7:    xsi_set_current_line(86, ng0);

LAB28:    xsi_set_current_line(87, ng0);
    t7 = (t0 + 5504);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t13 = xsi_vlog_time(t12, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng7, 3, t0, (char)118, t11, 10, (char)118, t12, 64);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 5504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB29:    t5 = ((char*)((ng8)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 10, t5, 10);
    if (t9 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng10)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t9 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng12)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t9 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng13)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t9 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng15)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t9 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng17)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t9 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng18)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t9 == 1)
        goto LAB42;

LAB43:
LAB45:
LAB44:    xsi_set_current_line(170, ng0);

LAB54:    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3264);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 5184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);

LAB46:    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 2864U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t16 = (t15 >> 17);
    *((unsigned int *)t14) = t16;
    t17 = *((unsigned int *)t5);
    t18 = (t17 >> 17);
    *((unsigned int *)t2) = t18;
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t19 & 31U);
    t20 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t20 & 31U);
    t7 = (t0 + 4224);
    xsi_vlogvar_assign_value(t7, t14, 0, 0, 5);
    xsi_set_current_line(185, ng0);
    t2 = (t0 + 2864U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t16 = (t15 >> 5);
    *((unsigned int *)t14) = t16;
    t17 = *((unsigned int *)t5);
    t18 = (t17 >> 5);
    *((unsigned int *)t2) = t18;
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t19 & 31U);
    t20 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t20 & 31U);
    t7 = (t0 + 4384);
    xsi_vlogvar_assign_value(t7, t14, 0, 0, 5);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 2864U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t16 = (t15 >> 0);
    *((unsigned int *)t14) = t16;
    t17 = *((unsigned int *)t5);
    t18 = (t17 >> 0);
    *((unsigned int *)t2) = t18;
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t19 & 31U);
    t20 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t20 & 31U);
    t7 = (t0 + 4544);
    xsi_vlogvar_assign_value(t7, t14, 0, 0, 5);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 2864U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t16 = (t15 >> 10);
    *((unsigned int *)t14) = t16;
    t17 = *((unsigned int *)t5);
    t18 = (t17 >> 10);
    *((unsigned int *)t2) = t18;
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t19 & 127U);
    t20 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t20 & 127U);
    t7 = (t0 + 4704);
    xsi_vlogvar_assign_value(t7, t14, 0, 0, 7);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 5184);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = xsi_vlog_time(t12, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng20, 3, t0, (char)118, t5, 5, (char)118, t12, 64);
    goto LAB27;

LAB9:    xsi_set_current_line(192, ng0);

LAB55:    xsi_set_current_line(193, ng0);
    t2 = (t0 + 5504);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = xsi_vlog_time(t12, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng21, 3, t0, (char)118, t7, 10, (char)118, t12, 64);
    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(195, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 5184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 5184);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = xsi_vlog_time(t12, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng20, 3, t0, (char)118, t5, 5, (char)118, t12, 64);
    goto LAB27;

LAB11:    xsi_set_current_line(199, ng0);

LAB56:    xsi_set_current_line(200, ng0);
    t2 = (t0 + 5504);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = xsi_vlog_time(t12, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng22, 3, t0, (char)118, t7, 10, (char)118, t12, 64);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(202, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 5184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(203, ng0);
    t2 = (t0 + 5184);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = xsi_vlog_time(t12, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng20, 3, t0, (char)118, t5, 5, (char)118, t12, 64);
    goto LAB27;

LAB13:    xsi_set_current_line(206, ng0);

LAB57:    xsi_set_current_line(207, ng0);
    t2 = (t0 + 5504);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = xsi_vlog_time(t12, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng23, 3, t0, (char)118, t7, 10, (char)118, t12, 64);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 5184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 5184);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = xsi_vlog_time(t12, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng20, 3, t0, (char)118, t5, 5, (char)118, t12, 64);
    goto LAB27;

LAB15:    xsi_set_current_line(213, ng0);

LAB58:    xsi_set_current_line(214, ng0);
    t2 = (t0 + 5504);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = xsi_vlog_time(t12, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng24, 3, t0, (char)118, t7, 10, (char)118, t12, 64);
    xsi_set_current_line(215, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 5184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 5184);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = xsi_vlog_time(t12, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng20, 3, t0, (char)118, t5, 5, (char)118, t12, 64);
    goto LAB27;

LAB17:    xsi_set_current_line(220, ng0);

LAB59:    xsi_set_current_line(221, ng0);
    t2 = (t0 + 5504);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = xsi_vlog_time(t12, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng25, 3, t0, (char)118, t7, 10, (char)118, t12, 64);
    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3264);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(224, ng0);
    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t2 = (t0 + 5184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(225, ng0);
    t2 = (t0 + 5184);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = xsi_vlog_time(t12, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng20, 3, t0, (char)118, t5, 5, (char)118, t12, 64);
    goto LAB27;

LAB19:    xsi_set_current_line(228, ng0);

LAB60:    xsi_set_current_line(229, ng0);
    t2 = (t0 + 5504);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = xsi_vlog_time(t12, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng26, 3, t0, (char)118, t7, 10, (char)118, t12, 64);
    xsi_set_current_line(230, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3264);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(232, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 5184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(233, ng0);
    t2 = (t0 + 5184);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = xsi_vlog_time(t12, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng20, 3, t0, (char)118, t5, 5, (char)118, t12, 64);
    goto LAB27;

LAB21:    xsi_set_current_line(236, ng0);

LAB61:    xsi_set_current_line(237, ng0);
    t2 = (t0 + 5504);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = xsi_vlog_time(t12, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng27, 3, t0, (char)118, t7, 10, (char)118, t12, 64);
    xsi_set_current_line(238, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(239, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3264);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(240, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(241, ng0);
    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t2 = (t0 + 5184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(242, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(243, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(244, ng0);
    t2 = (t0 + 5184);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = xsi_vlog_time(t12, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng20, 3, t0, (char)118, t5, 5, (char)118, t12, 64);
    goto LAB27;

LAB23:    xsi_set_current_line(247, ng0);

LAB62:    xsi_set_current_line(248, ng0);
    t2 = (t0 + 5504);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = xsi_vlog_time(t12, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng28, 3, t0, (char)118, t7, 10, (char)118, t12, 64);
    xsi_set_current_line(249, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(250, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3264);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(251, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(252, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(253, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(254, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 5184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(255, ng0);
    t2 = (t0 + 5184);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = xsi_vlog_time(t12, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng20, 3, t0, (char)118, t5, 5, (char)118, t12, 64);
    goto LAB27;

LAB30:    xsi_set_current_line(89, ng0);

LAB47:    xsi_set_current_line(91, ng0);
    t7 = ((char*)((ng9)));
    t8 = (t0 + 4864);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 3);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3264);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 5184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    goto LAB46;

LAB32:    xsi_set_current_line(101, ng0);

LAB48:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 4864);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3264);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 5184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    goto LAB46;

LAB34:    xsi_set_current_line(113, ng0);

LAB49:    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 4864);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3264);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 5184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    goto LAB46;

LAB36:    xsi_set_current_line(124, ng0);

LAB50:    xsi_set_current_line(125, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 4864);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3264);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 5184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    goto LAB46;

LAB38:    xsi_set_current_line(135, ng0);

LAB51:    xsi_set_current_line(136, ng0);
    t3 = xsi_vlog_time(t12, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng16, 2, t0, (char)118, t12, 64);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3264);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t2 = (t0 + 5184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    goto LAB46;

LAB40:    xsi_set_current_line(147, ng0);

LAB52:    xsi_set_current_line(148, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 4864);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3264);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t2 = (t0 + 5184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    goto LAB46;

LAB42:    xsi_set_current_line(159, ng0);

LAB53:    xsi_set_current_line(160, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 4864);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3264);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB46;

}


extern void work_m_00000000001153775880_1661935800_init()
{
	static char *pe[] = {(void *)Initial_35_0,(void *)Always_55_1,(void *)Always_59_2,(void *)Always_83_3};
	xsi_register_didat("work_m_00000000001153775880_1661935800", "isim/COMBO_FSM_CPU_TEST_isim_beh.exe.sim/work/m_00000000001153775880_1661935800.didat");
	xsi_register_executes(pe);
}
