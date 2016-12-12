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
static const char *ng0 = "C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/TB_64bit_RegisterFile.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static const char *ng3 = "Simulation Starting : ***********";
static const char *ng4 = "Simulation Ended : Success ******";
static int ng5[] = {0, 0, 0, 0};
static unsigned int ng6[] = {4U, 0U};
static const char *ng7 = "First Test  Not working!";
static int ng8[] = {43, 0};
static unsigned int ng9[] = {0U, 0U};
static unsigned int ng10[] = {9U, 0U};
static const char *ng11 = "Second Test  Not working1!";
static const char *ng12 = "Second Test  Not working2!";
static const char *ng13 = "Third Test  Not working1!";
static const char *ng14 = "Third Test  Not working2!";
static int ng15[] = {3, 0};
static unsigned int ng16[] = {16U, 0U};
static unsigned int ng17[] = {43U, 0U, 0U, 0U};
static const char *ng18 = "Forth Test  Not working1!";
static unsigned int ng19[] = {3U, 0U, 0U, 0U};
static const char *ng20 = "Forth Test  Not working2!";



static void Always_40_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);

LAB4:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    goto LAB2;

}

static void Always_47_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);

LAB4:    xsi_set_current_line(48, ng0);
    xsi_vlogfile_write(1, 0, 0, ng3, 1, t0);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 1100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(50, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    xsi_set_current_line(51, ng0);
    xsi_vlog_finish(1);
    goto LAB2;

}

static void Initial_69_2(char *t0)
{
    char t4[16];
    char t13[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;

LAB0:    t1 = (t0 + 3984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);

LAB4:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3792);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3792);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    xsi_vlog_unsigned_not_equal(t4, 64, t3, 64, t2, 32);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB7;

LAB8:
LAB9:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    xsi_vlog_unsigned_not_equal(t4, 64, t3, 64, t2, 32);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng9)));
    xsi_vlogtype_concat(t4, 64, 64, 2U, t11, 32, t5, 32);
    t12 = (t0 + 1928);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 64);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3792);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB7:    xsi_set_current_line(89, ng0);

LAB10:    xsi_set_current_line(90, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    goto LAB9;

LAB11:    xsi_set_current_line(92, ng0);

LAB14:    xsi_set_current_line(93, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    goto LAB13;

LAB15:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    xsi_vlog_unsigned_not_equal(t4, 64, t3, 64, t2, 32);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB16;

LAB17:
LAB18:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    xsi_vlog_unsigned_not_equal(t4, 64, t3, 64, t2, 32);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB20;

LAB21:
LAB22:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3792);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB16:    xsi_set_current_line(102, ng0);

LAB19:    xsi_set_current_line(103, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);
    goto LAB18;

LAB20:    xsi_set_current_line(105, ng0);

LAB23:    xsi_set_current_line(106, ng0);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);
    goto LAB22;

LAB24:    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    t5 = (t2 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng9)));
    xsi_vlogtype_concat(t4, 64, 64, 2U, t12, 32, t11, 32);
    xsi_vlog_unsigned_not_equal(t13, 64, t3, 64, t4, 64);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    xsi_vlog_unsigned_not_equal(t4, 64, t3, 64, t2, 32);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3792);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB25:    xsi_set_current_line(112, ng0);

LAB28:    xsi_set_current_line(113, ng0);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t0);
    goto LAB27;

LAB29:    xsi_set_current_line(115, ng0);

LAB32:    xsi_set_current_line(116, ng0);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t0);
    goto LAB31;

LAB33:    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng9)));
    xsi_vlogtype_concat(t4, 64, 64, 2U, t11, 32, t5, 32);
    t12 = (t0 + 1928);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 64);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 3792);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB34:    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng17)));
    xsi_vlog_unsigned_not_equal(t4, 64, t3, 64, t2, 64);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB35;

LAB36:
LAB37:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng19)));
    xsi_vlog_unsigned_not_equal(t4, 64, t3, 64, t2, 64);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB39;

LAB40:
LAB41:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 3792);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB35:    xsi_set_current_line(127, ng0);

LAB38:    xsi_set_current_line(128, ng0);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t0);
    goto LAB37;

LAB39:    xsi_set_current_line(130, ng0);

LAB42:    xsi_set_current_line(131, ng0);
    xsi_vlogfile_write(1, 0, 0, ng20, 1, t0);
    goto LAB41;

LAB43:    goto LAB1;

}


extern void work_m_00000000002877914847_0925726382_init()
{
	static char *pe[] = {(void *)Always_40_0,(void *)Always_47_1,(void *)Initial_69_2};
	xsi_register_didat("work_m_00000000002877914847_0925726382", "isim/TB_64bit_RegisterFile_isim_beh.exe.sim/work/m_00000000002877914847_0925726382.didat");
	xsi_register_executes(pe);
}
