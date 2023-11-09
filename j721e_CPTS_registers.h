#ifndef J721E_CPTS_REGISTERS_H
#define J721E_CPTS_REGISTERS_H

#include <stdint.h>
#include <sys/types.h>

/****************************************************
 * switch between CPTS peripherals of the processor *
 ***************************************************/
#define USE_MCU_CPSW0_CPTS

#ifdef USE_MCU_CPSW0_CPTS
#include "j721e_CPTS_MCU_CPSW0_registers.h"
#elif defined USE_CPSW0_CPTS
#include "j721e_CPTS_CPSW0_registers.h"
#elif defined USE_NAVSS_CPTS
#include "j721e_CPTS_NAVSS_registers.h"
#endif

typedef struct j721e_CPTS_regs
{
    volatile uint32_t *CPTS_regs[CPTS_REG_COUNT];
    volatile uint32_t *GENF_regs[CPTS_GENF_REG_COUNT][CPTS_GENF_REG_MAX];
    volatile uint32_t *ESTF_regs[CPTS_GENF_REG_COUNT][CPTS_ESTF_REG_MAX];
} CPTS_regs_t;

typedef enum j721e_CPTS_reg_names
{
    IDVER_REG,
    CONTROL_REG,
    RFTCLK_SEL_REG,
    TS_PUSH_REG,
    TS_LOAD_VAL_REG,
    TS_LOAD_EN_REG,
    TS_COMP_VAL_REG,
    TS_COMP_LEN_REG,
    INTSTAT_RAW_REG,
    INTSTAT_MASKED_REG,
    INT_ENABLE_REG,
    TS_COMP_NUDGE_REG,
    EVENT_POP_REG,
    EVENT_0_REG,
    EVENT_1_REG,
    EVENT_2_REG,
    EVENT_3_REG,
    TS_LOAD_HIGH_VAL_REG,
    TS_COMP_HIGH_VAL_REG,
    TS_ADD_VAL_REG,
    TS_PPM_LOW_VAL_REG,
    TS_PPM_HIGH_VAL_REG,
    TS_NUDGE_VAL_REG,
} CPTS_reg_names_t;

typedef enum j721e_CPTS_GENF_reg_names
{
    GENF_COMP_LOW_REG,
    GENF_COMP_HIGH_REG,
    GENF_CONTROL_REG,
    GENF_LENGTH_REG,
    GENF_PPM_LOW_REG,
    GENF_PPM_HIGH_REG,
    GENF_NUDGE_REG
} CPTS_GENF_reg_names_t;

extern const size_t CPTS_GENF_START[CPTS_GENF_REG_MAX];
extern const size_t CPTS_ESTF_START[CPTS_ESTF_REG_MAX];

extern const char *j721e_CPTS_reg_strings[CPTS_REG_COUNT];
extern const char *j721e_CPTS_GENF_reg_strings[CPTS_GENF_REG_COUNT];

#endif // J721E_CPTS_REGISTERS_H