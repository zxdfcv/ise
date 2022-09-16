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
static const char *ng0 = "C:/Users/10791/cpu_checker/test.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {94, 0};
static int ng4[] = {50, 0};
static int ng5[] = {52, 0};
static int ng6[] = {64, 0};
static int ng7[] = {48, 0};
static int ng8[] = {51, 0};
static int ng9[] = {102, 0};
static int ng10[] = {58, 0};
static int ng11[] = {32, 0};
static int ng12[] = {36, 0};
static int ng13[] = {49, 0};
static int ng14[] = {60, 0};
static int ng15[] = {61, 0};
static int ng16[] = {53, 0};
static int ng17[] = {54, 0};
static int ng18[] = {55, 0};
static int ng19[] = {56, 0};
static int ng20[] = {35, 0};
static int ng21[] = {120, 0};
static int ng22[] = {42, 0};
static int ng23[] = {66, 0};
static int ng24[] = {98, 0};
static int ng25[] = {99, 0};
static int ng26[] = {57, 0};
static int ng27[] = {97, 0};
static int ng28[] = {100, 0};
static int ng29[] = {101, 0};



static void Initial_43_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);

LAB4:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(68, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB26:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB30:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB31:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB32:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB33:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB34:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB35:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB36:    xsi_set_current_line(80, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB37:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB38:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB40:    xsi_set_current_line(85, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB41:    xsi_set_current_line(86, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB42:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB43:    xsi_set_current_line(88, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB44:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB45:    xsi_set_current_line(90, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB46:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB47:    xsi_set_current_line(92, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB48;
    goto LAB1;

LAB48:    xsi_set_current_line(93, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB49:    xsi_set_current_line(94, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB50:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB51:    xsi_set_current_line(96, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB52:    xsi_set_current_line(97, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB53:    xsi_set_current_line(98, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB54:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB55:    xsi_set_current_line(100, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB56;
    goto LAB1;

LAB56:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB57:    xsi_set_current_line(102, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB58;
    goto LAB1;

LAB58:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB59:    xsi_set_current_line(104, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB60;
    goto LAB1;

LAB60:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB61:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB62;
    goto LAB1;

LAB62:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB63:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB64;
    goto LAB1;

LAB64:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB65;
    goto LAB1;

LAB65:    xsi_set_current_line(110, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB66;
    goto LAB1;

LAB66:    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB67:    xsi_set_current_line(112, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB68;
    goto LAB1;

LAB68:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB69;
    goto LAB1;

LAB69:    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB70;
    goto LAB1;

LAB70:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB71:    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB72;
    goto LAB1;

LAB72:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB73;
    goto LAB1;

LAB73:    xsi_set_current_line(119, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB74;
    goto LAB1;

LAB74:    xsi_set_current_line(120, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB75:    xsi_set_current_line(121, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB76;
    goto LAB1;

LAB76:    xsi_set_current_line(122, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB77;
    goto LAB1;

LAB77:    xsi_set_current_line(123, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB78;
    goto LAB1;

LAB78:    xsi_set_current_line(124, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB79:    xsi_set_current_line(125, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB80:    xsi_set_current_line(126, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB81;
    goto LAB1;

LAB81:    xsi_set_current_line(127, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB82;
    goto LAB1;

LAB82:    xsi_set_current_line(128, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB83;
    goto LAB1;

LAB83:    xsi_set_current_line(129, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB84;
    goto LAB1;

LAB84:    xsi_set_current_line(130, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB85;
    goto LAB1;

LAB85:    xsi_set_current_line(131, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB86;
    goto LAB1;

LAB86:    xsi_set_current_line(132, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB87:    xsi_set_current_line(133, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB88;
    goto LAB1;

LAB88:    xsi_set_current_line(134, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB89;
    goto LAB1;

LAB89:    xsi_set_current_line(135, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB90;
    goto LAB1;

LAB90:    xsi_set_current_line(136, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB91:    xsi_set_current_line(137, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB92;
    goto LAB1;

LAB92:    xsi_set_current_line(138, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB93;
    goto LAB1;

LAB93:    xsi_set_current_line(139, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB94;
    goto LAB1;

LAB94:    xsi_set_current_line(140, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB95;
    goto LAB1;

LAB95:    xsi_set_current_line(141, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB96;
    goto LAB1;

LAB96:    xsi_set_current_line(142, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB97;
    goto LAB1;

LAB97:    xsi_set_current_line(143, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB98;
    goto LAB1;

LAB98:    xsi_set_current_line(144, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB99;
    goto LAB1;

LAB99:    xsi_set_current_line(145, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB100;
    goto LAB1;

LAB100:    xsi_set_current_line(146, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB101;
    goto LAB1;

LAB101:    xsi_set_current_line(147, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB102;
    goto LAB1;

LAB102:    xsi_set_current_line(148, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB103:    xsi_set_current_line(149, ng0);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB104;
    goto LAB1;

LAB104:    xsi_set_current_line(150, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB105;
    goto LAB1;

LAB105:    xsi_set_current_line(151, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB106;
    goto LAB1;

LAB106:    xsi_set_current_line(152, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB107;
    goto LAB1;

LAB107:    xsi_set_current_line(153, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB108;
    goto LAB1;

LAB108:    xsi_set_current_line(154, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB109;
    goto LAB1;

LAB109:    xsi_set_current_line(155, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB110;
    goto LAB1;

LAB110:    xsi_set_current_line(156, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB111;
    goto LAB1;

LAB111:    xsi_set_current_line(157, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB112;
    goto LAB1;

LAB112:    xsi_set_current_line(158, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB113;
    goto LAB1;

LAB113:    xsi_set_current_line(159, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB114;
    goto LAB1;

LAB114:    xsi_set_current_line(160, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB115;
    goto LAB1;

LAB115:    xsi_set_current_line(161, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB116;
    goto LAB1;

LAB116:    xsi_set_current_line(162, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB117;
    goto LAB1;

LAB117:    xsi_set_current_line(163, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB118;
    goto LAB1;

LAB118:    xsi_set_current_line(164, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB119;
    goto LAB1;

LAB119:    xsi_set_current_line(165, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB120;
    goto LAB1;

LAB120:    xsi_set_current_line(166, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB121;
    goto LAB1;

LAB121:    xsi_set_current_line(167, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB122;
    goto LAB1;

LAB122:    xsi_set_current_line(168, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB123;
    goto LAB1;

LAB123:    xsi_set_current_line(169, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB124;
    goto LAB1;

LAB124:    xsi_set_current_line(170, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB125;
    goto LAB1;

LAB125:    xsi_set_current_line(171, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB126;
    goto LAB1;

LAB126:    xsi_set_current_line(172, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB127;
    goto LAB1;

LAB127:    xsi_set_current_line(173, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(174, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB128;
    goto LAB1;

LAB128:    xsi_set_current_line(174, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(175, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB129;
    goto LAB1;

LAB129:    xsi_set_current_line(175, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(176, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB130;
    goto LAB1;

LAB130:    xsi_set_current_line(176, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB131;
    goto LAB1;

LAB131:    xsi_set_current_line(177, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB132;
    goto LAB1;

LAB132:    xsi_set_current_line(178, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB133;
    goto LAB1;

LAB133:    xsi_set_current_line(179, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB134;
    goto LAB1;

LAB134:    xsi_set_current_line(180, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(181, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB135;
    goto LAB1;

LAB135:    xsi_set_current_line(181, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(182, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB136;
    goto LAB1;

LAB136:    xsi_set_current_line(182, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(183, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB137;
    goto LAB1;

LAB137:    xsi_set_current_line(183, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB138;
    goto LAB1;

LAB138:    xsi_set_current_line(184, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(185, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB139;
    goto LAB1;

LAB139:    xsi_set_current_line(185, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB140;
    goto LAB1;

LAB140:    xsi_set_current_line(186, ng0);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB141;
    goto LAB1;

LAB141:    xsi_set_current_line(187, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB142;
    goto LAB1;

LAB142:    xsi_set_current_line(188, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB143;
    goto LAB1;

LAB143:    xsi_set_current_line(189, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(190, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB144;
    goto LAB1;

LAB144:    xsi_set_current_line(190, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB145;
    goto LAB1;

LAB145:    xsi_set_current_line(191, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB146;
    goto LAB1;

LAB146:    xsi_set_current_line(192, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(193, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB147;
    goto LAB1;

LAB147:    xsi_set_current_line(193, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB148;
    goto LAB1;

LAB148:    xsi_set_current_line(194, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(195, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB149;
    goto LAB1;

LAB149:    xsi_set_current_line(195, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB150;
    goto LAB1;

LAB150:    xsi_set_current_line(196, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB151;
    goto LAB1;

LAB151:    xsi_set_current_line(197, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(198, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB152;
    goto LAB1;

LAB152:    xsi_set_current_line(198, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB153;
    goto LAB1;

LAB153:    xsi_set_current_line(199, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(200, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB154;
    goto LAB1;

LAB154:    xsi_set_current_line(200, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(201, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB155;
    goto LAB1;

LAB155:    xsi_set_current_line(201, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(202, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB156;
    goto LAB1;

LAB156:    xsi_set_current_line(202, ng0);
    t3 = ((char*)((ng25)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(203, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB157;
    goto LAB1;

LAB157:    xsi_set_current_line(203, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(204, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB158;
    goto LAB1;

LAB158:    xsi_set_current_line(204, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(205, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB159;
    goto LAB1;

LAB159:    xsi_set_current_line(205, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB160;
    goto LAB1;

LAB160:    xsi_set_current_line(206, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(207, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB161;
    goto LAB1;

LAB161:    xsi_set_current_line(207, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(208, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB162;
    goto LAB1;

LAB162:    xsi_set_current_line(208, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB163;
    goto LAB1;

LAB163:    xsi_set_current_line(209, ng0);
    t3 = ((char*)((ng26)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB164;
    goto LAB1;

LAB164:    xsi_set_current_line(210, ng0);
    t3 = ((char*)((ng27)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(211, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB165;
    goto LAB1;

LAB165:    xsi_set_current_line(211, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB166;
    goto LAB1;

LAB166:    xsi_set_current_line(212, ng0);
    t3 = ((char*)((ng25)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(213, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB167;
    goto LAB1;

LAB167:    xsi_set_current_line(213, ng0);
    t3 = ((char*)((ng28)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB168;
    goto LAB1;

LAB168:    xsi_set_current_line(214, ng0);
    t3 = ((char*)((ng29)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(215, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB169;
    goto LAB1;

LAB169:    xsi_set_current_line(215, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB170;
    goto LAB1;

LAB170:    xsi_set_current_line(216, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB171;
    goto LAB1;

LAB171:    xsi_set_current_line(217, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(218, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB172;
    goto LAB1;

LAB172:    xsi_set_current_line(218, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(219, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB173;
    goto LAB1;

LAB173:    xsi_set_current_line(219, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(220, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB174;
    goto LAB1;

LAB174:    xsi_set_current_line(220, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(221, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB175;
    goto LAB1;

LAB175:    xsi_set_current_line(221, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(222, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB176;
    goto LAB1;

LAB176:    xsi_set_current_line(222, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(223, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB177;
    goto LAB1;

LAB177:    xsi_set_current_line(223, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(224, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB178;
    goto LAB1;

LAB178:    xsi_set_current_line(224, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(225, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB179;
    goto LAB1;

LAB179:    xsi_set_current_line(225, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(226, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB180;
    goto LAB1;

LAB180:    xsi_set_current_line(226, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(227, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB181;
    goto LAB1;

LAB181:    xsi_set_current_line(227, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(228, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB182;
    goto LAB1;

LAB182:    xsi_set_current_line(228, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(229, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB183;
    goto LAB1;

LAB183:    xsi_set_current_line(229, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(230, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB184;
    goto LAB1;

LAB184:    xsi_set_current_line(230, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(231, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB185;
    goto LAB1;

LAB185:    xsi_set_current_line(231, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(232, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB186;
    goto LAB1;

LAB186:    xsi_set_current_line(232, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(233, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB187;
    goto LAB1;

LAB187:    xsi_set_current_line(233, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(234, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB188;
    goto LAB1;

LAB188:    xsi_set_current_line(234, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(235, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB189;
    goto LAB1;

LAB189:    xsi_set_current_line(235, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(236, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB190;
    goto LAB1;

LAB190:    xsi_set_current_line(236, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(237, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB191;
    goto LAB1;

LAB191:    xsi_set_current_line(237, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(238, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB192;
    goto LAB1;

LAB192:    xsi_set_current_line(238, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(239, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB193;
    goto LAB1;

LAB193:    xsi_set_current_line(239, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(240, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB194;
    goto LAB1;

LAB194:    xsi_set_current_line(240, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(241, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB195;
    goto LAB1;

LAB195:    xsi_set_current_line(241, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(242, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB196;
    goto LAB1;

LAB196:    xsi_set_current_line(242, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(243, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB197;
    goto LAB1;

LAB197:    xsi_set_current_line(243, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(244, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB198;
    goto LAB1;

LAB198:    xsi_set_current_line(244, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(245, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB199;
    goto LAB1;

LAB199:    xsi_set_current_line(245, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(246, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB200;
    goto LAB1;

LAB200:    xsi_set_current_line(246, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(247, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB201;
    goto LAB1;

LAB201:    xsi_set_current_line(247, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB1;

}

static void Always_252_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(252, ng0);
    t2 = (t0 + 2744);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(252, ng0);
    t4 = (t0 + 1448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1448);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}


extern void work_m_00000000002362934124_1985558087_init()
{
	static char *pe[] = {(void *)Initial_43_0,(void *)Always_252_1};
	xsi_register_didat("work_m_00000000002362934124_1985558087", "isim/test_isim_beh.exe.sim/work/m_00000000002362934124_1985558087.didat");
	xsi_register_executes(pe);
}
