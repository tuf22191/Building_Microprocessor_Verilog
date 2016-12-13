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
static const char *ng0 = "%g = clock , %d = address_counter , %d = address1, %d =instruction ";
static const char *ng1 = "C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/COMBO_EVERYTHING_WITHOUT_CONTROL.v";
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static int ng4[] = {1953066862, 0, 1836412001, 0, 1746957161, 0, 544696692, 0, 1936221540, 0, 1718185577, 0};
static const char *ng5 = "CHECK BETWEEN 200 and 400 ns";

void Monitor_247_4(char *);
void Monitor_247_4(char *);


static void Monitor_247_4_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 3, ng0, 5, t0, (char)118, t1, 64, (char)118, t4, 32, (char)118, t5, 32, (char)118, t6, 32);

LAB1:    return;
}

static void Gate_227_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 6368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4248U);
    t3 = *((char **)t2);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    t2 = (t0 + 7776);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_AndGate(t8, 2, t3, t4);
    t9 = (t0 + 7776);
    xsi_driver_vfirst_trans(t9, 0, 0);
    t10 = (t0 + 7680);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_231_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 6616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(231, ng1);

LAB4:    xsi_set_current_line(232, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(232, ng1);
    t2 = (t0 + 6424);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(233, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(233, ng1);
    t2 = (t0 + 6424);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    goto LAB2;

}

static void Always_236_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 6864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(236, ng1);

LAB4:    xsi_set_current_line(237, ng1);
    t2 = (t0 + 6672);
    xsi_process_wait(t2, 1100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(238, ng1);
    t2 = ((char*)((ng4)));
    xsi_vlog_finish(*((unsigned int *)t2));
    goto LAB2;

}

static void Initial_241_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(241, ng1);

LAB4:    xsi_set_current_line(246, ng1);
    t2 = (t0 + 6920);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(247, ng1);
    Monitor_247_4(t0);
    xsi_set_current_line(249, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(250, ng1);
    t2 = (t0 + 6920);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(266, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(267, ng1);
    t2 = (t0 + 6920);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(269, ng1);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    xsi_set_current_line(270, ng1);
    xsi_vlog_finish(1);
    goto LAB1;

}

void Monitor_247_4(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 7168);
    t2 = (t0 + 7696);
    xsi_vlogfile_monitor((void *)Monitor_247_4_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000000980875050_2514814764_init()
{
	static char *pe[] = {(void *)Gate_227_0,(void *)Always_231_1,(void *)Always_236_2,(void *)Initial_241_3,(void *)Monitor_247_4};
	xsi_register_didat("work_m_00000000000980875050_2514814764", "isim/COMBO_EVERYTHING_WITHOUT_CONTROL_isim_beh.exe.sim/work/m_00000000000980875050_2514814764.didat");
	xsi_register_executes(pe);
}
