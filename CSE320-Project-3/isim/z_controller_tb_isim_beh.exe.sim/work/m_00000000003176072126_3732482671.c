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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Zachary/Documents/GitHub/CSE320-Project-3/CSE320-Project-3/z_ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {0U, 63U};
static unsigned int ng3[] = {33U, 0U};
static unsigned int ng4[] = {35U, 0U};
static unsigned int ng5[] = {47U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {9U, 0U};
static unsigned int ng8[] = {12U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {5U, 0U};
static int ng11[] = {0, 0};
static unsigned int ng12[] = {43U, 0U};
static int ng13[] = {1, 0};



static void Always_48_0(char *t0)
{
    char t6[8];
    char t27[8];
    char t53[8];
    char t57[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t54;
    char *t55;
    char *t56;
    char *t58;
    char *t59;
    char *t60;

LAB0:    t1 = (t0 + 5408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 6472);
    *((int *)t2) = 1;
    t3 = (t0 + 5440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 4168);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 4008);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 26);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 26);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 63U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 63U);
    t14 = (t0 + 2568);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 6);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 21);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 21);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 31U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 31U);
    t14 = (t0 + 2888);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 5);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 16);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 16);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 31U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 31U);
    t14 = (t0 + 3048);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 5);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_xcompare(t4, 6, t5, 6);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_xcompare(t4, 6, t2, 6);
    if (t15 == 1)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB14:    t7 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_xcompare(t5, 6, t7, 6);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_xcompare(t5, 6, t2, 6);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_xcompare(t5, 6, t2, 6);
    if (t15 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_xcompare(t5, 6, t2, 6);
    if (t15 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t15 = xsi_vlog_unsigned_case_xcompare(t5, 6, t2, 6);
    if (t15 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_xcompare(t5, 6, t2, 6);
    if (t15 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t15 = xsi_vlog_unsigned_case_xcompare(t5, 6, t2, 6);
    if (t15 == 1)
        goto LAB27;

LAB28:
LAB29:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);

LAB71:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_xcompare(t7, 32, t14, 32);
    if (t15 == 1)
        goto LAB72;

LAB73:
LAB75:
LAB74:    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB76:    goto LAB2;

LAB7:    xsi_set_current_line(59, ng0);

LAB12:    xsi_set_current_line(60, ng0);
    t7 = (t0 + 4168);
    t14 = (t7 + 56U);
    t16 = *((char **)t14);
    memset(t6, 0, 8);
    t17 = (t6 + 4);
    t18 = (t16 + 4);
    t8 = *((unsigned int *)t16);
    t9 = (t8 >> 11);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t18);
    t11 = (t10 >> 11);
    *((unsigned int *)t17) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 31U);
    t13 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t13 & 31U);
    t19 = (t0 + 3208);
    xsi_vlogvar_assign_value(t19, t6, 0, 0, 5);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t14 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 6);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t14);
    t11 = (t10 >> 6);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 31U);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 31U);
    t16 = (t0 + 3528);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 5);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t14 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t14);
    t11 = (t10 >> 0);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 63U);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 63U);
    t16 = (t0 + 2728);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 6);
    goto LAB11;

LAB9:    xsi_set_current_line(64, ng0);

LAB13:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 4168);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t14 = (t6 + 4);
    t16 = (t7 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (t8 >> 0);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t16);
    t11 = (t10 >> 0);
    *((unsigned int *)t14) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 65535U);
    t13 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t13 & 65535U);
    t17 = (t0 + 4328);
    xsi_vlogvar_assign_value(t17, t6, 0, 0, 16);
    goto LAB11;

LAB15:    xsi_set_current_line(70, ng0);

LAB30:    xsi_set_current_line(71, ng0);
    t14 = (t0 + 2728);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);

LAB31:    t18 = ((char*)((ng3)));
    t20 = xsi_vlog_unsigned_case_xcompare(t17, 6, t18, 6);
    if (t20 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_xcompare(t17, 6, t2, 6);
    if (t15 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_xcompare(t17, 6, t2, 6);
    if (t15 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_xcompare(t17, 6, t2, 6);
    if (t15 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_xcompare(t17, 6, t2, 6);
    if (t15 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB29;

LAB17:    xsi_set_current_line(96, ng0);

LAB53:    xsi_set_current_line(98, ng0);
    t3 = (t0 + 4328);
    t7 = (t3 + 56U);
    t14 = *((char **)t7);
    memcpy(t6, t14, 8);
    t16 = (t0 + 4008);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 32);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB29;

LAB19:    xsi_set_current_line(101, ng0);

LAB54:    xsi_set_current_line(103, ng0);
    t3 = (t0 + 3848);
    t7 = (t3 + 56U);
    t14 = *((char **)t7);
    t16 = (t0 + 4328);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t8 = *((unsigned int *)t14);
    t9 = *((unsigned int *)t19);
    t10 = (t8 & t9);
    *((unsigned int *)t6) = t10;
    t21 = (t14 + 4);
    t22 = (t19 + 4);
    t23 = (t6 + 4);
    t11 = *((unsigned int *)t21);
    t12 = *((unsigned int *)t22);
    t13 = (t11 | t12);
    *((unsigned int *)t23) = t13;
    t28 = *((unsigned int *)t23);
    t29 = (t28 != 0);
    if (t29 == 1)
        goto LAB55;

LAB56:
LAB57:    t26 = (t0 + 3688);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 32);
    goto LAB29;

LAB21:    xsi_set_current_line(105, ng0);

LAB58:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 3848);
    t7 = (t3 + 56U);
    t14 = *((char **)t7);
    t16 = (t0 + 4008);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t14, 32, t19, 32);
    t21 = (t0 + 3688);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 32);
    goto LAB29;

LAB23:    xsi_set_current_line(109, ng0);

LAB59:    xsi_set_current_line(111, ng0);
    t3 = (t0 + 3848);
    t7 = (t3 + 56U);
    t14 = *((char **)t7);
    t16 = (t0 + 4008);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t14, 32, t19, 32);
    t21 = ((char*)((ng11)));
    memset(t27, 0, 8);
    t22 = (t6 + 4);
    t23 = (t21 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t21);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t22);
    t12 = *((unsigned int *)t23);
    t13 = (t11 ^ t12);
    t28 = (t10 | t13);
    t29 = *((unsigned int *)t22);
    t30 = *((unsigned int *)t23);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB63;

LAB60:    if (t31 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t27) = 1;

LAB63:    t25 = (t27 + 4);
    t34 = *((unsigned int *)t25);
    t35 = (~(t34));
    t36 = *((unsigned int *)t27);
    t37 = (t36 & t35);
    t39 = (t37 != 0);
    if (t39 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB66:    goto LAB29;

LAB25:    xsi_set_current_line(116, ng0);

LAB69:    xsi_set_current_line(118, ng0);
    t3 = (t0 + 4328);
    t7 = (t3 + 56U);
    t14 = *((char **)t7);
    memcpy(t6, t14, 8);
    t16 = (t0 + 4008);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 32);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB29;

LAB27:    xsi_set_current_line(121, ng0);

LAB70:    xsi_set_current_line(123, ng0);
    t3 = (t0 + 4328);
    t7 = (t3 + 56U);
    t14 = *((char **)t7);
    memcpy(t6, t14, 8);
    t16 = (t0 + 4008);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 32);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB29;

LAB32:    xsi_set_current_line(72, ng0);

LAB43:    xsi_set_current_line(74, ng0);
    t19 = (t0 + 3848);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t23 = (t0 + 4008);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t22, 32, t25, 32);
    t26 = (t0 + 3688);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 32);
    goto LAB42;

LAB34:    xsi_set_current_line(76, ng0);

LAB44:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 3848);
    t7 = (t3 + 56U);
    t14 = *((char **)t7);
    t16 = (t0 + 4008);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t14, 32, t19, 32);
    t21 = (t0 + 3688);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 32);
    goto LAB42;

LAB36:    xsi_set_current_line(80, ng0);

LAB45:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 3848);
    t7 = (t3 + 56U);
    t14 = *((char **)t7);
    t16 = (t0 + 4008);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t8 = *((unsigned int *)t14);
    t9 = *((unsigned int *)t19);
    t10 = (t8 | t9);
    *((unsigned int *)t27) = t10;
    t21 = (t14 + 4);
    t22 = (t19 + 4);
    t23 = (t27 + 4);
    t11 = *((unsigned int *)t21);
    t12 = *((unsigned int *)t22);
    t13 = (t11 | t12);
    *((unsigned int *)t23) = t13;
    t28 = *((unsigned int *)t23);
    t29 = (t28 != 0);
    if (t29 == 1)
        goto LAB46;

LAB47:
LAB48:    memset(t6, 0, 8);
    t26 = (t6 + 4);
    t43 = (t27 + 4);
    t44 = *((unsigned int *)t27);
    t45 = (~(t44));
    *((unsigned int *)t6) = t45;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t43) != 0)
        goto LAB50;

LAB49:    t50 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t50 & 4294967295U);
    t51 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t51 & 4294967295U);
    t52 = (t0 + 3688);
    xsi_vlogvar_assign_value(t52, t6, 0, 0, 32);
    goto LAB42;

LAB38:    xsi_set_current_line(84, ng0);

LAB51:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 3848);
    t7 = (t3 + 56U);
    t14 = *((char **)t7);
    t16 = (t0 + 3368);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 32, t14, 32, t19, 5);
    t21 = (t0 + 3688);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 32);
    goto LAB42;

LAB40:    xsi_set_current_line(88, ng0);

LAB52:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 3848);
    t7 = (t3 + 56U);
    t14 = *((char **)t7);
    t16 = (t0 + 3368);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 32, t14, 32, t19, 5);
    t21 = (t0 + 3688);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 32);
    goto LAB42;

LAB46:    t30 = *((unsigned int *)t27);
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t27) = (t30 | t31);
    t24 = (t14 + 4);
    t25 = (t19 + 4);
    t32 = *((unsigned int *)t24);
    t33 = (~(t32));
    t34 = *((unsigned int *)t14);
    t20 = (t34 & t33);
    t35 = *((unsigned int *)t25);
    t36 = (~(t35));
    t37 = *((unsigned int *)t19);
    t38 = (t37 & t36);
    t39 = (~(t20));
    t40 = (~(t38));
    t41 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t41 & t39);
    t42 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t42 & t40);
    goto LAB48;

LAB50:    t46 = *((unsigned int *)t6);
    t47 = *((unsigned int *)t43);
    *((unsigned int *)t6) = (t46 | t47);
    t48 = *((unsigned int *)t26);
    t49 = *((unsigned int *)t43);
    *((unsigned int *)t26) = (t48 | t49);
    goto LAB49;

LAB55:    t30 = *((unsigned int *)t6);
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t6) = (t30 | t31);
    t24 = (t14 + 4);
    t25 = (t19 + 4);
    t32 = *((unsigned int *)t14);
    t33 = (~(t32));
    t34 = *((unsigned int *)t24);
    t35 = (~(t34));
    t36 = *((unsigned int *)t19);
    t37 = (~(t36));
    t39 = *((unsigned int *)t25);
    t40 = (~(t39));
    t20 = (t33 & t35);
    t38 = (t37 & t40);
    t41 = (~(t20));
    t42 = (~(t38));
    t44 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t44 & t41);
    t45 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t45 & t42);
    t46 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t46 & t41);
    t47 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t47 & t42);
    goto LAB57;

LAB62:    t24 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB63;

LAB64:    xsi_set_current_line(112, ng0);
    t26 = (t0 + 3848);
    t43 = (t26 + 56U);
    t52 = *((char **)t43);
    t54 = (t0 + 4008);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    memset(t57, 0, 8);
    xsi_vlog_unsigned_minus(t57, 32, t52, 32, t56, 32);
    memset(t53, 0, 8);
    t58 = (t53 + 4);
    t59 = (t57 + 4);
    t40 = *((unsigned int *)t57);
    t41 = (~(t40));
    *((unsigned int *)t53) = t41;
    *((unsigned int *)t58) = 0;
    if (*((unsigned int *)t59) != 0)
        goto LAB68;

LAB67:    t47 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t47 & 4294967295U);
    t48 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t48 & 4294967295U);
    t60 = (t0 + 3688);
    xsi_vlogvar_assign_value(t60, t53, 0, 0, 32);
    goto LAB66;

LAB68:    t42 = *((unsigned int *)t53);
    t44 = *((unsigned int *)t59);
    *((unsigned int *)t53) = (t42 | t44);
    t45 = *((unsigned int *)t58);
    t46 = *((unsigned int *)t59);
    *((unsigned int *)t58) = (t45 | t46);
    goto LAB67;

LAB72:    xsi_set_current_line(130, ng0);

LAB77:    xsi_set_current_line(131, ng0);
    t16 = ((char*)((ng13)));
    t18 = (t0 + 4488);
    xsi_vlogvar_assign_value(t18, t16, 0, 0, 1);
    goto LAB76;

}

static void Cont_140_1(char *t0)
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

LAB0:    t1 = (t0 + 5656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6584);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 6488);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_141_2(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6648);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 6504);
    *((int *)t18) = 1;

LAB1:    return;
}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 6152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 6712);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void work_m_00000000003176072126_3732482671_init()
{
	static char *pe[] = {(void *)Always_48_0,(void *)Cont_140_1,(void *)Cont_141_2,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000003176072126_3732482671", "isim/z_controller_tb_isim_beh.exe.sim/work/m_00000000003176072126_3732482671.didat");
	xsi_register_executes(pe);
}
