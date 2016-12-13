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
static const char *ng1 = "C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/COMBO_EVERYTHING_DIFFCLOCKS.v";
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static int ng4[] = {1953066862, 0, 1836412001, 0, 1746957161, 0, 544696692, 0, 1936221540, 0, 1718185577, 0};
static const char *ng5 = "CHECK BETWEEN 200 and 400 ns";

void Monitor_254_5(char *);
void Monitor_254_5(char *);


static void Monitor_254_5_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t3 = (t0 + 1368U);
    t6 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 3, ng0, 5, t0, (char)118, t1, 64, (char)118, t4, 32, (char)118, t5, 32, (char)118, t6, 32);

LAB1:    return;
}

static void Gate_230_0(char *t0)
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

LAB0:    t1 = (t0 + 6048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4408U);
    t3 = *((char **)t2);
    t2 = (t0 + 2168U);
    t4 = *((char **)t2);
    t2 = (t0 + 7704);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_AndGate(t8, 2, t3, t4);
    t9 = (t0 + 7704);
    xsi_driver_vfirst_trans(t9, 0, 0);
    t10 = (t0 + 7608);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_232_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 6296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(232, ng1);

LAB4:    xsi_set_current_line(233, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(233, ng1);
    t2 = (t0 + 6104);
    xsi_process_wait(t2, 30000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(234, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(234, ng1);
    t2 = (t0 + 6104);
    xsi_process_wait(t2, 30000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    goto LAB2;

}

static void Always_238_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 6544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(238, ng1);

LAB4:    xsi_set_current_line(239, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(239, ng1);
    t2 = (t0 + 6352);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(240, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(240, ng1);
    t2 = (t0 + 6352);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    goto LAB2;

}

static void Always_243_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 6792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(243, ng1);

LAB4:    xsi_set_current_line(244, ng1);
    t2 = (t0 + 6600);
    xsi_process_wait(t2, 1100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(245, ng1);
    t2 = ((char*)((ng4)));
    xsi_vlog_finish(*((unsigned int *)t2));
    goto LAB2;

}

static void Initial_248_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 7040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(248, ng1);

LAB4:    xsi_set_current_line(253, ng1);
    t2 = (t0 + 6848);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(254, ng1);
    Monitor_254_5(t0);
    xsi_set_current_line(256, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(257, ng1);
    t2 = (t0 + 6848);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(273, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(274, ng1);
    t2 = (t0 + 6848);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(276, ng1);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    xsi_set_current_line(277, ng1);
    xsi_vlog_finish(1);
    goto LAB1;

}

void Monitor_254_5(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 7096);
    t2 = (t0 + 7624);
    xsi_vlogfile_monitor((void *)Monitor_254_5_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000003127703376_0463264378_init()
{
	static char *pe[] = {(void *)Gate_230_0,(void *)Always_232_1,(void *)Always_238_2,(void *)Always_243_3,(void *)Initial_248_4,(void *)Monitor_254_5};
	xsi_register_didat("work_m_00000000003127703376_0463264378", "isim/COMBO_EVERYTHING_DIFFCLOCKS_isim_beh.exe.sim/work/m_00000000003127703376_0463264378.didat");
	xsi_register_executes(pe);
}
