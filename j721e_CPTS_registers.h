#ifndef J721E_CPTS_REGISTERS_H
#define J721E_CPTS_REGISTERS_H

#include <stdint.h>

#define MCU_CPSW0_NUSS_CPTS 0x46000000

#define CPSW_CPTS_BEGIN CPSW_CPTS_IDVER_REG
#define CPSW_CPTS_END CPSW_ESTF1_NUDGE_REG

#define CPSW_CPTS_IDVER_REG 0x4603D000            // CPTS Identification and Version Register
#define CPSW_CPTS_CONTROL_REG 0x4603D004          // Time Sync Control Register
#define CPSW_CPTS_RFTCLK_SEL_REG 0x4603D008       // Reference Clock Select Register
#define CPSW_CPTS_TS_PUSH_REG 0x4603D00C          // Time Stamp Event Push Register
#define CPSW_CPTS_TS_LOAD_VAL_REG 0x4603D010      // Time Stamp Load Low Value (lower 32-bits) Register
#define CPSW_CPTS_TS_LOAD_EN_REG 0x4603D014       // Time Stamp Load Enable Register
#define CPSW_CPTS_TS_COMP_VAL_REG 0x4603D018      // Time Stamp Comparison Low Value (lower 32-bits) Register
#define CPSW_CPTS_TS_COMP_LEN_REG 0x4603D01C      // Time Stamp Comparison Length Register
#define CPSW_CPTS_INTSTAT_RAW_REG 0x4603D020      // Interrupt Status Raw Register
#define CPSW_CPTS_INTSTAT_MASKED_REG 0x4603D024   // Interrupt Status Masked Register
#define CPSW_CPTS_INT_ENABLE_REG 0x4603D028       // Interrupt Enable Register Register
#define CPSW_CPTS_TS_COMP_NUDGE_REG 0x4603D02C    // Time Stamp Comparison Nudge Value Register
#define CPSW_CPTS_EVENT_POP_REG 0x4603D030        // Event Interrupt Pop Register
#define CPSW_CPTS_EVENT_0_REG 0x4603D034          // Lower 32-bits of the Event Value Register
#define CPSW_CPTS_EVENT_1_REG 0x4603D038          // Lower Middle 32-bits of the Event Value Register
#define CPSW_CPTS_EVENT_2_REG 0x4603D03C          // Upper Middle 32-bits of the Event Value Register
#define CPSW_CPTS_EVENT_3_REG 0x4603D040          // Upper 32-bits of the Event Value Register
#define CPSW_CPTS_TS_LOAD_HIGH_VAL_REG 0x4603D044 // Time Stamp Load High Value (upper 32-bits) Register
#define CPSW_CPTS_TS_COMP_HIGH_VAL_REG 0x4603D048 // Time Stamp Comparison High Value (upper 32-bits) Register
#define CPSW_CPTS_TS_ADD_VAL_REG 0x4603D04C       // Time Stamp Add Value Register
#define CPSW_CPTS_TS_PPM_LOW_VAL_REG 0x4603D050   // Time Stamp PPM Load Low Value (lower 32-bits) Register
#define CPSW_CPTS_TS_PPM_HIGH_VAL_REG 0x4603D054  // Time Stamp PPM Load High Value (upper 32-bits) Register
#define CPSW_CPTS_TS_NUDGE_VAL_REG 0x4603D058     // Time Stamp Nudge Value Register

#define CPSW_GENF0_COMP_LOW_REG_L 0x4603D0E0      // GENF0 time stamp Comparison Value Lower 32-bits Registers
#define CPSW_GENF0_COMP_HIGH_REG_L 0x4603D0E4     // GENF0 time stamp Comparison Value Upper 32-bits Registers
#define CPSW_GENF0_TS_GENF_CONTROL_REG 0x4603D0E8 // GENF0 Control Register Registers
#define CPSW_GENF0_LENGTH_REG_L 0x4603D0EC        // GENF0 Length Value Registers
#define CPSW_GENF0_PPM_LOW_REG_L 0x4603D0F0       // GENF0 PPM Value Lower 32-bits Registers
#define CPSW_GENF0_PPM_HIGH_REG_L 0x4603D0F4      // GENF0 PPM Value Upper 32-bits Registers
#define CPSW_GENF0_NUDGE_REG_L 0x4603D0F8         // GENF0 Nudge Value Registers

#define CPSW_GENF1_COMP_LOW_REG 0x4603D100  // GENF1 time stamp Comparison Value Lower 32-bits Register
#define CPSW_GENF1_COMP_HIGH_REG 0x4603D104 // GENF1 time stamp Comparison Value Upper 32-bits Register
#define CPSW_GENF1_CONTROL_REG 0x4603D108   // GENF1 Control Register
#define CPSW_GENF1_LENGTH_REG 0x4603D10C    // GENF1 Length Value Register
#define CPSW_GENF1_PPM_LOW_REG 0x4603D110   // GENF1 PPM Value Lower 32-bits Register
#define CPSW_GENF1_PPM_HIGH_REG 0x4603D114  // GENF1 PPM Value Upper 32-bits Register
#define CPSW_GENF1_NUDGE_REG 0x4603D118     // GENF1 Nudge Value Register

#define CPSW_ESTF1_COMP_LOW_REG 0x4603D200  // ESTF1 time stamp Comparison Value Lower 32-bits Register
#define CPSW_ESTF1_COMP_HIGH_REG 0x4603D204 // ESTF1 time stamp Comparison Value Upper 32-bits Register
#define CPSW_ESTF1_CONTROL_REG 0x4603D208   // ESTF1 Control Register
#define CPSW_ESTF1_LENGTH_REG 0x4603D20C    // ESTF1 Length Value Register
#define CPSW_ESTF1_PPM_LOW_REG 0x4603D210   // ESTF1 PPM Value Lower 32-bits Register
#define CPSW_ESTF1_PPM_HIGH_REG 0x4603D214  // ESTF1 PPM Value Upper 32-bits Register
#define CPSW_ESTF1_NUDGE_REG 0x4603D218     // ESTF1 Nudge Value Register

struct j721e_CPTS_GENF_regs
{
   volatile uint32_t *GENF_COMP_LOW_REG_L;
   volatile uint32_t *GENF_COMP_HIGH_REG_L;
   volatile uint32_t *GENF_CONTROL_REG;
   volatile uint32_t *GENF_LENGTH_REG_L;
   volatile uint32_t *GENF_PPM_LOW_REG_L;
   volatile uint32_t *GENF_PPM_HIGH_REG_L;
   volatile uint32_t *GENF_NUDGE_REG_L;
};

struct j721e_CPTS_regs
{
    volatile uint32_t *IDVER_REG;
    volatile uint32_t *CONTROL_REG;
    volatile uint32_t *RFTCLK_SEL_REG;
    volatile uint32_t *TS_PUSH_REG;
    volatile uint32_t *TS_LOAD_VAL_REG;
    volatile uint32_t *TS_LOAD_EN_REG;
    volatile uint32_t *TS_COMP_VAL_REG;
    volatile uint32_t *TS_COMP_LEN_REG;
    volatile uint32_t *INTSTAT_RAW_REG;
    volatile uint32_t *INTSTAT_MASKED_REG;
    volatile uint32_t *INT_ENABLE_REG;
    volatile uint32_t *TS_COMP_NUDGE_REG;
    volatile uint32_t *EVENT_POP_REG;
    volatile uint32_t *EVENT_0_REG;
    volatile uint32_t *EVENT_1_REG;
    volatile uint32_t *EVENT_2_REG;
    volatile uint32_t *EVENT_3_REG;
    volatile uint32_t *TS_LOAD_HIGH_VAL_REG;
    volatile uint32_t *TS_COMP_HIGH_VAL_REG;
    volatile uint32_t *TS_ADD_VAL_REG;
    volatile uint32_t *TS_PPM_LOW_VAL_REG;
    volatile uint32_t *TS_PPM_HIGH_VAL_REG;
    volatile uint32_t *TS_NUDGE_VAL_REG;
    struct j721e_CPTS_GENF_regs GENF0_regs;
    struct j721e_CPTS_GENF_regs GENF1_regs;
    struct j721e_CPTS_GENF_regs ESTF1_regs;
};  

#endif // J721E_CPTS_REGISTERS_H