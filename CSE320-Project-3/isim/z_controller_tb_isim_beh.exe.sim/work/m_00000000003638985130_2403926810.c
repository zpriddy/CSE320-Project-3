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
static const char *ng0 = "C:/Users/Zachary/Documents/GitHub/CSE320-Project-3/CSE320-Project-3/z_controller.v";
static int ng1[] = {16, 0};
static unsigned int ng2[] = {65535U, 0U};
static unsigned int ng3[] = {0U, 0U};



static void Always_36_0(char *t0)
{
    char t4[72];
    char t5[8];
    char t15[64];
    char t17[8];
    char t18[8];
    char t21[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t16;
    char *t19;
    char *t20;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;

LAB0:    t1 = (t0 + 5088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 5408);
    *((int *)t2) = 1;
    t3 = (t0 + 5120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 65535U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 65535U);
    t16 = ((char*)((ng1)));
    t19 = (t0 + 1048U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    t19 = (t21 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 15);
    t25 = (t24 & 1);
    *((unsigned int *)t21) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 15);
    t28 = (t27 & 1);
    *((unsigned int *)t19) = t28;
    t29 = (t0 + 2648U);
    t30 = *((char **)t29);
    t32 = *((unsigned int *)t21);
    t33 = *((unsigned int *)t30);
    t34 = (t32 & t33);
    *((unsigned int *)t31) = t34;
    t29 = (t21 + 4);
    t35 = (t30 + 4);
    t36 = (t31 + 4);
    t37 = *((unsigned int *)t29);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB6;

LAB7:
LAB8:    memset(t18, 0, 8);
    t62 = (t31 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t31);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t62) != 0)
        goto LAB11;

LAB12:    t69 = (t18 + 4);
    t70 = *((unsigned int *)t18);
    t71 = *((unsigned int *)t69);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB13;

LAB14:    t74 = *((unsigned int *)t18);
    t75 = (~(t74));
    t76 = *((unsigned int *)t69);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t69) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t18) > 0)
        goto LAB19;

LAB20:    memcpy(t17, t78, 8);

LAB21:    xsi_vlog_mul_concat(t15, 256, 16, t16, 1U, t17, 16);
    xsi_vlogtype_concat(t4, 272, 272, 2U, t15, 256, t5, 16);
    t79 = (t0 + 4008);
    xsi_vlogvar_assign_value(t79, t4, 0, 0, 32);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3288U);
    t3 = *((char **)t2);
    memset(t17, 0, 8);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t2) != 0)
        goto LAB24;

LAB25:    t7 = (t17 + 4);
    t14 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t7);
    t24 = (t14 || t23);
    if (t24 > 0)
        goto LAB26;

LAB27:    t25 = *((unsigned int *)t17);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t7) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t17) > 0)
        goto LAB32;

LAB33:    memcpy(t5, t22, 8);

LAB34:    t20 = (t0 + 4168);
    xsi_vlogvar_assign_value(t20, t5, 0, 0, 32);
    goto LAB2;

LAB6:    t42 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t31) = (t42 | t43);
    t44 = (t21 + 4);
    t45 = (t30 + 4);
    t46 = *((unsigned int *)t21);
    t47 = (~(t46));
    t48 = *((unsigned int *)t44);
    t49 = (~(t48));
    t50 = *((unsigned int *)t30);
    t51 = (~(t50));
    t52 = *((unsigned int *)t45);
    t53 = (~(t52));
    t54 = (t47 & t49);
    t55 = (t51 & t53);
    t56 = (~(t54));
    t57 = (~(t55));
    t58 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t58 & t56);
    t59 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t59 & t57);
    t60 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t60 & t56);
    t61 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t61 & t57);
    goto LAB8;

LAB9:    *((unsigned int *)t18) = 1;
    goto LAB12;

LAB11:    t68 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB12;

LAB13:    t73 = ((char*)((ng2)));
    goto LAB14;

LAB15:    t78 = ((char*)((ng3)));
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t17, 16, t73, 16, t78, 16);
    goto LAB21;

LAB19:    memcpy(t17, t73, 8);
    goto LAB21;

LAB22:    *((unsigned int *)t17) = 1;
    goto LAB25;

LAB24:    t6 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB25;

LAB26:    t8 = (t0 + 4008);
    t16 = (t8 + 56U);
    t19 = *((char **)t16);
    goto LAB27;

LAB28:    t20 = (t0 + 1528U);
    t22 = *((char **)t20);
    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t5, 32, t19, 32, t22, 32);
    goto LAB34;

LAB32:    memcpy(t5, t19, 8);
    goto LAB34;

}


extern void work_m_00000000003638985130_2403926810_init()
{
	static char *pe[] = {(void *)Always_36_0};
	xsi_register_didat("work_m_00000000003638985130_2403926810", "isim/z_controller_tb_isim_beh.exe.sim/work/m_00000000003638985130_2403926810.didat");
	xsi_register_executes(pe);
}
