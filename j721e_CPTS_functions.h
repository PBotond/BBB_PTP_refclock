#ifndef J721E_CPTS_FUNCTIONS_H
#define J721E_CPTS_FUNCTIONS_H

#include "j721e_CPTS_registers.h"
#include <stdint.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>

#define PAGE_SIZE sysconf(_SC_PAGESIZE)

typedef struct j721e_CPTS
{
    struct j721e_CPTS_regs regs;
    void *base;
    int fd;
    size_t length;
} CPTS_t;

off_t alignAddress(const unsigned long addr);

int j721e_CPTS_init(void *addr, CPTS_t *cpts);

int j721e_CPTS_close(CPTS_t *cpts);

uint32_t j721e_read_reg(CPTS_t *cpts, CPTS_reg_names_t regName);

void j721e_print_all_regs(CPTS_t *cpts);

#endif // J721E_CPTS_FUNCTIONS_H
