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
static const char *ng0 = "C:/Users/ayalbrai/Desktop/proj3/controlLogic.v";
static unsigned int ng1[] = {65535U, 0U};
static unsigned int ng2[] = {0U, 0U};



static void Always_40_0(char *t0)
{
    char t4[8];
    char t5[8];
    char t9[8];
    char t17[8];
    char t60[8];
    char t61[8];
    char t76[8];
    char t77[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;

LAB0:    t1 = (t0 + 4928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 5248);
    *((int *)t2) = 1;
    t3 = (t0 + 4960);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t6 = (t0 + 2648U);
    t7 = *((char **)t6);
    t6 = (t0 + 1048U);
    t8 = *((char **)t6);
    memset(t9, 0, 8);
    t6 = (t9 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 15);
    t13 = (t12 & 1);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 15);
    t16 = (t15 & 1);
    *((unsigned int *)t6) = t16;
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t9);
    t20 = (t18 & t19);
    *((unsigned int *)t17) = t20;
    t21 = (t7 + 4);
    t22 = (t9 + 4);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t21);
    t25 = *((unsigned int *)t22);
    t26 = (t24 | t25);
    *((unsigned int *)t23) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB6;

LAB7:
LAB8:    memset(t5, 0, 8);
    t49 = (t17 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (~(t50));
    t52 = *((unsigned int *)t17);
    t53 = (t52 & t51);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t49) != 0)
        goto LAB11;

LAB12:    t56 = (t5 + 4);
    t57 = *((unsigned int *)t5);
    t58 = *((unsigned int *)t56);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB13;

LAB14:    t72 = *((unsigned int *)t5);
    t73 = (~(t72));
    t74 = *((unsigned int *)t56);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t56) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t5) > 0)
        goto LAB19;

LAB20:    memcpy(t4, t76, 8);

LAB21:    t88 = (t0 + 3848);
    xsi_vlogvar_assign_value(t88, t4, 0, 0, 32);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t2) != 0)
        goto LAB24;

LAB25:    t7 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t16 || t18);
    if (t19 > 0)
        goto LAB26;

LAB27:    t20 = *((unsigned int *)t5);
    t24 = (~(t20));
    t25 = *((unsigned int *)t7);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t7) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t5) > 0)
        goto LAB32;

LAB33:    memcpy(t4, t23, 8);

LAB34:    t22 = (t0 + 4008);
    xsi_vlogvar_assign_value(t22, t4, 0, 0, 32);
    goto LAB2;

LAB6:    t29 = *((unsigned int *)t17);
    t30 = *((unsigned int *)t23);
    *((unsigned int *)t17) = (t29 | t30);
    t31 = (t7 + 4);
    t32 = (t9 + 4);
    t33 = *((unsigned int *)t7);
    t34 = (~(t33));
    t35 = *((unsigned int *)t31);
    t36 = (~(t35));
    t37 = *((unsigned int *)t9);
    t38 = (~(t37));
    t39 = *((unsigned int *)t32);
    t40 = (~(t39));
    t41 = (t34 & t36);
    t42 = (t38 & t40);
    t43 = (~(t41));
    t44 = (~(t42));
    t45 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t45 & t43);
    t46 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t46 & t44);
    t47 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t47 & t43);
    t48 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t48 & t44);
    goto LAB8;

LAB9:    *((unsigned int *)t5) = 1;
    goto LAB12;

LAB11:    t55 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB12;

LAB13:    t62 = (t0 + 1048U);
    t63 = *((char **)t62);
    memset(t61, 0, 8);
    t62 = (t61 + 4);
    t64 = (t63 + 4);
    t65 = *((unsigned int *)t63);
    t66 = (t65 >> 0);
    *((unsigned int *)t61) = t66;
    t67 = *((unsigned int *)t64);
    t68 = (t67 >> 0);
    *((unsigned int *)t62) = t68;
    t69 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t69 & 65535U);
    t70 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t70 & 65535U);
    t71 = ((char*)((ng1)));
    xsi_vlogtype_concat(t60, 32, 32, 2U, t71, 16, t61, 16);
    goto LAB14;

LAB15:    t78 = (t0 + 1048U);
    t79 = *((char **)t78);
    memset(t77, 0, 8);
    t78 = (t77 + 4);
    t80 = (t79 + 4);
    t81 = *((unsigned int *)t79);
    t82 = (t81 >> 0);
    *((unsigned int *)t77) = t82;
    t83 = *((unsigned int *)t80);
    t84 = (t83 >> 0);
    *((unsigned int *)t78) = t84;
    t85 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t85 & 65535U);
    t86 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t86 & 65535U);
    t87 = ((char*)((ng2)));
    xsi_vlogtype_concat(t76, 32, 32, 2U, t87, 16, t77, 16);
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t4, 32, t60, 32, t76, 32);
    goto LAB21;

LAB19:    memcpy(t4, t60, 8);
    goto LAB21;

LAB22:    *((unsigned int *)t5) = 1;
    goto LAB25;

LAB24:    t6 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB25;

LAB26:    t8 = (t0 + 3848);
    t10 = (t8 + 56U);
    t21 = *((char **)t10);
    goto LAB27;

LAB28:    t22 = (t0 + 1528U);
    t23 = *((char **)t22);
    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t4, 32, t21, 32, t23, 32);
    goto LAB34;

LAB32:    memcpy(t4, t21, 8);
    goto LAB34;

}


extern void work_m_00000000003121468021_3295428073_init()
{
	static char *pe[] = {(void *)Always_40_0};
	xsi_register_didat("work_m_00000000003121468021_3295428073", "isim/controlLogic_tb_isim_beh.exe.sim/work/m_00000000003121468021_3295428073.didat");
	xsi_register_executes(pe);
}
