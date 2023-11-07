#ifndef J721E_CPTS_FUNCTIONS_H
#define J721E_CPTS_FUNCTIONS_H

#include "j721e_CPTS_registers.h"
#include <stdint.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>

#define PAGE_SIZE sysconf(_SC_PAGESIZE)

struct j721e_CPTS
{
    struct j721e_CPTS_regs regs;
    void* base;
    int fd;
    size_t length;
};

off_t alignAddress(const unsigned long addr);

int j721e_CPTS_init(void *addr, struct j721e_CPTS *cpts);

int j721e_CPTS_close(struct j721e_CPTS *cpts);

#endif // J721E_CPTS_FUNCTIONS_H
