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
static const char *ng0 = "C:/Users/Zachary/Documents/GitHub/CSE320-Project-3/CSE320-Project-3/z_decoder_tb.v";
static unsigned int ng1[] = {270669857U, 0U};



static void Initial_55_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(55, ng0);

LAB2:    xsi_set_current_line(60, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}


extern void work_m_00000000000996771000_1105067566_init()
{
	static char *pe[] = {(void *)Initial_55_0};
	xsi_register_didat("work_m_00000000000996771000_1105067566", "isim/z_decoder_tb_isim_beh.exe.sim/work/m_00000000000996771000_1105067566.didat");
	xsi_register_executes(pe);
}
