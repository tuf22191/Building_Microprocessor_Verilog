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
static const char *ng1 = "C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/COMBO_PC_InstructionReg_Controller.v";
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static int ng4[] = {1953066862, 0, 1836412001, 0, 1746957161, 0, 544696692, 0, 1936221540, 0, 1718185577, 0};
static int ng5[] = {2, 0};
static int ng6[] = {3, 0};
static int ng7[] = {4, 0};
static int ng8[] = {5, 0};
static int ng9[] = {6, 0};
static int ng10[] = {7, 0};
static int ng11[] = {8, 0};

void Monitor_86_3(char *);
void Monitor_86_3(char *);


static void Monitor_86_3_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    t6 = (t0 + 1208U);
    t8 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 3, ng0, 5, t0, (char)118, t1, 64, (char)118, t5, 32, (char)118, t7, 32, (char)118, t8, 32);

LAB1:    return;
}

static void Always_70_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng1);

LAB4:    xsi_set_current_line(71, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng1);
    t2 = (t0 + 3776);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(72, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng1);
    t2 = (t0 + 3776);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    goto LAB2;

}

static void Always_75_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng1);

LAB4:    xsi_set_current_line(76, ng1);
    t2 = (t0 + 4024);
    xsi_process_wait(t2, 110000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(77, ng1);
    t3 = ((char*)((ng4)));
    xsi_vlog_finish(*((unsigned int *)t3));
    goto LAB2;

}

static void Initial_80_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 4464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng1);

LAB4:    xsi_set_current_line(82, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(85, ng1);
    t2 = (t0 + 4272);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(86, ng1);
    Monitor_86_3(t0);
    xsi_set_current_line(89, ng1);
    t2 = (t0 + 5032);
    *((int *)t2) = 1;
    t3 = (t0 + 4496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(90, ng1);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(91, ng1);
    t2 = (t0 + 5048);
    *((int *)t2) = 1;
    t3 = (t0 + 4496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(92, ng1);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(93, ng1);
    t2 = (t0 + 5064);
    *((int *)t2) = 1;
    t3 = (t0 + 4496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(94, ng1);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(95, ng1);
    t2 = (t0 + 5080);
    *((int *)t2) = 1;
    t3 = (t0 + 4496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(96, ng1);
    t4 = ((char*)((ng7)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(97, ng1);
    t2 = (t0 + 5096);
    *((int *)t2) = 1;
    t3 = (t0 + 4496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(98, ng1);
    t4 = ((char*)((ng8)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(99, ng1);
    t2 = (t0 + 5112);
    *((int *)t2) = 1;
    t3 = (t0 + 4496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(100, ng1);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(101, ng1);
    t2 = (t0 + 5128);
    *((int *)t2) = 1;
    t3 = (t0 + 4496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(102, ng1);
    t4 = ((char*)((ng10)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(103, ng1);
    t2 = (t0 + 5144);
    *((int *)t2) = 1;
    t3 = (t0 + 4496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(104, ng1);
    t4 = ((char*)((ng11)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB1;

}

void Monitor_86_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 4520);
    t2 = (t0 + 5160);
    xsi_vlogfile_monitor((void *)Monitor_86_3_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000001552309707_2554557689_init()
{
	static char *pe[] = {(void *)Always_70_0,(void *)Always_75_1,(void *)Initial_80_2,(void *)Monitor_86_3};
	xsi_register_didat("work_m_00000000001552309707_2554557689", "isim/COMBO_PC_InstructionReg_Controller_isim_beh.exe.sim/work/m_00000000001552309707_2554557689.didat");
	xsi_register_executes(pe);
}
