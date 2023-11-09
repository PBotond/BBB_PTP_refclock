/**
 * @file j721e_CPTS_MCU_CPSW0_registers.h
 * @brief This file contains the register addresses for the CPTS module of the MCU domain CPSW0 subsystem of the J721E SoC.
*/

#ifndef J721E_CPTS_MCU_CPSW0_REGISTERS_H
#define J721E_CPTS_MCU_CPSW0_REGISTERS_H

#define MCU_CPSW0_NUSS_CPTS 0x46000000

/******************
 * CPTS registers *
******************/
#define CPTS_BEGIN CPTS_IDVER_REG

#define CPTS_IDVER_REG 0x4603D000            // CPTS Identification and Version Register
#define CPTS_CONTROL_REG 0x4603D004          // Time Sync Control Register
#define CPTS_RFTCLK_SEL_REG 0x4603D008       // Reference Clock Select Register
#define CPTS_TS_PUSH_REG 0x4603D00C          // Time Stamp Event Push Register
#define CPTS_TS_LOAD_VAL_REG 0x4603D010      // Time Stamp Load Low Value (lower 32-bits) Register
#define CPTS_TS_LOAD_EN_REG 0x4603D014       // Time Stamp Load Enable Register
#define CPTS_TS_COMP_VAL_REG 0x4603D018      // Time Stamp Comparison Low Value (lower 32-bits) Register
#define CPTS_TS_COMP_LEN_REG 0x4603D01C      // Time Stamp Comparison Length Register
#define CPTS_INTSTAT_RAW_REG 0x4603D020      // Interrupt Status Raw Register
#define CPTS_INTSTAT_MASKED_REG 0x4603D024   // Interrupt Status Masked Register
#define CPTS_INT_ENABLE_REG 0x4603D028       // Interrupt Enable Register Register
#define CPTS_TS_COMP_NUDGE_REG 0x4603D02C    // Time Stamp Comparison Nudge Value Register
#define CPTS_EVENT_POP_REG 0x4603D030        // Event Interrupt Pop Register
#define CPTS_EVENT_0_REG 0x4603D034          // Lower 32-bits of the Event Value Register
#define CPTS_EVENT_1_REG 0x4603D038          // Lower Middle 32-bits of the Event Value Register
#define CPTS_EVENT_2_REG 0x4603D03C          // Upper Middle 32-bits of the Event Value Register
#define CPTS_EVENT_3_REG 0x4603D040          // Upper 32-bits of the Event Value Register
#define CPTS_TS_LOAD_HIGH_VAL_REG 0x4603D044 // Time Stamp Load High Value (upper 32-bits) Register
#define CPTS_TS_COMP_HIGH_VAL_REG 0x4603D048 // Time Stamp Comparison High Value (upper 32-bits) Register
#define CPTS_TS_ADD_VAL_REG 0x4603D04C       // Time Stamp Add Value Register
#define CPTS_TS_PPM_LOW_VAL_REG 0x4603D050   // Time Stamp PPM Load Low Value (lower 32-bits) Register
#define CPTS_TS_PPM_HIGH_VAL_REG 0x4603D054  // Time Stamp PPM Load High Value (upper 32-bits) Register
#define CPTS_TS_NUDGE_VAL_REG 0x4603D058     // Time Stamp Nudge Value Register

#define CPTS_REG_COUNT 23

/*******************
 * GENF registers *
********************/

#define CPTS_GENF_BEGIN GENF0_COMP_LOW_REG_L, GENF1_COMP_LOW_REG

#define GENF0_COMP_LOW_REG_L 0x4603D0E0      // GENF0 time stamp Comparison Value Lower 32-bits Registers
#define GENF0_COMP_HIGH_REG_L 0x4603D0E4     // GENF0 time stamp Comparison Value Upper 32-bits Registers
#define GENF0_TS_GENF_CONTROL_REG 0x4603D0E8 // GENF0 Control Register Registers
#define GENF0_LENGTH_REG_L 0x4603D0EC        // GENF0 Length Value Registers
#define GENF0_PPM_LOW_REG_L 0x4603D0F0       // GENF0 PPM Value Lower 32-bits Registers
#define GENF0_PPM_HIGH_REG_L 0x4603D0F4      // GENF0 PPM Value Upper 32-bits Registers
#define GENF0_NUDGE_REG_L 0x4603D0F8         // GENF0 Nudge Value Registers

#define GENF1_COMP_LOW_REG 0x4603D100  // GENF1 time stamp Comparison Value Lower 32-bits Register
#define GENF1_COMP_HIGH_REG 0x4603D104 // GENF1 time stamp Comparison Value Upper 32-bits Register
#define GENF1_CONTROL_REG 0x4603D108   // GENF1 Control Register
#define GENF1_LENGTH_REG 0x4603D10C    // GENF1 Length Value Register
#define GENF1_PPM_LOW_REG 0x4603D110   // GENF1 PPM Value Lower 32-bits Register
#define GENF1_PPM_HIGH_REG 0x4603D114  // GENF1 PPM Value Upper 32-bits Register
#define GENF1_NUDGE_REG 0x4603D118     // GENF1 Nudge Value Register

#define CPTS_GENF_REG_COUNT 7
#define CPTS_GENF_REG_MAX 2

/*******************
 * ESTF registers *
*******************/

#define CPTS_ESTF_BEGIN ESTF1_COMP_LOW_REG

#define ESTF1_COMP_LOW_REG 0x4603D200  // ESTF1 time stamp Comparison Value Lower 32-bits Register
#define ESTF1_COMP_HIGH_REG 0x4603D204 // ESTF1 time stamp Comparison Value Upper 32-bits Register
#define ESTF1_CONTROL_REG 0x4603D208   // ESTF1 Control Register
#define ESTF1_LENGTH_REG 0x4603D20C    // ESTF1 Length Value Register
#define ESTF1_PPM_LOW_REG 0x4603D210   // ESTF1 PPM Value Lower 32-bits Register
#define ESTF1_PPM_HIGH_REG 0x4603D214  // ESTF1 PPM Value Upper 32-bits Register
#define ESTF1_NUDGE_REG 0x4603D218     // ESTF1 Nudge Value Register

#define CPTS_ESTF_REG_MAX 1

/**************************
 * End of CPTS registers *
**************************/

#define CPTS_END ESTF1_NUDGE_REG

#endif // J721E_CPTS_MCU_CPSW0_REGISTERS_H
