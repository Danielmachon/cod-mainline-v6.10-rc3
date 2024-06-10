/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright 2016-2017 Google, Inc
 *
 * Fairchild FUSB302 Type-C Chip Driver
 */

#ifndef FUSB302_REG_H
#define FUSB302_REG_H

#define FUSB_REG_DEVICE_ID			0x01
#define FUSB_REG_SWITCHES0			0x02
#define FUSB_REG_SWITCHES0_CC2_PU_EN		BIT(7)
#define FUSB_REG_SWITCHES0_CC1_PU_EN		BIT(6)
#define FUSB_REG_SWITCHES0_VCONN_CC2		BIT(5)
#define FUSB_REG_SWITCHES0_VCONN_CC1		BIT(4)
#define FUSB_REG_SWITCHES0_MEAS_CC2		BIT(3)
#define FUSB_REG_SWITCHES0_MEAS_CC1		BIT(2)
#define FUSB_REG_SWITCHES0_CC2_PD_EN		BIT(1)
#define FUSB_REG_SWITCHES0_CC1_PD_EN		BIT(0)
#define FUSB_REG_SWITCHES1			0x03
#define FUSB_REG_SWITCHES1_POWERROLE		BIT(7)
#define FUSB_REG_SWITCHES1_SPECREV1		BIT(6)
#define FUSB_REG_SWITCHES1_SPECREV0		BIT(5)
#define FUSB_REG_SWITCHES1_DATAROLE		BIT(4)
#define FUSB_REG_SWITCHES1_AUTO_GCRC		BIT(2)
#define FUSB_REG_SWITCHES1_TXCC2_EN		BIT(1)
#define FUSB_REG_SWITCHES1_TXCC1_EN		BIT(0)
#define FUSB_REG_MEASURE			0x04
#define FUSB_REG_MEASURE_MDAC5			BIT(7)
#define FUSB_REG_MEASURE_MDAC4			BIT(6)
#define FUSB_REG_MEASURE_MDAC3			BIT(5)
#define FUSB_REG_MEASURE_MDAC2			BIT(4)
#define FUSB_REG_MEASURE_MDAC1			BIT(3)
#define FUSB_REG_MEASURE_MDAC0			BIT(2)
#define FUSB_REG_MEASURE_VBUS			BIT(1)
#define FUSB_REG_MEASURE_XXXX5			BIT(0)
#define FUSB_REG_CONTROL0			0x06
#define FUSB_REG_CONTROL0_TX_FLUSH		BIT(6)
#define FUSB_REG_CONTROL0_INT_MASK		BIT(5)
#define FUSB_REG_CONTROL0_HOST_CUR_MASK		(0xC)
#define FUSB_REG_CONTROL0_HOST_CUR_HIGH		(0xC)
#define FUSB_REG_CONTROL0_HOST_CUR_MED		(0x8)
#define FUSB_REG_CONTROL0_HOST_CUR_DEF		(0x4)
#define FUSB_REG_CONTROL0_TX_START		BIT(0)
#define FUSB_REG_CONTROL1			0x07
#define FUSB_REG_CONTROL1_ENSOP2DB		BIT(6)
#define FUSB_REG_CONTROL1_ENSOP1DB		BIT(5)
#define FUSB_REG_CONTROL1_BIST_MODE2		BIT(4)
#define FUSB_REG_CONTROL1_RX_FLUSH		BIT(2)
#define FUSB_REG_CONTROL1_ENSOP2		BIT(1)
#define FUSB_REG_CONTROL1_ENSOP1		BIT(0)
#define FUSB_REG_CONTROL2			0x08
#define FUSB_REG_CONTROL2_MODE			BIT(1)
#define FUSB_REG_CONTROL2_MODE_MASK		(0x6)
#define FUSB_REG_CONTROL2_MODE_DFP		(0x6)
#define FUSB_REG_CONTROL2_MODE_UFP		(0x4)
#define FUSB_REG_CONTROL2_MODE_DRP		(0x2)
#define FUSB_REG_CONTROL2_MODE_NONE		(0x0)
#define FUSB_REG_CONTROL2_TOGGLE		BIT(0)
#define FUSB_REG_CONTROL3			0x09
#define FUSB_REG_CONTROL3_SEND_HARDRESET	BIT(6)
#define FUSB_REG_CONTROL3_BIST_TMODE		BIT(5)	/* 302B Only */
#define FUSB_REG_CONTROL3_AUTO_HARDRESET	BIT(4)
#define FUSB_REG_CONTROL3_AUTO_SOFTRESET	BIT(3)
#define FUSB_REG_CONTROL3_N_RETRIES		BIT(1)
#define FUSB_REG_CONTROL3_N_RETRIES_MASK	(0x6)
#define FUSB_REG_CONTROL3_N_RETRIES_3		(0x6)
#define FUSB_REG_CONTROL3_N_RETRIES_2		(0x4)
#define FUSB_REG_CONTROL3_N_RETRIES_1		(0x2)
#define FUSB_REG_CONTROL3_AUTO_RETRY		BIT(0)
#define FUSB_REG_MASK				0x0A
#define FUSB_REG_MASK_VBUSOK			BIT(7)
#define FUSB_REG_MASK_ACTIVITY			BIT(6)
#define FUSB_REG_MASK_COMP_CHNG			BIT(5)
#define FUSB_REG_MASK_CRC_CHK			BIT(4)
#define FUSB_REG_MASK_ALERT			BIT(3)
#define FUSB_REG_MASK_WAKE			BIT(2)
#define FUSB_REG_MASK_COLLISION			BIT(1)
#define FUSB_REG_MASK_BC_LVL			BIT(0)
#define FUSB_REG_POWER				0x0B
#define FUSB_REG_POWER_PWR			BIT(0)
#define FUSB_REG_POWER_PWR_LOW			0x1
#define FUSB_REG_POWER_PWR_MEDIUM		0x3
#define FUSB_REG_POWER_PWR_HIGH			0x7
#define FUSB_REG_POWER_PWR_ALL			0xF
#define FUSB_REG_RESET				0x0C
#define FUSB_REG_RESET_PD_RESET			BIT(1)
#define FUSB_REG_RESET_SW_RESET			BIT(0)
#define FUSB_REG_MASKA				0x0E
#define FUSB_REG_MASKA_OCP_TEMP			BIT(7)
#define FUSB_REG_MASKA_TOGDONE			BIT(6)
#define FUSB_REG_MASKA_SOFTFAIL			BIT(5)
#define FUSB_REG_MASKA_RETRYFAIL		BIT(4)
#define FUSB_REG_MASKA_HARDSENT			BIT(3)
#define FUSB_REG_MASKA_TX_SUCCESS		BIT(2)
#define FUSB_REG_MASKA_SOFTRESET		BIT(1)
#define FUSB_REG_MASKA_HARDRESET		BIT(0)
#define FUSB_REG_MASKB				0x0F
#define FUSB_REG_MASKB_GCRCSENT			BIT(0)
#define FUSB_REG_STATUS0A			0x3C
#define FUSB_REG_STATUS0A_SOFTFAIL		BIT(5)
#define FUSB_REG_STATUS0A_RETRYFAIL		BIT(4)
#define FUSB_REG_STATUS0A_POWER			BIT(2)
#define FUSB_REG_STATUS0A_RX_SOFT_RESET		BIT(1)
#define FUSB_REG_STATUS0A_RX_HARD_RESET		BIT(0)
#define FUSB_REG_STATUS1A			0x3D
#define FUSB_REG_STATUS1A_TOGSS			BIT(3)
#define FUSB_REG_STATUS1A_TOGSS_RUNNING		0x0
#define FUSB_REG_STATUS1A_TOGSS_SRC1		0x1
#define FUSB_REG_STATUS1A_TOGSS_SRC2		0x2
#define FUSB_REG_STATUS1A_TOGSS_SNK1		0x5
#define FUSB_REG_STATUS1A_TOGSS_SNK2		0x6
#define FUSB_REG_STATUS1A_TOGSS_AA		0x7
#define FUSB_REG_STATUS1A_TOGSS_POS		(3)
#define FUSB_REG_STATUS1A_TOGSS_MASK		(0x7)
#define FUSB_REG_STATUS1A_RXSOP2DB		BIT(2)
#define FUSB_REG_STATUS1A_RXSOP1DB		BIT(1)
#define FUSB_REG_STATUS1A_RXSOP			BIT(0)
#define FUSB_REG_INTERRUPTA			0x3E
#define FUSB_REG_INTERRUPTA_OCP_TEMP		BIT(7)
#define FUSB_REG_INTERRUPTA_TOGDONE		BIT(6)
#define FUSB_REG_INTERRUPTA_SOFTFAIL		BIT(5)
#define FUSB_REG_INTERRUPTA_RETRYFAIL		BIT(4)
#define FUSB_REG_INTERRUPTA_HARDSENT		BIT(3)
#define FUSB_REG_INTERRUPTA_TX_SUCCESS		BIT(2)
#define FUSB_REG_INTERRUPTA_SOFTRESET		BIT(1)
#define FUSB_REG_INTERRUPTA_HARDRESET		BIT(0)
#define FUSB_REG_INTERRUPTB			0x3F
#define FUSB_REG_INTERRUPTB_GCRCSENT		BIT(0)
#define FUSB_REG_STATUS0			0x40
#define FUSB_REG_STATUS0_VBUSOK			BIT(7)
#define FUSB_REG_STATUS0_ACTIVITY		BIT(6)
#define FUSB_REG_STATUS0_COMP			BIT(5)
#define FUSB_REG_STATUS0_CRC_CHK		BIT(4)
#define FUSB_REG_STATUS0_ALERT			BIT(3)
#define FUSB_REG_STATUS0_WAKE			BIT(2)
#define FUSB_REG_STATUS0_BC_LVL_MASK		0x03
#define FUSB_REG_STATUS0_BC_LVL_0_200		0x0
#define FUSB_REG_STATUS0_BC_LVL_200_600		0x1
#define FUSB_REG_STATUS0_BC_LVL_600_1230	0x2
#define FUSB_REG_STATUS0_BC_LVL_1230_MAX	0x3
#define FUSB_REG_STATUS0_BC_LVL1		BIT(1)
#define FUSB_REG_STATUS0_BC_LVL0		BIT(0)
#define FUSB_REG_STATUS1			0x41
#define FUSB_REG_STATUS1_RXSOP2			BIT(7)
#define FUSB_REG_STATUS1_RXSOP1			BIT(6)
#define FUSB_REG_STATUS1_RX_EMPTY		BIT(5)
#define FUSB_REG_STATUS1_RX_FULL		BIT(4)
#define FUSB_REG_STATUS1_TX_EMPTY		BIT(3)
#define FUSB_REG_STATUS1_TX_FULL		BIT(2)
#define FUSB_REG_INTERRUPT			0x42
#define FUSB_REG_INTERRUPT_VBUSOK		BIT(7)
#define FUSB_REG_INTERRUPT_ACTIVITY		BIT(6)
#define FUSB_REG_INTERRUPT_COMP_CHNG		BIT(5)
#define FUSB_REG_INTERRUPT_CRC_CHK		BIT(4)
#define FUSB_REG_INTERRUPT_ALERT		BIT(3)
#define FUSB_REG_INTERRUPT_WAKE			BIT(2)
#define FUSB_REG_INTERRUPT_COLLISION		BIT(1)
#define FUSB_REG_INTERRUPT_BC_LVL		BIT(0)
#define FUSB_REG_FIFOS				0x43

/* Tokens defined for the FUSB302 TX FIFO */
enum fusb302_txfifo_tokens {
	FUSB302_TKN_TXON = 0xA1,
	FUSB302_TKN_SYNC1 = 0x12,
	FUSB302_TKN_SYNC2 = 0x13,
	FUSB302_TKN_SYNC3 = 0x1B,
	FUSB302_TKN_RST1 = 0x15,
	FUSB302_TKN_RST2 = 0x16,
	FUSB302_TKN_PACKSYM = 0x80,
	FUSB302_TKN_JAMCRC = 0xFF,
	FUSB302_TKN_EOP = 0x14,
	FUSB302_TKN_TXOFF = 0xFE,
};

#endif
