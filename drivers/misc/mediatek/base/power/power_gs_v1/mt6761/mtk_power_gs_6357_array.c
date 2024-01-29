// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (c) 2015 MediaTek Inc.
 */


/* This file is generated by GenLP_setting.pl v1.5.7 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

const unsigned int AP_PMIC_REG_gs_sodi3p0_32kless_data[] = {
		// Address	Mask	Golden Setting Value
		0x1A, 0xA, 0xA,// TOP_CON
		0x1E, 0x1F00, 0x1F00,// TEST_CON0
		0x2A, 0x1, 0x1,// SMT_CON0
		0x10C, 0x18, 0x18,// TOP_CKPDN_CON0
		0x112, 0x4, 0x4,// TOP_CKPDN_CON1
		0x118, 0x8, 0x8,// TOP_CKSEL_CON0
		0x134, 0xABE0, 0x3A0,// TOP_CLK_CON0
		0x408, 0x1, 0x1,// RG_SPI_CON0
		0x514, 0xFF, 0x7F,// SCK_TOP_CKPDN_CON0
		0x788, 0x3FFF, 0x6D1,// DCXO_CW00
		0x790, 0x1, 0x0,// DCXO_CW02
		0x792, 0x2, 0x2,// DCXO_CW03
		0x7A2, 0x3F00, 0x1B00,// DCXO_CW11
		0x7AC, 0x1000, 0x1000,// DCXO_CW14
		0x7B0, 0x3CFF, 0x1455,// DCXO_CW16
		0xC0C, 0x41C, 0x4,// BM_TOP_CKPDN_CON0
		0xD08, 0x100, 0x0,// FGADC_CON0
		0xF8C, 0x3FF, 0xAA,// HK_TOP_CLK_CON0
		0xF8E, 0x1, 0x0,// HK_TOP_CLK_CON1
		0x1120, 0xE03F, 0x14,// AUXADC_CON0
		0x1190, 0x2000, 0x0,// AUXADC_LBAT3
		0x1192, 0x2000, 0x0,// AUXADC_LBAT4
		0x119E, 0x8000, 0x0,// AUXADC_IMP1
		0x1208, 0x8000, 0x8000,// AUXADC_MDRT_0
		0x1212, 0x8000, 0x0,// AUXADC_DCXO_MDRT_0
		0x1218, 0x3F9, 0x51,// AUXADC_NAG_0
		0x122E, 0x1, 0x0,// AUXADC_IMP_CG0
		0x1230, 0x1, 0x0,// AUXADC_LBAT_CG0
		0x1232, 0x1, 0x0,// AUXADC_NAG_CG0
		0x140C, 0x1F, 0x0,// BUCK_TOP_CLK_CON0
		0x1412, 0xF, 0xF,// BUCK_TOP_CLK_HWEN_CON0
		0x1436, 0x100, 0x0,// BUCK_TOP_K_CON0
		0x1488, 0x3, 0x0,// BUCK_VPROC_CON0
		0x1510, 0x2, 0x2,// BUCK_VCORE_OP_EN
		0x1516, 0x2, 0x2,// BUCK_VCORE_OP_CFG
		0x1590, 0x2, 0x2,// BUCK_VMODEM_OP_EN
		0x1596, 0x2, 0x2,// BUCK_VMODEM_OP_CFG
		0x1610, 0x2, 0x2,// BUCK_VS1_OP_EN
		0x1616, 0x2, 0x2,// BUCK_VS1_OP_CFG
		0x1688, 0x1, 0x0,// BUCK_VPA_CON0
		0x188C, 0x1, 0x1,// LDO_TOP_CLK_DCM_CON0
		0x188E, 0x1, 0x0,// LDO_TOP_CLK_VIO28_CON0
		0x1890, 0x1, 0x0,// LDO_TOP_CLK_VIO18_CON0
		0x1892, 0x1, 0x0,// LDO_TOP_CLK_VAUD28_CON0
		0x1894, 0x1, 0x0,// LDO_TOP_CLK_VDRAM_CON0
		0x1896, 0x1, 0x0,// LDO_TOP_CLK_VSRAM_PROC_CON0
		0x1898, 0x1, 0x0,// LDO_TOP_CLK_VSRAM_OTHERS_CON0
		0x189A, 0x1, 0x0,// LDO_TOP_CLK_VAUX18_CON0
		0x189C, 0x1, 0x0,// LDO_TOP_CLK_VUSB33_CON0
		0x189E, 0x1, 0x0,// LDO_TOP_CLK_VEMC_CON0
		0x18A0, 0x1, 0x0,// LDO_TOP_CLK_VXO22_CON0
		0x18A2, 0x1, 0x0,// LDO_TOP_CLK_VSIM1_CON0
		0x18A4, 0x1, 0x0,// LDO_TOP_CLK_VSIM2_CON0
		0x18A6, 0x1, 0x0,// LDO_TOP_CLK_VCAMD_CON0
		0x18A8, 0x1, 0x0,// LDO_TOP_CLK_VCAMIO_CON0
		0x18AA, 0x1, 0x0,// LDO_TOP_CLK_VEFUSE_CON0
		0x18AC, 0x1, 0x0,// LDO_TOP_CLK_VCN33_CON0
		0x18AE, 0x1, 0x0,// LDO_TOP_CLK_VCN18_CON0
		0x18B0, 0x1, 0x0,// LDO_TOP_CLK_VCN28_CON0
		0x18B2, 0x1, 0x0,// LDO_TOP_CLK_VIBR_CON0
		0x18B4, 0x1, 0x0,// LDO_TOP_CLK_VFE28_CON0
		0x18B6, 0x1, 0x0,// LDO_TOP_CLK_VMCH_CON0
		0x18B8, 0x1, 0x0,// LDO_TOP_CLK_VMC_CON0
		0x18BA, 0x1, 0x0,// LDO_TOP_CLK_VRF18_CON0
		0x18BC, 0x1, 0x0,// LDO_TOP_CLK_VLDO28_CON0
		0x18BE, 0x1, 0x0,// LDO_TOP_CLK_VRF12_CON0
		0x18C0, 0x1, 0x0,// LDO_TOP_CLK_VCAMA_CON0
		0x18C2, 0x1, 0x0,// LDO_TOP_CLK_TREF_CON0
		0x190A, 0x2, 0x2,// LDO_VXO22_OP_EN
		0x1910, 0x2, 0x2,// LDO_VXO22_OP_CFG
		0x191E, 0x2, 0x2,// LDO_VAUX18_OP_EN
		0x1924, 0x2, 0x2,// LDO_VAUX18_OP_CFG
		0x1932, 0x2, 0x2,// LDO_VAUD28_OP_EN
		0x1938, 0x2, 0x2,// LDO_VAUD28_OP_CFG
		0x1946, 0x2, 0x2,// LDO_VIO28_OP_EN
		0x194C, 0x2, 0x2,// LDO_VIO28_OP_CFG
		0x195A, 0x2, 0x2,// LDO_VIO18_OP_EN
		0x1960, 0x2, 0x2,// LDO_VIO18_OP_CFG
		0x196E, 0x2, 0x2,// LDO_VDRAM_OP_EN
		0x1974, 0x2, 0x2,// LDO_VDRAM_OP_CFG
		0x1988, 0x1, 0x0,// LDO_VEMC_CON0
		0x199E, 0x2, 0x2,// LDO_VUSB33_OP_EN
		0x19A4, 0x2, 0x2,// LDO_VUSB33_OP_CFG
		0x19B2, 0x1, 0x0,// LDO_VSRAM_PROC_CON0
		0x19D0, 0x1, 0x1,// LDO_VSRAM_OTHERS_CON0
		0x1A0A, 0x4, 0x4,// LDO_VFE28_OP_EN
		0x1A10, 0x4, 0x0,// LDO_VFE28_OP_CFG
		0x1A1E, 0x4, 0x4,// LDO_VRF18_OP_EN
		0x1A24, 0x4, 0x0,// LDO_VRF18_OP_CFG
		0x1A32, 0x4, 0x4,// LDO_VRF12_OP_EN
		0x1A38, 0x4, 0x0,// LDO_VRF12_OP_CFG
		0x1A44, 0x1, 0x0,// LDO_VEFUSE_CON0
		0x1A58, 0x1, 0x0,// LDO_VCN18_CON0
		0x1A6C, 0x1, 0x0,// LDO_VCAMA_CON0
		0x1A88, 0x1, 0x0,// LDO_VCAMD_CON0
		0x1A9C, 0x1, 0x0,// LDO_VCAMIO_CON0
		0x1AB0, 0x1, 0x0,// LDO_VMC_CON0
		0x1AC4, 0x1, 0x0,// LDO_VMCH_CON0
		0x1AD8, 0x1, 0x0,// LDO_VSIM1_CON0
		0x1AEC, 0x1, 0x0,// LDO_VSIM2_CON0
		0x1B08, 0x1, 0x0,// LDO_VIBR_CON0
		0x1B1C, 0x1, 0x0,// LDO_VCN33_CON0_0
		0x1B2A, 0x1, 0x0,// LDO_VCN33_CON0_1
		0x1B32, 0x1, 0x1,// LDO_VLDO28_CON0_0
		0x1B40, 0x1, 0x1,// LDO_VLDO28_CON0_1
		0x1B88, 0x1, 0x0,// LDO_VCN28_CON0
		0x1B9C, 0x2, 0x2,// VRTC_CON0
		0x1B9E, 0x1, 0x0,// LDO_TREF_CON0
		0x1E10, 0x3F, 0x1F,// XPP_TOP_CKPDN_CON0
		0x208C, 0x67, 0x66,// AUD_TOP_CKPDN_CON0
		0x2112, 0xEF, 0xEF,// AUDIO_TOP_CON0
		0x2146, 0x2, 0x2,// AFE_DCCLK_CFG0
};

const unsigned int *AP_PMIC_REG_gs_sodi3p0_32kless =
		AP_PMIC_REG_gs_sodi3p0_32kless_data;

unsigned int AP_PMIC_REG_gs_sodi3p0_32kless_len = 336;

const unsigned int AP_PMIC_REG_gs_suspend_32kless_data[] = {
		// Address	Mask	Golden Setting Value
	   0x1A, 0xA, 0xA,// TOP_CON
	   0x1E, 0x1F00, 0x1F00,// TEST_CON0
	   0x2A, 0x1, 0x1,// SMT_CON0
	   0x10C, 0x18, 0x18,// TOP_CKPDN_CON0
	   0x112, 0x4, 0x4,// TOP_CKPDN_CON1
	   0x118, 0x8, 0x8,// TOP_CKSEL_CON0
	   0x134, 0xABE0, 0x3A0,// TOP_CLK_CON0
	   0x408, 0x1, 0x1,// RG_SPI_CON0
	   0x514, 0xFF, 0x7F,// SCK_TOP_CKPDN_CON0
	   0x788, 0x3FFF, 0x6D1,// DCXO_CW00
	   0x790, 0x1, 0x0,// DCXO_CW02
	   0x792, 0x2, 0x2,// DCXO_CW03
	   0x7A2, 0x3F00, 0x1B00,// DCXO_CW11
	   0x7AC, 0x1000, 0x1000,// DCXO_CW14
	   0x7B0, 0x3CFF, 0x1455,// DCXO_CW16
	   0xC0C, 0x41C, 0x4,// BM_TOP_CKPDN_CON0
	   0xD08, 0x100, 0x0,// FGADC_CON0
	   0xF8C, 0x3FF, 0xAA,// HK_TOP_CLK_CON0
	   0xF8E, 0x1, 0x0,// HK_TOP_CLK_CON1
	   0x1120, 0xE03F, 0x14,// AUXADC_CON0
	   0x1190, 0x2000, 0x0,// AUXADC_LBAT3
	   0x1192, 0x2000, 0x0,// AUXADC_LBAT4
	   0x119E, 0x8000, 0x0,// AUXADC_IMP1
	   0x1208, 0x8000, 0x8000,// AUXADC_MDRT_0
	   0x1212, 0x8000, 0x0,// AUXADC_DCXO_MDRT_0
	   0x1218, 0x3F9, 0x51,// AUXADC_NAG_0
	   0x122E, 0x1, 0x0,// AUXADC_IMP_CG0
	   0x1230, 0x1, 0x0,// AUXADC_LBAT_CG0
	   0x1232, 0x1, 0x0,// AUXADC_NAG_CG0
	   0x140C, 0x1F, 0x0,// BUCK_TOP_CLK_CON0
	   0x1412, 0xF, 0xF,// BUCK_TOP_CLK_HWEN_CON0
	   0x1436, 0x100, 0x0,// BUCK_TOP_K_CON0
	   0x1488, 0x3, 0x0,// BUCK_VPROC_CON0
	   0x1510, 0x2, 0x2,// BUCK_VCORE_OP_EN
	   0x1516, 0x2, 0x2,// BUCK_VCORE_OP_CFG
	   0x1590, 0x2, 0x2,// BUCK_VMODEM_OP_EN
	   0x1596, 0x2, 0x2,// BUCK_VMODEM_OP_CFG
	   0x1610, 0x2, 0x2,// BUCK_VS1_OP_EN
	   0x1616, 0x2, 0x2,// BUCK_VS1_OP_CFG
	   0x1688, 0x1, 0x0,// BUCK_VPA_CON0
	   0x188C, 0x1, 0x1,// LDO_TOP_CLK_DCM_CON0
	   0x188E, 0x1, 0x0,// LDO_TOP_CLK_VIO28_CON0
	   0x1890, 0x1, 0x0,// LDO_TOP_CLK_VIO18_CON0
	   0x1892, 0x1, 0x0,// LDO_TOP_CLK_VAUD28_CON0
	   0x1894, 0x1, 0x0,// LDO_TOP_CLK_VDRAM_CON0
	   0x1896, 0x1, 0x0,// LDO_TOP_CLK_VSRAM_PROC_CON0
	   0x1898, 0x1, 0x0,// LDO_TOP_CLK_VSRAM_OTHERS_CON0
	   0x189A, 0x1, 0x0,// LDO_TOP_CLK_VAUX18_CON0
	   0x189C, 0x1, 0x0,// LDO_TOP_CLK_VUSB33_CON0
	   0x189E, 0x1, 0x0,// LDO_TOP_CLK_VEMC_CON0
	   0x18A0, 0x1, 0x0,// LDO_TOP_CLK_VXO22_CON0
	   0x18A2, 0x1, 0x0,// LDO_TOP_CLK_VSIM1_CON0
	   0x18A4, 0x1, 0x0,// LDO_TOP_CLK_VSIM2_CON0
	   0x18A6, 0x1, 0x0,// LDO_TOP_CLK_VCAMD_CON0
	   0x18A8, 0x1, 0x0,// LDO_TOP_CLK_VCAMIO_CON0
	   0x18AA, 0x1, 0x0,// LDO_TOP_CLK_VEFUSE_CON0
	   0x18AC, 0x1, 0x0,// LDO_TOP_CLK_VCN33_CON0
	   0x18AE, 0x1, 0x0,// LDO_TOP_CLK_VCN18_CON0
	   0x18B0, 0x1, 0x0,// LDO_TOP_CLK_VCN28_CON0
	   0x18B2, 0x1, 0x0,// LDO_TOP_CLK_VIBR_CON0
	   0x18B4, 0x1, 0x0,// LDO_TOP_CLK_VFE28_CON0
	   0x18B6, 0x1, 0x0,// LDO_TOP_CLK_VMCH_CON0
	   0x18B8, 0x1, 0x0,// LDO_TOP_CLK_VMC_CON0
	   0x18BA, 0x1, 0x0,// LDO_TOP_CLK_VRF18_CON0
	   0x18BC, 0x1, 0x0,// LDO_TOP_CLK_VLDO28_CON0
	   0x18BE, 0x1, 0x0,// LDO_TOP_CLK_VRF12_CON0
	   0x18C0, 0x1, 0x0,// LDO_TOP_CLK_VCAMA_CON0
	   0x18C2, 0x1, 0x0,// LDO_TOP_CLK_TREF_CON0
	   0x190A, 0x2, 0x2,// LDO_VXO22_OP_EN
	   0x1910, 0x2, 0x2,// LDO_VXO22_OP_CFG
	   0x191E, 0x2, 0x2,// LDO_VAUX18_OP_EN
	   0x1924, 0x2, 0x2,// LDO_VAUX18_OP_CFG
	   0x1932, 0x2, 0x2,// LDO_VAUD28_OP_EN
	   0x1938, 0x2, 0x2,// LDO_VAUD28_OP_CFG
	   0x1946, 0x2, 0x2,// LDO_VIO28_OP_EN
	   0x194C, 0x2, 0x2,// LDO_VIO28_OP_CFG
	   0x195A, 0x2, 0x2,// LDO_VIO18_OP_EN
	   0x1960, 0x2, 0x2,// LDO_VIO18_OP_CFG
	   0x196E, 0x2, 0x2,// LDO_VDRAM_OP_EN
	   0x1974, 0x2, 0x2,// LDO_VDRAM_OP_CFG
	   0x1988, 0x1, 0x0,// LDO_VEMC_CON0
	   0x199E, 0x2, 0x2,// LDO_VUSB33_OP_EN
	   0x19A4, 0x2, 0x2,// LDO_VUSB33_OP_CFG
	   0x19B2, 0x1, 0x0,// LDO_VSRAM_PROC_CON0
	   0x19D8, 0x2, 0x2,// LDO_VSRAM_OTHERS_OP_EN
	   0x19DE, 0x2, 0x2,// LDO_VSRAM_OTHERS_OP_CFG
	   0x1A0A, 0x4, 0x4,// LDO_VFE28_OP_EN
	   0x1A10, 0x4, 0x0,// LDO_VFE28_OP_CFG
	   0x1A1E, 0x4, 0x4,// LDO_VRF18_OP_EN
	   0x1A24, 0x4, 0x0,// LDO_VRF18_OP_CFG
	   0x1A32, 0x4, 0x4,// LDO_VRF12_OP_EN
	   0x1A38, 0x4, 0x0,// LDO_VRF12_OP_CFG
	   0x1A44, 0x1, 0x0,// LDO_VEFUSE_CON0
	   0x1A58, 0x1, 0x0,// LDO_VCN18_CON0
	   0x1A6C, 0x1, 0x0,// LDO_VCAMA_CON0
	   0x1A88, 0x1, 0x0,// LDO_VCAMD_CON0
	   0x1A9C, 0x1, 0x0,// LDO_VCAMIO_CON0
	   0x1AB0, 0x1, 0x0,// LDO_VMC_CON0
	   0x1AC4, 0x1, 0x0,// LDO_VMCH_CON0
	   0x1AD8, 0x1, 0x0,// LDO_VSIM1_CON0
	   0x1AEC, 0x1, 0x0,// LDO_VSIM2_CON0
	   0x1B08, 0x1, 0x0,// LDO_VIBR_CON0
	   0x1B1C, 0x1, 0x0,// LDO_VCN33_CON0_0
	   0x1B2A, 0x1, 0x0,// LDO_VCN33_CON0_1
	   0x1B34, 0x2, 0x2,// LDO_VLDO28_OP_EN
	   0x1B3A, 0x2, 0x2,// LDO_VLDO28_OP_CFG
	   0x1B88, 0x1, 0x0,// LDO_VCN28_CON0
	   0x1B9C, 0x2, 0x2,// VRTC_CON0
	   0x1B9E, 0x1, 0x0,// LDO_TREF_CON0
	   0x1E10, 0x3F, 0x1F,// XPP_TOP_CKPDN_CON0
	   0x208C, 0x67, 0x66,// AUD_TOP_CKPDN_CON0
	   0x2112, 0xEF, 0xEF,// AUDIO_TOP_CON0
	   0x2146, 0x2, 0x2,// AFE_DCCLK_CFG0
};

const unsigned int *AP_PMIC_REG_gs_suspend_32kless =
		AP_PMIC_REG_gs_suspend_32kless_data;

unsigned int AP_PMIC_REG_gs_suspend_32kless_len = 339;

const unsigned int AP_PMIC_REG_gs_deepidle___lp_mp3_32kless_data[] = {
	// Address	Mask	Golden Setting Value
	   0x1A, 0xA, 0xA,// TOP_CON
	   0x1E, 0x1F00, 0x1F00,// TEST_CON0
	   0x2A, 0x1, 0x1,// SMT_CON0
	   0x10C, 0x18, 0x18,// TOP_CKPDN_CON0
	   0x112, 0x4, 0x4,// TOP_CKPDN_CON1
	   0x118, 0x8, 0x8,// TOP_CKSEL_CON0
	   0x134, 0xABE0, 0x3A0,// TOP_CLK_CON0
	   0x408, 0x1, 0x1,// RG_SPI_CON0
	   0x514, 0xFF, 0x7F,// SCK_TOP_CKPDN_CON0
	   0x788, 0x3FFF, 0x16D1,// DCXO_CW00
	   0x790, 0x1, 0x0,// DCXO_CW02
	   0x792, 0x2, 0x2,// DCXO_CW03
	   0x7A2, 0x3F00, 0x1B00,// DCXO_CW11
	   0x7AC, 0x1000, 0x1000,// DCXO_CW14
	   0x7B0, 0x3CFF, 0x1455,// DCXO_CW16
	   0xC0C, 0x41C, 0x4,// BM_TOP_CKPDN_CON0
	   0xD08, 0x100, 0x0,// FGADC_CON0
	   0xF8C, 0x3FF, 0xAA,// HK_TOP_CLK_CON0
	   0xF8E, 0x1, 0x0,// HK_TOP_CLK_CON1
	   0x1120, 0xE03F, 0x14,// AUXADC_CON0
	   0x1190, 0x2000, 0x0,// AUXADC_LBAT3
	   0x1192, 0x2000, 0x0,// AUXADC_LBAT4
	   0x119E, 0x8000, 0x0,// AUXADC_IMP1
	   0x1208, 0x8000, 0x8000,// AUXADC_MDRT_0
	   0x1212, 0x8000, 0x0,// AUXADC_DCXO_MDRT_0
	   0x1218, 0x3F9, 0x51,// AUXADC_NAG_0
	   0x122E, 0x1, 0x0,// AUXADC_IMP_CG0
	   0x1230, 0x1, 0x0,// AUXADC_LBAT_CG0
	   0x1232, 0x1, 0x0,// AUXADC_NAG_CG0
	   0x140C, 0x1F, 0x0,// BUCK_TOP_CLK_CON0
	   0x1412, 0xF, 0xF,// BUCK_TOP_CLK_HWEN_CON0
	   0x1436, 0x100, 0x0,// BUCK_TOP_K_CON0
	   0x1488, 0x3, 0x0,// BUCK_VPROC_CON0
	   0x1510, 0x8, 0x8,// BUCK_VCORE_OP_EN
	   0x1516, 0x8, 0x8,// BUCK_VCORE_OP_CFG
	   0x1590, 0x8, 0x8,// BUCK_VMODEM_OP_EN
	   0x1596, 0x8, 0x8,// BUCK_VMODEM_OP_CFG
	   0x1610, 0x8, 0x8,// BUCK_VS1_OP_EN
	   0x1616, 0x8, 0x8,// BUCK_VS1_OP_CFG
	   0x1688, 0x1, 0x0,// BUCK_VPA_CON0
	   0x188C, 0x1, 0x1,// LDO_TOP_CLK_DCM_CON0
	   0x188E, 0x1, 0x0,// LDO_TOP_CLK_VIO28_CON0
	   0x1890, 0x1, 0x0,// LDO_TOP_CLK_VIO18_CON0
	   0x1892, 0x1, 0x0,// LDO_TOP_CLK_VAUD28_CON0
	   0x1894, 0x1, 0x0,// LDO_TOP_CLK_VDRAM_CON0
	   0x1896, 0x1, 0x0,// LDO_TOP_CLK_VSRAM_PROC_CON0
	   0x1898, 0x1, 0x0,// LDO_TOP_CLK_VSRAM_OTHERS_CON0
	   0x189A, 0x1, 0x0,// LDO_TOP_CLK_VAUX18_CON0
	   0x189C, 0x1, 0x0,// LDO_TOP_CLK_VUSB33_CON0
	   0x189E, 0x1, 0x0,// LDO_TOP_CLK_VEMC_CON0
	   0x18A0, 0x1, 0x0,// LDO_TOP_CLK_VXO22_CON0
	   0x18A2, 0x1, 0x0,// LDO_TOP_CLK_VSIM1_CON0
	   0x18A4, 0x1, 0x0,// LDO_TOP_CLK_VSIM2_CON0
	   0x18A6, 0x1, 0x0,// LDO_TOP_CLK_VCAMD_CON0
	   0x18A8, 0x1, 0x0,// LDO_TOP_CLK_VCAMIO_CON0
	   0x18AA, 0x1, 0x0,// LDO_TOP_CLK_VEFUSE_CON0
	   0x18AC, 0x1, 0x0,// LDO_TOP_CLK_VCN33_CON0
	   0x18AE, 0x1, 0x0,// LDO_TOP_CLK_VCN18_CON0
	   0x18B0, 0x1, 0x0,// LDO_TOP_CLK_VCN28_CON0
	   0x18B2, 0x1, 0x0,// LDO_TOP_CLK_VIBR_CON0
	   0x18B4, 0x1, 0x0,// LDO_TOP_CLK_VFE28_CON0
	   0x18B6, 0x1, 0x0,// LDO_TOP_CLK_VMCH_CON0
	   0x18B8, 0x1, 0x0,// LDO_TOP_CLK_VMC_CON0
	   0x18BA, 0x1, 0x0,// LDO_TOP_CLK_VRF18_CON0
	   0x18BC, 0x1, 0x0,// LDO_TOP_CLK_VLDO28_CON0
	   0x18BE, 0x1, 0x0,// LDO_TOP_CLK_VRF12_CON0
	   0x18C0, 0x1, 0x0,// LDO_TOP_CLK_VCAMA_CON0
	   0x18C2, 0x1, 0x0,// LDO_TOP_CLK_TREF_CON0
	   0x190A, 0x8, 0x8,// LDO_VXO22_OP_EN
	   0x1910, 0x8, 0x8,// LDO_VXO22_OP_CFG
	   0x191E, 0x8, 0x8,// LDO_VAUX18_OP_EN
	   0x1924, 0x8, 0x8,// LDO_VAUX18_OP_CFG
	   0x1930, 0x1, 0x1,// LDO_VAUD28_CON0
	   0x1946, 0x8, 0x8,// LDO_VIO28_OP_EN
	   0x194C, 0x8, 0x8,// LDO_VIO28_OP_CFG
	   0x195A, 0x8, 0x8,// LDO_VIO18_OP_EN
	   0x1960, 0x8, 0x8,// LDO_VIO18_OP_CFG
	   0x196E, 0x8, 0x8,// LDO_VDRAM_OP_EN
	   0x1974, 0x8, 0x8,// LDO_VDRAM_OP_CFG
	   0x1988, 0x1, 0x0,// LDO_VEMC_CON0
	   0x199E, 0x8, 0x8,// LDO_VUSB33_OP_EN
	   0x19A4, 0x8, 0x8,// LDO_VUSB33_OP_CFG
	   0x19B2, 0x1, 0x0,// LDO_VSRAM_PROC_CON0
	   0x19D8, 0x8, 0x8,// LDO_VSRAM_OTHERS_OP_EN
	   0x19DE, 0x8, 0x8,// LDO_VSRAM_OTHERS_OP_CFG
	   0x1A0A, 0x4, 0x4,// LDO_VFE28_OP_EN
	   0x1A10, 0x4, 0x0,// LDO_VFE28_OP_CFG
	   0x1A1E, 0x4, 0x4,// LDO_VRF18_OP_EN
	   0x1A24, 0x4, 0x0,// LDO_VRF18_OP_CFG
	   0x1A32, 0x4, 0x4,// LDO_VRF12_OP_EN
	   0x1A38, 0x4, 0x0,// LDO_VRF12_OP_CFG
	   0x1A44, 0x1, 0x0,// LDO_VEFUSE_CON0
	   0x1A58, 0x1, 0x0,// LDO_VCN18_CON0
	   0x1A6C, 0x1, 0x0,// LDO_VCAMA_CON0
	   0x1A88, 0x1, 0x0,// LDO_VCAMD_CON0
	   0x1A9C, 0x1, 0x0,// LDO_VCAMIO_CON0
	   0x1AB0, 0x1, 0x0,// LDO_VMC_CON0
	   0x1AC4, 0x1, 0x0,// LDO_VMCH_CON0
	   0x1AD8, 0x1, 0x0,// LDO_VSIM1_CON0
	   0x1AEC, 0x1, 0x0,// LDO_VSIM2_CON0
	   0x1B08, 0x1, 0x0,// LDO_VIBR_CON0
	   0x1B1C, 0x1, 0x0,// LDO_VCN33_CON0_0
	   0x1B2A, 0x1, 0x0,// LDO_VCN33_CON0_1
	   0x1B34, 0x8, 0x8,// LDO_VLDO28_OP_EN
	   0x1B3A, 0x8, 0x8,// LDO_VLDO28_OP_CFG
	   0x1B88, 0x1, 0x0,// LDO_VCN28_CON0
	   0x1B9C, 0x2, 0x2,// VRTC_CON0
	   0x1B9E, 0x1, 0x0,// LDO_TREF_CON0
	   0x1E10, 0x3F, 0x1F,// XPP_TOP_CKPDN_CON0
	   0x208C, 0x67, 0x66,// AUD_TOP_CKPDN_CON0
	   0x2112, 0xEF, 0xEF,// AUDIO_TOP_CON0
	   0x2146, 0x2, 0x2,// AFE_DCCLK_CFG0
};

const unsigned int *AP_PMIC_REG_gs_deepidle___lp_mp3_32kless =
		AP_PMIC_REG_gs_deepidle___lp_mp3_32kless_data;

unsigned int AP_PMIC_REG_gs_deepidle___lp_mp3_32kless_len = 336;

