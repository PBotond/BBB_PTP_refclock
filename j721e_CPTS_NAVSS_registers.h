/**
 * @file j721e_CPTS_MCU_CPSW0_registers.h
 * @brief This file contains the register addresses for the CPTS module of the MCU domain CPSW0 subsystem of the J721E SoC.
*/

#ifndef J721E_NAVSS0_REGISTERS_H
#define J721E_NAVSS0_REGISTERS_H

#define NAVSS0_CPTS 0x310D0000

/******************
 * CPTS registers *
******************/
#define CPTS_BEGIN CPTS_IDVER_REG

#define CPTS_IDVER_REG 0x310D0000            // CPTS Identification and Version Register
#define CPTS_CONTROL_REG 0x310D0004          // Time Sync Control Register
#define CPTS_RFTCLK_SEL_REG 0x310D0008       // Reference Clock Select Register
#define CPTS_TS_PUSH_REG 0x310D000C          // Time Stamp Event Push Register
#define CPTS_TS_LOAD_VAL_REG 0x310D0010      // Time Stamp Load Low Value (lower 32-bits) Register
#define CPTS_TS_LOAD_EN_REG 0x310D0014       // Time Stamp Load Enable Register
#define CPTS_TS_COMP_VAL_REG 0x310D0018      // Time Stamp Comparison Low Value (lower 32-bits) Register
#define CPTS_TS_COMP_LEN_REG 0x310D001C      // Time Stamp Comparison Length Register
#define CPTS_INTSTAT_RAW_REG 0x310D0020      // Interrupt Status Raw Register
#define CPTS_INTSTAT_MASKED_REG 0x310D0024   // Interrupt Status Masked Register
#define CPTS_INT_ENABLE_REG 0x310D0028       // Interrupt Enable Register Register
#define CPTS_TS_COMP_NUDGE_REG 0x310D002C    // Time Stamp Comparison Nudge Value Register
#define CPTS_EVENT_POP_REG 0x310D0030        // Event Interrupt Pop Register
#define CPTS_EVENT_0_REG 0x310D0034          // Lower 32-bits of the Event Value Register
#define CPTS_EVENT_1_REG 0x310D0038          // Lower Middle 32-bits of the Event Value Register
#define CPTS_EVENT_2_REG 0x310D003C          // Upper Middle 32-bits of the Event Value Register
#define CPTS_EVENT_3_REG 0x310D0040          // Upper 32-bits of the Event Value Register
#define CPTS_TS_LOAD_HIGH_VAL_REG 0x310D0044 // Time Stamp Load High Value (upper 32-bits) Register
#define CPTS_TS_COMP_HIGH_VAL_REG 0x310D0048 // Time Stamp Comparison High Value (upper 32-bits) Register
#define CPTS_TS_ADD_VAL_REG 0x310D004C       // Time Stamp Add Value Register
#define CPTS_TS_PPM_LOW_VAL_REG 0x310D0050   // Time Stamp PPM Load Low Value (lower 32-bits) Register
#define CPTS_TS_PPM_HIGH_VAL_REG 0x310D0054  // Time Stamp PPM Load High Value (upper 32-bits) Register
#define CPTS_TS_NUDGE_VAL_REG 0x310D0058     // Time Stamp Nudge Value Register

#define CPTS_REG_COUNT 23

/*******************
 * GENF registers *
********************/

#define CPTS_GENF_BEGIN GENF0_COMP_LOW_REG_L, GENF1_COMP_LOW_REG

#define GENF0_COMP_LOW_REG_L 0x310D00E0      // GENF0 time stamp Comparison Value Lower 32-bits Registers
#define GENF0_COMP_HIGH_REG_L 0x310D00E4     // GENF0 time stamp Comparison Value Upper 32-bits Registers
#define GENF0_TS_GENF_CONTROL_REG 0x310D00E8 // GENF0 Control Register Registers
#define GENF0_LENGTH_REG_L 0x310D00EC        // GENF0 Length Value Registers
#define GENF0_PPM_LOW_REG_L 0x310D00F0       // GENF0 PPM Value Lower 32-bits Registers
#define GENF0_PPM_HIGH_REG_L 0x310D00F4      // GENF0 PPM Value Upper 32-bits Registers
#define GENF0_NUDGE_REG_L 0x310D00F8         // GENF0 Nudge Value Registers

#define GENF1_COMP_LOW_REG 0x310D0100  // GENF1 time stamp Comparison Value Lower 32-bits Register
#define GENF1_COMP_HIGH_REG 0x310D0104 // GENF1 time stamp Comparison Value Upper 32-bits Register
#define GENF1_CONTROL_REG 0x310D0108   // GENF1 Control Register
#define GENF1_LENGTH_REG 0x310D010C    // GENF1 Length Value Register
#define GENF1_PPM_LOW_REG 0x310D0110   // GENF1 PPM Value Lower 32-bits Register
#define GENF1_PPM_HIGH_REG 0x310D0114  // GENF1 PPM Value Upper 32-bits Register
#define GENF1_NUDGE_REG 0x310D0118     // GENF1 Nudge Value Register

#define CPTS_GENF_REG_COUNT 7
#define CPTS_GENF_REG_MAX 2

/*******************
 * ESTF registers *
*******************/

#define CPTS_ESTF_BEGIN ESTF1_COMP_LOW_REG

#define ESTF1_COMP_LOW_REG 0x310D0200  // ESTF1 time stamp Comparison Value Lower 32-bits Register
#define ESTF1_COMP_HIGH_REG 0x310D0204 // ESTF1 time stamp Comparison Value Upper 32-bits Register
#define ESTF1_CONTROL_REG 0x310D0208   // ESTF1 Control Register
#define ESTF1_LENGTH_REG 0x310D020C    // ESTF1 Length Value Register
#define ESTF1_PPM_LOW_REG 0x310D0210   // ESTF1 PPM Value Lower 32-bits Register
#define ESTF1_PPM_HIGH_REG 0x310D0214  // ESTF1 PPM Value Upper 32-bits Register
#define ESTF1_NUDGE_REG 0x310D0218     // ESTF1 Nudge Value Register

#define CPTS_ESTF_REG_MAX 1

/**************************
 * End of CPTS registers *
**************************/

#define CPTS_END ESTF1_NUDGE_REG

#endif // J721E_NAVSS0_REGISTERS_H
