/*
 * Copyright (C) ST-Ericsson SA 2011
 *
 * Register definitions for AB5500 codec
 * Author: Xie Xiaolei <xie.xiaolei@etericsson.com>
 *         for ST-Ericsson.
 *
 * License terms:
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as published
 * by the Free Software Foundation.
 */
#ifndef AB5500_CODEC_REGISTERS_H
#define AB5500_CODEC_REGISTERS_H

#define AB5500_SUPPORTED_RATE (SNDRV_PCM_RATE_8000 | SNDRV_PCM_RATE_16000 | \
			       SNDRV_PCM_RATE_44100 | SNDRV_PCM_RATE_48000)

#define AB5500_SUPPORTED_FMT (SNDRV_PCM_FMTBIT_S16_LE | \
			      SNDRV_PCM_FMTBIT_S24_LE)


/* MIC BIAS */

#define MIC_BIAS1 0x00
#define MIC_BIAS2 0x01
#define MBIAS2_OUT_V_MASK 0x04
#define MBIAS2_OUT_V_SHIFT 2
#define MBIASx_PWR_MASK 0x02
#define MBIASx_PWR_SHIFT 1
#define MBIASx_PDN_IMP_MASK 0x01
#define MBIASx_PDN_IMP_SHIFT 0

#define MIC_BIAS2_VAD 0x02
#define MBIAS2_R_INT_MASK 0x01
#define MBIAS2_R_INT_SHIFT 0

/* MIC */
#define MIC1_GAIN 0x03
#define MIC2_GAIN 0x04
#define MICx_GAIN_MASK 0xF0
#define MICx_GAIN_SHIFT 4
#define MICx_IN_IMP_MASK 0x0C
#define MICx_IN_IMP_SHIFT 2
#define MICx_PWR_MASK 0x01
#define MICx_PWR_SHIFT 0

#define MIC1_INPUT_SELECT 0x05
#define MIC2_INPUT_SELECT 0x06
#define MICxP1_SEL_MASK 0x80
#define MICxP1_SEL_SHIFT 7
#define MICxN1_SEL_MASK 0x40
#define MICxN1_SEL_SHIFT 6
#define MICxP2_SEL_MASK 0x20
#define MICxP2_SEL_SHIFT 5
#define MICxN2_SEL_MASK 0x10
#define MICxN2_SEL_SHIFT 4
#define LINEIN_SEL_MASK 0x03
#define LINEIN_SEL_SHIFT 0

#define MIC1_VMID_SELECT 0x07
#define MIC2_VMID_SELECT 0x08
#define VMIDx_ENABLE_MASK 0xC0
#define VMIDx_ENABLE_SHIFT 6
#define VMIDx_LINEIN1_N_MASK 0x20
#define VMIDx_LINEIN1_N_SHIFT 5
#define VMIDx_LINEIN2_N_MASK 0x10
#define VMIDx_LINEIN2_N_SHIFT 4
#define VMIDx_MICxP1_MASK  0x08
#define VMIDx_MICxP1_SHIFT 3
#define VMIDx_MICxP2_MASK  0x04
#define VMIDx_MICxP2_SHIFT 2
#define VMIDx_MICxN1_MASK  0x02
#define VMIDx_MICxN1_SHIFT 1
#define VMIDx_MICxN2_MASK  0x01
#define VMIDx_MICxN2_SHIFT 0

#define MIC2_TO_MIC1 0x09
#define MIC2_TO_MIC1_MASK 0x03
#define MIC2_TO_MIC1_SHIFT 0

/* Analog Loop */
#define ANALOG_LOOP_PGA1 0x0A
#define ANALOG_LOOP_PGA2 0x0B
#define APGAx_GAIN_MASK 0xF8
#define APGAx_GAIN_SHIFT 3
#define APGAx_PWR_MASK 0x04
#define APGAx_PWR_SHIFT 2
#define APGAx_MUX_MASK 0x03
#define APGAx_MUX_SHIFT 0
#define APGAx_MUX_MIC1_MASK 0x01
#define APGAx_MUX_MIC1_SHIFT 0
#define APGAx_MUX_MIC2_MASK 0x02
#define APGAx_MUX_MIC2_SHIFT 1

#define APGA_VMID_SELECT 0x0C
#define VMID_APGA1_ENABLE_MASK 0xC0
#define VMID_APGA1_ENABLE_SHIFT 6
#define VMID_APGA1_LINEIN1_MASK 0x20
#define VMID_APGA1_LINEIN1_SHIFT 5
#define VMID_APGA2_ENABLE_MASK 0x0C
#define VMID_APGA2_ENABLE_SHIFT 2
#define VMID_APGA2_LINEIN2_MASK 0x02
#define VMID_APGA2_LINEIN2_SHIFT 1

/* Output Amplifiers */
#define EAR_PWR 0x0D
#define EAR_PWR_MODE_MASK 0xC0
#define EAR_PWR_MODE_SHIFT 6
#define EAR_PWR_VMID_MASK 0x30
#define EAR_PWR_VMID_SHIFT 4
#define EAR_PWR_MASK 0x01
#define EAR_PWR_SHIFT 0

#define EAR_GAIN 0x0E
#define EAR_GAIN_MASK 0x1F
#define EAR_GAIN_SHIFT 0

#define AUXO1 0x0F
#define AUXO2 0x10
#define AUXO3 0x11
#define AUXO4 0x12
#define AUXOx_PWR_MASK 0x80
#define AUXOx_PWR_SHIFT 7
#define AUXOx_INV_MASK 0x40
#define AUXOx_INV_SHIFT 6
#define AUXOx_PULLDOWN_MASK 0x20
#define AUXOx_PULLDOWN_SHIFT 5
#define AUXOx_GAIN_MASK 0x0F
#define AUXOx_GAIN_SHIFT 0

#define AUXO12_PWR_MODE 0x13
#define AUXO34_PWR_MODE 0x14
#define AUXOxy_PWR_MODE_MASK 0x07
#define AUXOxy_PWR_MODE_SHIFT 0

#define NEG_CHARGE_PUMP 0x15
#define NEG_CHARGE_PUMP_MODE_MASK 0x02
#define NEG_CHARGE_PUMP_MODE_SHIFT 1
#define NEG_CHARGE_PUMP_PWR_MASK 0x01
#define NEG_CHARGE_PUMP_PWR_SHIFT 0

#define ENV_THR 0x16
#define ENV_THR_HIGH_MASK 0xF0
#define ENV_THR_HIGH_SHIFT 4
#define ENV_THR_LOW_MASK 0x0F
#define ENV_THR_LOW_SHIFT 0

#define ENV_DECAY_TIME 0x17
#define ENV_DECAY_TIME_CP_LV_MASK 0x20
#define ENV_DECAY_TIME_CP_LV_SHIFT 5
#define ENV_DECAY_TIME_DET_CP_MASK 0x10
#define ENV_DECAY_TIME_DET_CP_SHIFT 4
#define ENV_DECAY_TIME_MASK 0x0F
#define ENV_DECAY_TIME_SHIFT 0

#define DC_CANCEL 0x18
#define DC_CANCEL_SPKR2_MASK 0x10
#define DC_CANCEL_SPKR2_SHIFT 4
#define DC_CANCEL_SPKR1_MASK 0x08
#define DC_CANCEL_SPKR1_SHIFT 3
#define DC_CANCEL_AUXO34_MASK 0x04
#define DC_CANCEL_AUXO34_SHIFT 2
#define DC_CANCEL_AUXO12_MASK 0x02
#define DC_CANCEL_AUXO12_SHIFT 1
#define DC_CANCEL_OFFSET_CLOCK_MASK 0x01
#define DC_CANCEL_OFFSET_CLOCK_SHIFT 0

#define SPKR1 0x19
#define SPKR2 0x1A
#define SPKRx_PWR_MASK 0xC0
#define SPKRx_PWR_SHIFT 6
#define SPKRx_PWR_VBR_VALUE 0x40
#define SPKRx_PWR_CLS_D_VALUE 0x80
#define SPKRx_PWR_CLS_AB_VALUE 0xC0
#define SPKR1_VMID_MASK 0x20
#define SPKR1_VMID_SHIFT 5
#define SPKRx_GAIN_MASK 0x1F
#define SPKRx_GAIN_SHIFT 0

#define SPKR_OVCR 0x1B
#define SPKR_OVCR_PROT2_MASK 0x80
#define SPKR_OVCR_PROT2_SHIFT 7
#define SPKR_OVCR_TRIM2_MASK 0x70
#define SPKR_OVCR_TRIM2_SHIFT 4
#define SPKR_OVCR_PROT1_MASK 0x08
#define SPKR_OVCR_PROT1_SHIFT 3
#define SPKR_OVCR_TRIM1_MASK 0x07
#define SPKR_OVCR_TRIM1_SHIFT 0

#define PWMCTRL_SPKR1 0x1C
#define PWMCTRL_SPKR2 0x1F
#define PWMCTRL_SPKRx_N1_POL_MASK 0x80
#define PWMCTRL_SPKRx_N1_POL_SHIFT 7
#define PWMCTRL_SPKRx_P1_POL_MASK 0x40
#define PWMCTRL_SPKRx_P1_POL_SHIFT 6
#define PWMCTRL_SPKRx_MASK 0x04
#define PWMCTRL_SPKRx_SHIFT 2
#define PWMCTRL_SPKRxN_MASK 0x02
#define PWMCTRL_SPKRxN_SHIFT 1
#define PWMCTRL_SPKRxP_MASK 0x01
#define PWMCTRL_SPKRxP_SHIFT 0

#define PWM_SPKR1N 0x1D
#define PWM_SPKR2N 0x20
#define PWM_SPKR1P 0x1E
#define PWM_SPKR2P 0x21
#define PWM_SPKRxy_DUT_CYC_MASK 0xFF
#define PWM_SPKRxy_DUT_CYC_SHIFT 0

#define SPKR1_CLK_DIV 0x22
#define SPKR2_CLK_DIV 0x23
#define SPKRx_CLK_DIV_MASK 0x3F
#define SPKRx_CLK_DIV_SHIFT 0

#define LINE1 0x24
#define LINE2 0x25
#define LINEx_PWR_MASK 0x80
#define LINEx_PWR_SHIFT 7
#define LINEx_INV_MASK 0x40
#define LINEx_INV_SHIFT 6
#define LINEx_TO_USB_MASK 0x20
#define LINEx_TO_USB_SHIFT 5
#define LINEx_VMID_BUFF_MASK 0x10
#define LINEx_VMID_BUFF_SHIFT 4
#define LINEx_GAIN_MASK 0x0F
#define LINEx_GAIN_SHIFT 0

#define USB_AUDIO 0x26
#define USB_AUDIO_MIC_MUX_MASK 0x03
#define USB_AUDIO_MIC_MUX_SHIFT 0

#define EAR_ADDER 0x28
#define AUXO1_ADDER 0x29
#define AUXO2_ADDER 0x2A
#define AUXO3_ADDER 0x2B
#define AUXO4_ADDER 0x2C
#define SPKR1_ADDER 0x2D
#define SPKR2_ADDER 0x2E
#define LINE1_ADDER 0x2F
#define LINE2_ADDER 0x30
#define APGA2_TO_X_MASK 0x10
#define APGA2_TO_X_SHIFT 4
#define APGA1_TO_X_MASK 0x08
#define APGA1_TO_X_SHIFT 3
#define DAC3_TO_X_MASK 0x04
#define DAC3_TO_X_SHIFT 2
#define DAC2_TO_X_MASK 0x02
#define DAC2_TO_X_SHIFT 1
#define DAC1_TO_X_MASK 0x01
#define DAC1_TO_X_SHIFT 0

#define EAR_TO_MIC2 0x31
#define SPKR1_TO_MIC2 0x32
#define SPKR2_TO_MIC2 0x33
#define EAR_TO_MIC2_MASK 0x01
#define EAR_TO_MIC2_SHIFT 0

#define ADC_LOW_PWR 0x35
#define ADC_LOW_PWR_MASK 0x01
#define ADC_LOW_PWR_SHIFT 0

#define TX1 0x36
#define TX2 0x37
#define TXx_MUX_MASK 0x60
#define TXx_MUX_SHIFT 6
#define TXx_FS_MASK 0x10
#define TXx_FS_SHIFT 4
#define TXx_HP_FILTER_MASK 0x0C
#define TXx_HP_FILTER_SHIFT 2
#define TXx_PWR_MASK 0x02
#define TXx_PWR_SHIFT 1
#define ADCx_PWR_MASK 0x01
#define ADCx_PWR_SHIFT 0

#define RX1 0x38
#define RX2 0x39
#define RX3 0x3A
#define RXx_DATA_MASK 0x70
#define RXx_DATA_SHIFT 4
#define RXx_PWR_MASK 0x08
#define RXx_PWR_SHIFT 3
#define DACx_PWR_MASK 0x04
#define DACx_PWR_SHIFT 2
#define DACx_PWR_MODE_MASK 0x03
#define DACx_PWR_MODE_SHIFT 0

#define TX_DPGA1 0x3B
#define TX_DPGA2 0x3C
#define TX_DPGAx_MASK 0x0F
#define TX_DPGAx_SHIFT 0

#define RX1_DPGA 0x3D
#define RX2_DPGA 0x3E
#define RX3_DPGA 0x3F
#define RXx_DPGA_MASK 0x7F
#define RXx_DPGA_SHIFT 0

#define ST1_PGA 0x40
#define ST2_PGA 0x41
#define STx_HP_FILTER_MASK 0x60
#define STx_HP_FILTER_SHIFT 6
#define STx_MUX_MASK 0x10
#define STx_MUX_SHIFT 4
#define STx_PGA_MASK 0x0F
#define STx_PGA_SHIFT 0

#define CLOCK 0x42
#define CLOCK_REF_SELECT_MASK 0x02
#define CLOCK_REF_SELECT_SHIFT 1
#define CLOCK_ENABLE_MASK 0x01
#define CLOCK_ENABLE_SHIFT 0

#define INTERFACE0 0x43
#define INTERFACE1 0x45
#define I2Sx_WORDLENGTH_MASK 0x40
#define I2Sx_WORDLENGTH_SHIFT 6
#define MASTER_GENx_PWR_MASK 0x20
#define MASTER_GENx_PWR_SHIFT 5
#define I2Sx_MODE_MASK 0x10
#define I2Sx_MODE_SHIFT 4
#define I2Sx_TRISTATE_MASK 0x08
#define I2Sx_TRISTATE_SHIFT 3
#define I2Sx_PULLDOWN_MASK 0x04
#define I2Sx_PULLDOWN_SHIFT 2
#define I2Sx_SR_MASK 0x03
#define I2Sx_SR_SHIFT 0
#define I2Sx_SR_8000Hz 0
#define I2Sx_SR_16000Hz 1
#define I2Sx_SR_44100Hz 2
#define I2Sx_SR_48000Hz 3

#define INTERFACE0_ULD 0x44
#define INTERFACE1_ULD 0x46
#define I2Sx_ULD_R_MASK 0x70
#define I2Sx_ULD_R_SHIFT 4
#define I2Sx_ULD_L_MASK 0x07
#define I2Sx_ULD_L_SHIFT 0

#define INTERFACE_SWAP 0x47
#define IO_SWAP0_MASK 0x02
#define IO_SWAP0_SHIFT 1
#define IO_SWAP1_MASK 0x01
#define IO_SWAP1_SHIFT 0

#define AB5500_FIRST_REG MIC_BIAS1
#define AB5500_LAST_REG INTERFACE_SWAP

#define AB5500_VIRTUAL_REG1 (AB5500_LAST_REG + 1)
#define IF0_DLD_L_PW_SHIFT 0
#define IF0_DLD_R_PW_SHIFT 1
#define IF0_ULD_L_PW_SHIFT 2
#define IF0_ULD_R_PW_SHIFT 3
#define IF1_DLD_L_PW_SHIFT 4
#define IF1_DLD_R_PW_SHIFT 5
#define IF1_ULD_L_PW_SHIFT 6
#define IF1_ULD_R_PW_SHIFT 7

#define AB5500_VIRTUAL_REG2 (AB5500_LAST_REG + 2)
#define MIC1P1_PW_SHIFT 0
#define MIC1N1_PW_SHIFT 1
#define MIC1P2_PW_SHIFT 2
#define MIC1N2_PW_SHIFT 3
#define MIC2P1_PW_SHIFT 4
#define MIC2N1_PW_SHIFT 5
#define MIC2P2_PW_SHIFT 6
#define MIC2N2_PW_SHIFT 7

#define AB5500_VIRTUAL_REG3 (AB5500_LAST_REG + 3)
#define SPKR1_MODE_MASK 0x03
#define SPKR1_MODE_SHIFT 0
#define SPKR1_MODE_VBR_VALUE 0
#define SPKR1_MODE_CLS_D_VALUE 1
#define SPKR1_MODE_CLS_AB_VALUE 2
#define SPKR1_ADDER_PWR_SHIFT 2
#define SPKR1_PWR_SHIFT 3
#define SPKR2_MODE_MASK 0x10
#define SPKR2_MODE_SHIFT 4
#define SPKR2_MODE_VBR_VALUE 0
#define SPKR2_MODE_CLS_D_VALUE 1
#define SPKR2_ADDER_PWR_SHIFT 5
#define SPKR2_PWR_SHIFT 6

#define AB5500_VIRTUAL_REG4 (AB5500_LAST_REG + 4)
#define PWM_SPKR1_PWR_SHIFT 0
#define PWM_SPKR2_PWR_SHIFT 1
#define PWM_SPKR1N_PWR_SHIFT 2
#define PWM_SPKR1P_PWR_SHIFT 3
#define PWM_SPKR2N_PWR_SHIFT 4
#define PWM_SPKR2P_PWR_SHIFT 5

#define AB5500_VIRTUAL_REG5 (AB5500_LAST_REG + 5)
#define PWM_SPKR1N_SEL_SHIFT 0
#define PWM_SPKR1P_SEL_SHIFT 1
#define PWM_SPKR2N_SEL_SHIFT 2
#define PWM_SPKR2P_SEL_SHIFT 3

#define DUMMY_REG 0xff

/* #define SPKR1_PWR_VBR_SHIFT 0 */
/* #define SPKR1_PWR_CLS_D_SHIFT 1 */
/* #define SPKR1_PWR_CLS_AB_SHIFT 2 */
/* #define SPKR2_PWR_VBR_SHIFT 3 */
/* #define SPKR2_PWR_CLS_D_SHIFT 4 */
/* #define SPKR2_PWR_CLS_AB_SHIFT 5 */

#endif
