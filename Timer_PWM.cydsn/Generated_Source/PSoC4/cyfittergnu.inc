.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu_trm.inc"

/* Timer_1_TimerUDB */
.set Timer_1_TimerUDB_rstSts_stsreg__0__MASK, 0x01
.set Timer_1_TimerUDB_rstSts_stsreg__0__POS, 0
.set Timer_1_TimerUDB_rstSts_stsreg__2__MASK, 0x04
.set Timer_1_TimerUDB_rstSts_stsreg__2__POS, 2
.set Timer_1_TimerUDB_rstSts_stsreg__3__MASK, 0x08
.set Timer_1_TimerUDB_rstSts_stsreg__3__POS, 3
.set Timer_1_TimerUDB_rstSts_stsreg__MASK, 0x0D
.set Timer_1_TimerUDB_rstSts_stsreg__MASK_REG, CYREG_UDB_W8_MSK_03
.set Timer_1_TimerUDB_rstSts_stsreg__MASK_ST_AUX_CTL_REG, CYREG_UDB_CAT16_ACTL_MSK_03
.set Timer_1_TimerUDB_rstSts_stsreg__PER_ST_AUX_CTL_REG, CYREG_UDB_CAT16_ACTL_MSK_03
.set Timer_1_TimerUDB_rstSts_stsreg__STATUS_AUX_CTL_REG, CYREG_UDB_W8_ACTL_03
.set Timer_1_TimerUDB_rstSts_stsreg__STATUS_CNT_REG, CYREG_UDB_CAT16_CTL_ST_03
.set Timer_1_TimerUDB_rstSts_stsreg__STATUS_CONTROL_REG, CYREG_UDB_CAT16_CTL_ST_03
.set Timer_1_TimerUDB_rstSts_stsreg__STATUS_REG, CYREG_UDB_W8_ST_03
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__MASK, 0x80
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__POS, 7
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_AUX_CTL_REG, CYREG_UDB_W8_ACTL_03
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_REG, CYREG_UDB_W8_CTL_03
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_ST_REG, CYREG_UDB_CAT16_CTL_ST_03
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_REG, CYREG_UDB_W8_CTL_03
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_ST_REG, CYREG_UDB_CAT16_CTL_ST_03
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK, 0x80
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK_CTL_AUX_CTL_REG, CYREG_UDB_CAT16_ACTL_MSK_03
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PERIOD_REG, CYREG_UDB_W8_MSK_03
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PER_CTL_AUX_CTL_REG, CYREG_UDB_CAT16_ACTL_MSK_03
.set Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_A0_REG, CYREG_UDB_W16_A0_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_A1_REG, CYREG_UDB_W16_A1_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_D0_REG, CYREG_UDB_W16_D0_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_D1_REG, CYREG_UDB_W16_D1_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_DP_AUX_CTL_REG, CYREG_UDB_W16_ACTL_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_F0_REG, CYREG_UDB_W16_F0_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_F1_REG, CYREG_UDB_W16_F1_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__A0_A1_REG, CYREG_UDB_CAT16_A_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__A0_REG, CYREG_UDB_W8_A0_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__A1_REG, CYREG_UDB_W8_A1_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__D0_D1_REG, CYREG_UDB_CAT16_D_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__D0_REG, CYREG_UDB_W8_D0_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__D1_REG, CYREG_UDB_W8_D1_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__DP_AUX_CTL_REG, CYREG_UDB_W8_ACTL_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__F0_F1_REG, CYREG_UDB_CAT16_F_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__F0_REG, CYREG_UDB_W8_F0_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__F1_REG, CYREG_UDB_W8_F1_02
.set Timer_1_TimerUDB_sT16_timerdp_u1__A0_A1_REG, CYREG_UDB_CAT16_A_03
.set Timer_1_TimerUDB_sT16_timerdp_u1__A0_REG, CYREG_UDB_W8_A0_03
.set Timer_1_TimerUDB_sT16_timerdp_u1__A1_REG, CYREG_UDB_W8_A1_03
.set Timer_1_TimerUDB_sT16_timerdp_u1__D0_D1_REG, CYREG_UDB_CAT16_D_03
.set Timer_1_TimerUDB_sT16_timerdp_u1__D0_REG, CYREG_UDB_W8_D0_03
.set Timer_1_TimerUDB_sT16_timerdp_u1__D1_REG, CYREG_UDB_W8_D1_03
.set Timer_1_TimerUDB_sT16_timerdp_u1__DP_AUX_CTL_REG, CYREG_UDB_W8_ACTL_03
.set Timer_1_TimerUDB_sT16_timerdp_u1__F0_F1_REG, CYREG_UDB_CAT16_F_03
.set Timer_1_TimerUDB_sT16_timerdp_u1__F0_REG, CYREG_UDB_W8_F0_03
.set Timer_1_TimerUDB_sT16_timerdp_u1__F1_REG, CYREG_UDB_W8_F1_03
.set Timer_1_TimerUDB_sT16_timerdp_u1__MSK_DP_AUX_CTL_REG, CYREG_UDB_CAT16_ACTL_MSK_03
.set Timer_1_TimerUDB_sT16_timerdp_u1__PER_DP_AUX_CTL_REG, CYREG_UDB_CAT16_ACTL_MSK_03

/* PWM_1_PWMUDB */
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG, CYREG_UDB_W16_ACTL_01
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG, CYREG_UDB_W16_CTL_01
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG, CYREG_UDB_W16_CTL_01
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG, CYREG_UDB_W16_CTL_01
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG, CYREG_UDB_W16_CTL_01
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG, CYREG_UDB_W16_MSK_01
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG, CYREG_UDB_W16_MSK_01
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG, CYREG_UDB_W16_MSK_01
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG, CYREG_UDB_W16_MSK_01
.set PWM_1_PWMUDB_genblk1_ctrlreg__7__MASK, 0x80
.set PWM_1_PWMUDB_genblk1_ctrlreg__7__POS, 7
.set PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG, CYREG_UDB_W8_ACTL_01
.set PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_REG, CYREG_UDB_W8_CTL_01
.set PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG, CYREG_UDB_CAT16_CTL_ST_01
.set PWM_1_PWMUDB_genblk1_ctrlreg__COUNT_REG, CYREG_UDB_W8_CTL_01
.set PWM_1_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG, CYREG_UDB_CAT16_CTL_ST_01
.set PWM_1_PWMUDB_genblk1_ctrlreg__MASK, 0x80
.set PWM_1_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG, CYREG_UDB_CAT16_ACTL_MSK_01
.set PWM_1_PWMUDB_genblk1_ctrlreg__PERIOD_REG, CYREG_UDB_W8_MSK_01
.set PWM_1_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG, CYREG_UDB_CAT16_ACTL_MSK_01
.set PWM_1_PWMUDB_genblk8_stsreg__0__MASK, 0x01
.set PWM_1_PWMUDB_genblk8_stsreg__0__POS, 0
.set PWM_1_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG, CYREG_UDB_W16_ACTL_01
.set PWM_1_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG, CYREG_UDB_W16_ST_01
.set PWM_1_PWMUDB_genblk8_stsreg__1__MASK, 0x02
.set PWM_1_PWMUDB_genblk8_stsreg__1__POS, 1
.set PWM_1_PWMUDB_genblk8_stsreg__2__MASK, 0x04
.set PWM_1_PWMUDB_genblk8_stsreg__2__POS, 2
.set PWM_1_PWMUDB_genblk8_stsreg__3__MASK, 0x08
.set PWM_1_PWMUDB_genblk8_stsreg__3__POS, 3
.set PWM_1_PWMUDB_genblk8_stsreg__5__MASK, 0x20
.set PWM_1_PWMUDB_genblk8_stsreg__5__POS, 5
.set PWM_1_PWMUDB_genblk8_stsreg__MASK, 0x2F
.set PWM_1_PWMUDB_genblk8_stsreg__MASK_REG, CYREG_UDB_W8_MSK_01
.set PWM_1_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG, CYREG_UDB_CAT16_ACTL_MSK_01
.set PWM_1_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG, CYREG_UDB_CAT16_ACTL_MSK_01
.set PWM_1_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG, CYREG_UDB_W8_ACTL_01
.set PWM_1_PWMUDB_genblk8_stsreg__STATUS_CNT_REG, CYREG_UDB_CAT16_CTL_ST_01
.set PWM_1_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG, CYREG_UDB_CAT16_CTL_ST_01
.set PWM_1_PWMUDB_genblk8_stsreg__STATUS_REG, CYREG_UDB_W8_ST_01
.set PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG, CYREG_UDB_W16_A0_00
.set PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG, CYREG_UDB_W16_A1_00
.set PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG, CYREG_UDB_W16_D0_00
.set PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG, CYREG_UDB_W16_D1_00
.set PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_DP_AUX_CTL_REG, CYREG_UDB_W16_ACTL_00
.set PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG, CYREG_UDB_W16_F0_00
.set PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG, CYREG_UDB_W16_F1_00
.set PWM_1_PWMUDB_sP16_pwmdp_u0__32BIT_A0_REG, CYREG_UDB_W32_A0_00
.set PWM_1_PWMUDB_sP16_pwmdp_u0__32BIT_A1_REG, CYREG_UDB_W32_A1_00
.set PWM_1_PWMUDB_sP16_pwmdp_u0__32BIT_D0_REG, CYREG_UDB_W32_D0_00
.set PWM_1_PWMUDB_sP16_pwmdp_u0__32BIT_D1_REG, CYREG_UDB_W32_D1_00
.set PWM_1_PWMUDB_sP16_pwmdp_u0__32BIT_DP_AUX_CTL_REG, CYREG_UDB_W32_ACTL_00
.set PWM_1_PWMUDB_sP16_pwmdp_u0__32BIT_F0_REG, CYREG_UDB_W32_F0_00
.set PWM_1_PWMUDB_sP16_pwmdp_u0__32BIT_F1_REG, CYREG_UDB_W32_F1_00
.set PWM_1_PWMUDB_sP16_pwmdp_u0__A0_A1_REG, CYREG_UDB_CAT16_A_00
.set PWM_1_PWMUDB_sP16_pwmdp_u0__A0_REG, CYREG_UDB_W8_A0_00
.set PWM_1_PWMUDB_sP16_pwmdp_u0__A1_REG, CYREG_UDB_W8_A1_00
.set PWM_1_PWMUDB_sP16_pwmdp_u0__D0_D1_REG, CYREG_UDB_CAT16_D_00
.set PWM_1_PWMUDB_sP16_pwmdp_u0__D0_REG, CYREG_UDB_W8_D0_00
.set PWM_1_PWMUDB_sP16_pwmdp_u0__D1_REG, CYREG_UDB_W8_D1_00
.set PWM_1_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG, CYREG_UDB_W8_ACTL_00
.set PWM_1_PWMUDB_sP16_pwmdp_u0__F0_F1_REG, CYREG_UDB_CAT16_F_00
.set PWM_1_PWMUDB_sP16_pwmdp_u0__F0_REG, CYREG_UDB_W8_F0_00
.set PWM_1_PWMUDB_sP16_pwmdp_u0__F1_REG, CYREG_UDB_W8_F1_00
.set PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_A0_REG, CYREG_UDB_W16_A0_01
.set PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_A1_REG, CYREG_UDB_W16_A1_01
.set PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_D0_REG, CYREG_UDB_W16_D0_01
.set PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_D1_REG, CYREG_UDB_W16_D1_01
.set PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_DP_AUX_CTL_REG, CYREG_UDB_W16_ACTL_01
.set PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_F0_REG, CYREG_UDB_W16_F0_01
.set PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_F1_REG, CYREG_UDB_W16_F1_01
.set PWM_1_PWMUDB_sP16_pwmdp_u1__A0_A1_REG, CYREG_UDB_CAT16_A_01
.set PWM_1_PWMUDB_sP16_pwmdp_u1__A0_REG, CYREG_UDB_W8_A0_01
.set PWM_1_PWMUDB_sP16_pwmdp_u1__A1_REG, CYREG_UDB_W8_A1_01
.set PWM_1_PWMUDB_sP16_pwmdp_u1__D0_D1_REG, CYREG_UDB_CAT16_D_01
.set PWM_1_PWMUDB_sP16_pwmdp_u1__D0_REG, CYREG_UDB_W8_D0_01
.set PWM_1_PWMUDB_sP16_pwmdp_u1__D1_REG, CYREG_UDB_W8_D1_01
.set PWM_1_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG, CYREG_UDB_W8_ACTL_01
.set PWM_1_PWMUDB_sP16_pwmdp_u1__F0_F1_REG, CYREG_UDB_CAT16_F_01
.set PWM_1_PWMUDB_sP16_pwmdp_u1__F0_REG, CYREG_UDB_W8_F0_01
.set PWM_1_PWMUDB_sP16_pwmdp_u1__F1_REG, CYREG_UDB_W8_F1_01
.set PWM_1_PWMUDB_sP16_pwmdp_u1__MSK_DP_AUX_CTL_REG, CYREG_UDB_CAT16_ACTL_MSK_01
.set PWM_1_PWMUDB_sP16_pwmdp_u1__PER_DP_AUX_CTL_REG, CYREG_UDB_CAT16_ACTL_MSK_01

/* blue_isr */
.set blue_isr__INTC_CLR_EN_REG, CYREG_CM0_ICER
.set blue_isr__INTC_CLR_PD_REG, CYREG_CM0_ICPR
.set blue_isr__INTC_MASK, 0x01
.set blue_isr__INTC_NUMBER, 0
.set blue_isr__INTC_PRIOR_MASK, 0xC0
.set blue_isr__INTC_PRIOR_NUM, 3
.set blue_isr__INTC_PRIOR_REG, CYREG_CM0_IPR0
.set blue_isr__INTC_SET_EN_REG, CYREG_CM0_ISER
.set blue_isr__INTC_SET_PD_REG, CYREG_CM0_ISPR

/* Blue_LED */
.set Blue_LED__0__DM__MASK, 0x7000
.set Blue_LED__0__DM__SHIFT, 12
.set Blue_LED__0__DR, CYREG_PRT1_DR
.set Blue_LED__0__HSIOM, CYREG_HSIOM_PORT_SEL1
.set Blue_LED__0__HSIOM_MASK, 0x000F0000
.set Blue_LED__0__HSIOM_SHIFT, 16
.set Blue_LED__0__INTCFG, CYREG_PRT1_INTCFG
.set Blue_LED__0__INTSTAT, CYREG_PRT1_INTSTAT
.set Blue_LED__0__MASK, 0x10
.set Blue_LED__0__PA__CFG0, CYREG_UDB_PA1_CFG0
.set Blue_LED__0__PA__CFG1, CYREG_UDB_PA1_CFG1
.set Blue_LED__0__PA__CFG10, CYREG_UDB_PA1_CFG10
.set Blue_LED__0__PA__CFG11, CYREG_UDB_PA1_CFG11
.set Blue_LED__0__PA__CFG12, CYREG_UDB_PA1_CFG12
.set Blue_LED__0__PA__CFG13, CYREG_UDB_PA1_CFG13
.set Blue_LED__0__PA__CFG14, CYREG_UDB_PA1_CFG14
.set Blue_LED__0__PA__CFG2, CYREG_UDB_PA1_CFG2
.set Blue_LED__0__PA__CFG3, CYREG_UDB_PA1_CFG3
.set Blue_LED__0__PA__CFG4, CYREG_UDB_PA1_CFG4
.set Blue_LED__0__PA__CFG5, CYREG_UDB_PA1_CFG5
.set Blue_LED__0__PA__CFG6, CYREG_UDB_PA1_CFG6
.set Blue_LED__0__PA__CFG7, CYREG_UDB_PA1_CFG7
.set Blue_LED__0__PA__CFG8, CYREG_UDB_PA1_CFG8
.set Blue_LED__0__PA__CFG9, CYREG_UDB_PA1_CFG9
.set Blue_LED__0__PC, CYREG_PRT1_PC
.set Blue_LED__0__PC2, CYREG_PRT1_PC2
.set Blue_LED__0__PORT, 1
.set Blue_LED__0__PS, CYREG_PRT1_PS
.set Blue_LED__0__SHIFT, 4
.set Blue_LED__DR, CYREG_PRT1_DR
.set Blue_LED__INTCFG, CYREG_PRT1_INTCFG
.set Blue_LED__INTSTAT, CYREG_PRT1_INTSTAT
.set Blue_LED__MASK, 0x10
.set Blue_LED__PA__CFG0, CYREG_UDB_PA1_CFG0
.set Blue_LED__PA__CFG1, CYREG_UDB_PA1_CFG1
.set Blue_LED__PA__CFG10, CYREG_UDB_PA1_CFG10
.set Blue_LED__PA__CFG11, CYREG_UDB_PA1_CFG11
.set Blue_LED__PA__CFG12, CYREG_UDB_PA1_CFG12
.set Blue_LED__PA__CFG13, CYREG_UDB_PA1_CFG13
.set Blue_LED__PA__CFG14, CYREG_UDB_PA1_CFG14
.set Blue_LED__PA__CFG2, CYREG_UDB_PA1_CFG2
.set Blue_LED__PA__CFG3, CYREG_UDB_PA1_CFG3
.set Blue_LED__PA__CFG4, CYREG_UDB_PA1_CFG4
.set Blue_LED__PA__CFG5, CYREG_UDB_PA1_CFG5
.set Blue_LED__PA__CFG6, CYREG_UDB_PA1_CFG6
.set Blue_LED__PA__CFG7, CYREG_UDB_PA1_CFG7
.set Blue_LED__PA__CFG8, CYREG_UDB_PA1_CFG8
.set Blue_LED__PA__CFG9, CYREG_UDB_PA1_CFG9
.set Blue_LED__PC, CYREG_PRT1_PC
.set Blue_LED__PC2, CYREG_PRT1_PC2
.set Blue_LED__PORT, 1
.set Blue_LED__PS, CYREG_PRT1_PS
.set Blue_LED__SHIFT, 4

/* Clock_1 */
.set Clock_1__DIVIDER_MASK, 0x0000FFFF
.set Clock_1__ENABLE, CYREG_CLK_DIVIDER_A00
.set Clock_1__ENABLE_MASK, 0x80000000
.set Clock_1__MASK, 0x80000000
.set Clock_1__REGISTER, CYREG_CLK_DIVIDER_A00

/* red_isr */
.set red_isr__INTC_CLR_EN_REG, CYREG_CM0_ICER
.set red_isr__INTC_CLR_PD_REG, CYREG_CM0_ICPR
.set red_isr__INTC_MASK, 0x08
.set red_isr__INTC_NUMBER, 3
.set red_isr__INTC_PRIOR_MASK, 0xC0000000
.set red_isr__INTC_PRIOR_NUM, 3
.set red_isr__INTC_PRIOR_REG, CYREG_CM0_IPR0
.set red_isr__INTC_SET_EN_REG, CYREG_CM0_ISER
.set red_isr__INTC_SET_PD_REG, CYREG_CM0_ISPR

/* Red_LED */
.set Red_LED__0__DM__MASK, 0x38000
.set Red_LED__0__DM__SHIFT, 15
.set Red_LED__0__DR, CYREG_PRT1_DR
.set Red_LED__0__HSIOM, CYREG_HSIOM_PORT_SEL1
.set Red_LED__0__HSIOM_MASK, 0x00F00000
.set Red_LED__0__HSIOM_SHIFT, 20
.set Red_LED__0__INTCFG, CYREG_PRT1_INTCFG
.set Red_LED__0__INTSTAT, CYREG_PRT1_INTSTAT
.set Red_LED__0__MASK, 0x20
.set Red_LED__0__PA__CFG0, CYREG_UDB_PA1_CFG0
.set Red_LED__0__PA__CFG1, CYREG_UDB_PA1_CFG1
.set Red_LED__0__PA__CFG10, CYREG_UDB_PA1_CFG10
.set Red_LED__0__PA__CFG11, CYREG_UDB_PA1_CFG11
.set Red_LED__0__PA__CFG12, CYREG_UDB_PA1_CFG12
.set Red_LED__0__PA__CFG13, CYREG_UDB_PA1_CFG13
.set Red_LED__0__PA__CFG14, CYREG_UDB_PA1_CFG14
.set Red_LED__0__PA__CFG2, CYREG_UDB_PA1_CFG2
.set Red_LED__0__PA__CFG3, CYREG_UDB_PA1_CFG3
.set Red_LED__0__PA__CFG4, CYREG_UDB_PA1_CFG4
.set Red_LED__0__PA__CFG5, CYREG_UDB_PA1_CFG5
.set Red_LED__0__PA__CFG6, CYREG_UDB_PA1_CFG6
.set Red_LED__0__PA__CFG7, CYREG_UDB_PA1_CFG7
.set Red_LED__0__PA__CFG8, CYREG_UDB_PA1_CFG8
.set Red_LED__0__PA__CFG9, CYREG_UDB_PA1_CFG9
.set Red_LED__0__PC, CYREG_PRT1_PC
.set Red_LED__0__PC2, CYREG_PRT1_PC2
.set Red_LED__0__PORT, 1
.set Red_LED__0__PS, CYREG_PRT1_PS
.set Red_LED__0__SHIFT, 5
.set Red_LED__DR, CYREG_PRT1_DR
.set Red_LED__INTCFG, CYREG_PRT1_INTCFG
.set Red_LED__INTSTAT, CYREG_PRT1_INTSTAT
.set Red_LED__MASK, 0x20
.set Red_LED__PA__CFG0, CYREG_UDB_PA1_CFG0
.set Red_LED__PA__CFG1, CYREG_UDB_PA1_CFG1
.set Red_LED__PA__CFG10, CYREG_UDB_PA1_CFG10
.set Red_LED__PA__CFG11, CYREG_UDB_PA1_CFG11
.set Red_LED__PA__CFG12, CYREG_UDB_PA1_CFG12
.set Red_LED__PA__CFG13, CYREG_UDB_PA1_CFG13
.set Red_LED__PA__CFG14, CYREG_UDB_PA1_CFG14
.set Red_LED__PA__CFG2, CYREG_UDB_PA1_CFG2
.set Red_LED__PA__CFG3, CYREG_UDB_PA1_CFG3
.set Red_LED__PA__CFG4, CYREG_UDB_PA1_CFG4
.set Red_LED__PA__CFG5, CYREG_UDB_PA1_CFG5
.set Red_LED__PA__CFG6, CYREG_UDB_PA1_CFG6
.set Red_LED__PA__CFG7, CYREG_UDB_PA1_CFG7
.set Red_LED__PA__CFG8, CYREG_UDB_PA1_CFG8
.set Red_LED__PA__CFG9, CYREG_UDB_PA1_CFG9
.set Red_LED__PC, CYREG_PRT1_PC
.set Red_LED__PC2, CYREG_PRT1_PC2
.set Red_LED__PORT, 1
.set Red_LED__PS, CYREG_PRT1_PS
.set Red_LED__SHIFT, 5

/* ms_isr */
.set ms_isr__INTC_CLR_EN_REG, CYREG_CM0_ICER
.set ms_isr__INTC_CLR_PD_REG, CYREG_CM0_ICPR
.set ms_isr__INTC_MASK, 0x04
.set ms_isr__INTC_NUMBER, 2
.set ms_isr__INTC_PRIOR_MASK, 0xC00000
.set ms_isr__INTC_PRIOR_NUM, 3
.set ms_isr__INTC_PRIOR_REG, CYREG_CM0_IPR0
.set ms_isr__INTC_SET_EN_REG, CYREG_CM0_ISER
.set ms_isr__INTC_SET_PD_REG, CYREG_CM0_ISPR

/* tc_isr */
.set tc_isr__INTC_CLR_EN_REG, CYREG_CM0_ICER
.set tc_isr__INTC_CLR_PD_REG, CYREG_CM0_ICPR
.set tc_isr__INTC_MASK, 0x10
.set tc_isr__INTC_NUMBER, 4
.set tc_isr__INTC_PRIOR_MASK, 0xC0
.set tc_isr__INTC_PRIOR_NUM, 3
.set tc_isr__INTC_PRIOR_REG, CYREG_CM0_IPR1
.set tc_isr__INTC_SET_EN_REG, CYREG_CM0_ISER
.set tc_isr__INTC_SET_PD_REG, CYREG_CM0_ISPR

/* Miscellaneous */
/* -- WARNING: define names containing LEOPARD or PANTHER are deprecated and will be removed in a future release */
.set CYDEV_DEBUG_PROTECT_OPEN, 1
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_MEMBER_4A, 2
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_DIE_PSOC4A, 2
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_DIE_PSOC4A
.set CYDEV_BCLK__HFCLK__HZ, 24000000
.set CYDEV_BCLK__HFCLK__KHZ, 24000
.set CYDEV_BCLK__HFCLK__MHZ, 24
.set CYDEV_BCLK__SYSCLK__HZ, 24000000
.set CYDEV_BCLK__SYSCLK__KHZ, 24000
.set CYDEV_BCLK__SYSCLK__MHZ, 24
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PANTHER, 3
.set CYDEV_CHIP_DIE_PSOC5LP, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC4
.set CYDEV_CHIP_JTAG_ID, 0x04C81193
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 4
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_4A
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_4A_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REV_PSOC4A_PRODUCTION
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PANTHER_ES0, 0
.set CYDEV_CHIP_REV_PANTHER_ES1, 1
.set CYDEV_CHIP_REV_PANTHER_PRODUCTION, 1
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_CONFIG_READ_ACCELERATOR, 1
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUG_PROTECT, CYDEV_DEBUG_PROTECT_OPEN
.set CYDEV_DEBUG_PROTECT_KILL, 4
.set CYDEV_DEBUG_PROTECT_PROTECTED, 2
.set CYDEV_HEAP_SIZE, 0x0100
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_STACK_SIZE, 0x0400
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 1
.set CYDEV_VDDA_MV, 3300
.set CYDEV_VDDD_MV, 3300
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif
