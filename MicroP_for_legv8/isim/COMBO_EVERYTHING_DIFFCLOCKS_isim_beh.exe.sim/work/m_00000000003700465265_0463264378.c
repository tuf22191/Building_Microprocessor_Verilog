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

void Monitor_255_5(char *);
void Monitor_255_5(char *);


static void Monitor_255_5_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = (t0 + 1528U);
    t6 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 3, ng0, 5, t0, (char)118, t1, 64, (char)118, t4, 32, (char)118, t5, 32, (char)118, t6, 32);

LAB1:    return;
}

static void Gate_231_0(char *t0)
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

LAB0:    t1 = (t0 + 6208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4568U);
    t3 = *((char **)t2);
    t2 = (t0 + 2328U);
    t4 = *((char **)t2);
    t2 = (t0 + 7864);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_AndGate(t8, 2, t3, t4);
    t9 = (t0 + 7864);
    xsi_driver_vfirst_trans(t9, 0, 0);
    t10 = (t0 + 7768);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_233_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 6456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(233, ng1);

LAB4:    xsi_set_current_line(234, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(234, ng1);
    t2 = (t0 + 6264);
    xsi_process_wait(t2, 30000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(235, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(235, ng1);
    t2 = (t0 + 6264);
    xsi_process_wait(t2, 30000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    goto LAB2;

}

static void Always_239_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 6704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(239, ng1);

LAB4:    xsi_set_current_line(240, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(240, ng1);
    t2 = (t0 + 6512);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(241, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(241, ng1);
    t2 = (t0 + 6512);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    goto LAB2;

}

static void Always_244_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 6952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(244, ng1);

LAB4:    xsi_set_current_line(245, ng1);
    t2 = (t0 + 6760);
    xsi_process_wait(t2, 11000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(246, ng1);
    t2 = ((char*)((ng4)));
    xsi_vlog_finish(*((unsigned int *)t2));
    goto LAB2;

}

static void Initial_249_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 7200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(249, ng1);

LAB4:    xsi_set_current_line(254, ng1);
    t2 = (t0 + 7008);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(255, ng1);
    Monitor_255_5(t0);
    xsi_set_current_line(257, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(258, ng1);
    t2 = (t0 + 7008);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(274, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(275, ng1);
    t2 = (t0 + 7008);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(277, ng1);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    xsi_set_current_line(278, ng1);
    xsi_vlog_finish(1);
    goto LAB1;

}

void Monitor_255_5(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 7256);
    t2 = (t0 + 7784);
    xsi_vlogfile_monitor((void *)Monitor_255_5_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000003700465265_0463264378_init()
{
	static char *pe[] = {(void *)Gate_231_0,(void *)Always_233_1,(void *)Always_239_2,(void *)Always_244_3,(void *)Initial_249_4,(void *)Monitor_255_5};
	xsi_register_didat("work_m_00000000003700465265_0463264378", "isim/COMBO_EVERYTHING_DIFFCLOCKS_isim_beh.exe.sim/work/m_00000000003700465265_0463264378.didat");
	xsi_register_executes(pe);
}
