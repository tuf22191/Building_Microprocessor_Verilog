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
static const char *ng1 = "initialized in start";
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {5U, 0U};
static const char *ng5 = "in fetch! %d is opcode";
static unsigned int ng6[] = {552U, 0U};
static const char *ng7 = "in addition";
static unsigned int ng8[] = {2U, 0U};
static int ng9[] = {1, 0};
static unsigned int ng10[] = {812U, 0U};
static const char *ng11 = "in subtraction";
static unsigned int ng12[] = {1U, 0U};
static unsigned int ng13[] = {31U, 0U};
static unsigned int ng14[] = {3U, 0U};
static unsigned int ng15[] = {992U, 0U};
static unsigned int ng16[] = {4U, 0U};
static unsigned int ng17[] = {682U, 0U};
static unsigned int ng18[] = {984U, 0U};
static const char *ng19 = "next_state = %d";



static void Always_33_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 6264);
    *((int *)t2) = 1;
    t3 = (t0 + 5728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 4776);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4616);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB2;

}

static void Always_48_1(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 5944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 6280);
    *((int *)t2) = 1;
    t3 = (t0 + 5976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 4616);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 472);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 4, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 4, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 880);
    t4 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 4, t4, 32);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 1016);
    t4 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 4, t4, 32);
    if (t9 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1288);
    t4 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 4, t4, 32);
    if (t9 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1424);
    t4 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 4, t4, 32);
    if (t9 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(51, ng0);

LAB20:    xsi_set_current_line(52, ng0);
    xsi_vlogfile_write(1, 0, 0, ng1, 1, t0);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4456);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2456U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t10, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB24;

LAB21:    if (t20 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t10) = 1;

LAB24:    t8 = (t10 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t10);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(67, ng0);

LAB29:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 4776);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);

LAB27:    goto LAB19;

LAB9:    xsi_set_current_line(73, ng0);

LAB30:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2296U);
    t4 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t4, 10);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2296U);
    t3 = *((char **)t2);

LAB31:    t2 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t3, 10, t2, 10);
    if (t9 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng10)));
    t9 = xsi_vlog_unsigned_case_compare(t3, 10, t2, 10);
    if (t9 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng13)));
    t9 = xsi_vlog_unsigned_case_compare(t3, 10, t2, 10);
    if (t9 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng15)));
    t9 = xsi_vlog_unsigned_case_compare(t3, 10, t2, 10);
    if (t9 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng17)));
    t9 = xsi_vlog_unsigned_case_compare(t3, 10, t2, 10);
    if (t9 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng18)));
    t9 = xsi_vlog_unsigned_case_compare(t3, 10, t2, 10);
    if (t9 == 1)
        goto LAB42;

LAB43:
LAB44:    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3336);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 2456U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 17);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 17);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 31U);
    t7 = (t0 + 3816);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 5);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 2456U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 5);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 5);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 31U);
    t7 = (t0 + 3976);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 5);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 2456U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 0);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 31U);
    t7 = (t0 + 4136);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 5);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 2456U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 10);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 10);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 127U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 127U);
    t7 = (t0 + 4296);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 7);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 4776);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng19, 2, t0, (char)118, t5, 4);
    goto LAB19;

LAB11:    xsi_set_current_line(154, ng0);

LAB51:    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng9)));
    t5 = (t0 + 3336);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 1016);
    t4 = *((char **)t2);
    t2 = (t0 + 4776);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 4);
    goto LAB19;

LAB13:    xsi_set_current_line(159, ng0);

LAB52:    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 3336);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 608);
    t4 = *((char **)t2);
    t2 = (t0 + 4776);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 4);
    goto LAB19;

LAB15:    xsi_set_current_line(164, ng0);

LAB53:    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng9)));
    t5 = (t0 + 3336);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 1424);
    t4 = *((char **)t2);
    t2 = (t0 + 4776);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 4);
    goto LAB19;

LAB17:    xsi_set_current_line(169, ng0);

LAB54:    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng9)));
    t5 = (t0 + 3336);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 608);
    t4 = *((char **)t2);
    t2 = (t0 + 4776);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 4);
    goto LAB19;

LAB23:    t7 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(64, ng0);

LAB28:    xsi_set_current_line(65, ng0);
    t28 = (t0 + 472);
    t29 = *((char **)t28);
    t28 = (t0 + 4776);
    xsi_vlogvar_assign_value(t28, t29, 0, 0, 4);
    goto LAB27;

LAB32:    xsi_set_current_line(76, ng0);

LAB45:    xsi_set_current_line(77, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 4456);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3016);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2856);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3176);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3496);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 3656);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 880);
    t4 = *((char **)t2);
    t2 = (t0 + 4776);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 4);
    goto LAB44;

LAB34:    xsi_set_current_line(88, ng0);

LAB46:    xsi_set_current_line(89, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng12)));
    t4 = (t0 + 4456);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3016);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2856);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3176);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3496);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 3656);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 880);
    t4 = *((char **)t2);
    t2 = (t0 + 4776);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 4);
    goto LAB44;

LAB36:    xsi_set_current_line(100, ng0);

LAB47:    xsi_set_current_line(101, ng0);
    t4 = ((char*)((ng14)));
    t5 = (t0 + 4456);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3016);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2856);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3176);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3496);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 3656);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 880);
    t4 = *((char **)t2);
    t2 = (t0 + 4776);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 4);
    goto LAB44;

LAB38:    xsi_set_current_line(111, ng0);

LAB48:    xsi_set_current_line(112, ng0);
    t4 = ((char*)((ng16)));
    t5 = (t0 + 4456);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3016);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2856);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3176);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3496);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 3656);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 880);
    t4 = *((char **)t2);
    t2 = (t0 + 4776);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 4);
    goto LAB44;

LAB40:    xsi_set_current_line(122, ng0);

LAB49:    xsi_set_current_line(123, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t0 + 4456);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3016);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2856);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3176);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3496);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3656);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 1288);
    t4 = *((char **)t2);
    t2 = (t0 + 4776);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 4);
    goto LAB44;

LAB42:    xsi_set_current_line(133, ng0);

LAB50:    xsi_set_current_line(134, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 4456);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3016);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 2856);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3176);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 3496);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3656);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB44;

}


extern void work_m_00000000000744682901_1661935800_init()
{
	static char *pe[] = {(void *)Always_33_0,(void *)Always_48_1};
	xsi_register_didat("work_m_00000000000744682901_1661935800", "isim/COMBO_FSM_CPU_TEST_isim_beh.exe.sim/work/m_00000000000744682901_1661935800.didat");
	xsi_register_executes(pe);
}
