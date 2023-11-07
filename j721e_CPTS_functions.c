#include "j721e_CPTS_functions.h"
#include <stdio.h>

off_t alignAddress(const unsigned long addr)
{
    return addr & ~(PAGE_SIZE - 1);
}

int j721e_CPTS_init(void *addr, CPTS_t *cpts)
{
    cpts->fd = open("/dev/mem", O_RDWR | O_SYNC);
    if (cpts->fd == -1)
    {
        return -1;
    }

    size_t phys_begin = alignAddress(CPSW_CPTS_BEGIN);
    size_t phys_end = alignAddress(CPSW_CPTS_END);
    cpts->length = phys_end - phys_begin + (size_t)PAGE_SIZE;

    cpts->base = mmap(addr, cpts->length, PROT_READ | PROT_WRITE, MAP_SHARED, cpts->fd, phys_begin);
    if (cpts->base == MAP_FAILED)
    {
        close(cpts->fd);
        return -2;
    }

    return 0;
}

int j721e_CPTS_close(CPTS_t *cpts)
{
    if(munmap(cpts->base, cpts->length) == -1)
    {
        close(cpts->fd);
        return -1;
    }
    close(cpts->fd);
    return 0;
}

uint32_t j721e_read_reg(CPTS_t *cpts, CPTS_reg_names_t regName)
{
    volatile uint32_t *mem32 = (volatile uint32_t *)(cpts->base + (regName - alignAddress(CPSW_CPTS_BEGIN)));
    return *mem32;
}

void j721e_print_all_regs (CPTS_t *cpts)
{
    return;
}