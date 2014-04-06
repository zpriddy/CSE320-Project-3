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
static const char *ng0 = "C:/Users/Zachary/Documents/GitHub/CSE320-Project-3/CSE320-Project-3/z_pc.v";
static int ng1[] = {4, 0};
static int ng2[] = {27, 0};
static int ng3[] = {2, 0};
static int ng4[] = {31, 0};
static int ng5[] = {28, 0};
static int ng6[] = {16, 0};



static void Always_34_0(char *t0)
{
    char t6[8];
    char t14[8];
    char t15[8];
    char t16[8];
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 4288);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 32, t4, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 67108863U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 67108863U);
    t5 = (t0 + 2408);
    t7 = (t0 + 2408);
    t17 = (t7 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng2)));
    t20 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t14, t15, t16, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t14 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t15 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t16 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 28);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 28);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 15U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 15U);
    t17 = (t0 + 2408);
    t18 = (t0 + 2408);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng4)));
    t24 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t14, t15, t16, ((int*)(t20)), 2, t21, 32, 1, t24, 32, 1);
    t28 = (t14 + 4);
    t22 = *((unsigned int *)t28);
    t23 = (!(t22));
    t38 = (t15 + 4);
    t25 = *((unsigned int *)t38);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t39 = (t16 + 4);
    t29 = *((unsigned int *)t39);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t14) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t12 & 65535U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 65535U);
    t5 = ((char*)((ng6)));
    t7 = (t0 + 1208U);
    t17 = *((char **)t7);
    memset(t16, 0, 8);
    t7 = (t16 + 4);
    t18 = (t17 + 4);
    t22 = *((unsigned int *)t17);
    t25 = (t22 >> 15);
    t29 = (t25 & 1);
    *((unsigned int *)t16) = t29;
    t32 = *((unsigned int *)t18);
    t34 = (t32 >> 15);
    t35 = (t34 & 1);
    *((unsigned int *)t7) = t35;
    xsi_vlog_mul_concat(t15, 16, 1, t5, 1U, t16, 1);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t15, 16, t14, 16);
    t19 = (t0 + 2568);
    xsi_vlogvar_assign_value(t19, t6, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t7 = (t5 + 56U);
    t17 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t17, 32);
    t18 = (t0 + 2728);
    xsi_vlogvar_assign_value(t18, t6, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t2) != 0)
        goto LAB12;

LAB13:    t5 = (t6 + 4);
    t13 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t5);
    t25 = (t13 || t22);
    if (t25 > 0)
        goto LAB14;

LAB15:    memcpy(t15, t6, 8);

LAB16:    t38 = (t0 + 3048);
    xsi_vlogvar_assign_value(t38, t15, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t5) != 0)
        goto LAB26;

LAB27:    t17 = (t14 + 4);
    t13 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t17);
    t25 = (t13 || t22);
    if (t25 > 0)
        goto LAB28;

LAB29:    t29 = *((unsigned int *)t14);
    t32 = (~(t29));
    t34 = *((unsigned int *)t17);
    t35 = (t32 || t34);
    if (t35 > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t17) > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t14) > 0)
        goto LAB34;

LAB35:    memcpy(t6, t28, 8);

LAB36:    t38 = (t0 + 2888);
    xsi_vlogvar_assign_value(t38, t6, 0, 0, 32);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t2) != 0)
        goto LAB39;

LAB40:    t5 = (t14 + 4);
    t13 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t5);
    t25 = (t13 || t22);
    if (t25 > 0)
        goto LAB41;

LAB42:    t29 = *((unsigned int *)t14);
    t32 = (~(t29));
    t34 = *((unsigned int *)t5);
    t35 = (t32 || t34);
    if (t35 > 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t5) > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t14) > 0)
        goto LAB47;

LAB48:    memcpy(t6, t21, 8);

LAB49:    t24 = (t0 + 2088);
    xsi_vlogvar_assign_value(t24, t6, 0, 0, 32);
    goto LAB2;

LAB6:    t32 = *((unsigned int *)t16);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t14);
    t35 = *((unsigned int *)t15);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t5, t6, t33, *((unsigned int *)t15), t37);
    goto LAB7;

LAB8:    t32 = *((unsigned int *)t16);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t14);
    t35 = *((unsigned int *)t15);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t17, t6, t33, *((unsigned int *)t15), t37);
    goto LAB9;

LAB10:    *((unsigned int *)t6) = 1;
    goto LAB13;

LAB12:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB14:    t7 = (t0 + 1688U);
    t17 = *((char **)t7);
    memset(t14, 0, 8);
    t7 = (t17 + 4);
    t29 = *((unsigned int *)t7);
    t32 = (~(t29));
    t34 = *((unsigned int *)t17);
    t35 = (t34 & t32);
    t40 = (t35 & 1U);
    if (t40 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t7) != 0)
        goto LAB19;

LAB20:    t41 = *((unsigned int *)t6);
    t42 = *((unsigned int *)t14);
    t43 = (t41 & t42);
    *((unsigned int *)t15) = t43;
    t19 = (t6 + 4);
    t20 = (t14 + 4);
    t21 = (t15 + 4);
    t44 = *((unsigned int *)t19);
    t45 = *((unsigned int *)t20);
    t46 = (t44 | t45);
    *((unsigned int *)t21) = t46;
    t47 = *((unsigned int *)t21);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB16;

LAB17:    *((unsigned int *)t14) = 1;
    goto LAB20;

LAB19:    t18 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB20;

LAB21:    t49 = *((unsigned int *)t15);
    t50 = *((unsigned int *)t21);
    *((unsigned int *)t15) = (t49 | t50);
    t24 = (t6 + 4);
    t28 = (t14 + 4);
    t51 = *((unsigned int *)t6);
    t52 = (~(t51));
    t53 = *((unsigned int *)t24);
    t54 = (~(t53));
    t55 = *((unsigned int *)t14);
    t56 = (~(t55));
    t57 = *((unsigned int *)t28);
    t58 = (~(t57));
    t23 = (t52 & t54);
    t26 = (t56 & t58);
    t59 = (~(t23));
    t60 = (~(t26));
    t61 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t61 & t59);
    t62 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t62 & t60);
    t63 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t63 & t59);
    t64 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t64 & t60);
    goto LAB23;

LAB24:    *((unsigned int *)t14) = 1;
    goto LAB27;

LAB26:    t7 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB27;

LAB28:    t18 = (t0 + 2728);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    goto LAB29;

LAB30:    t21 = (t0 + 2248);
    t24 = (t21 + 56U);
    t28 = *((char **)t24);
    goto LAB31;

LAB32:    xsi_vlog_unsigned_bit_combine(t6, 32, t20, 32, t28, 32);
    goto LAB36;

LAB34:    memcpy(t6, t20, 8);
    goto LAB36;

LAB37:    *((unsigned int *)t14) = 1;
    goto LAB40;

LAB39:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB40;

LAB41:    t7 = (t0 + 2408);
    t17 = (t7 + 56U);
    t18 = *((char **)t17);
    goto LAB42;

LAB43:    t19 = (t0 + 2888);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    goto LAB44;

LAB45:    xsi_vlog_unsigned_bit_combine(t6, 32, t18, 32, t21, 32);
    goto LAB49;

LAB47:    memcpy(t6, t18, 8);
    goto LAB49;

}


extern void work_m_00000000002718482002_0394590006_init()
{
	static char *pe[] = {(void *)Always_34_0};
	xsi_register_didat("work_m_00000000002718482002_0394590006", "isim/z_controller_tb_isim_beh.exe.sim/work/m_00000000002718482002_0394590006.didat");
	xsi_register_executes(pe);
}
