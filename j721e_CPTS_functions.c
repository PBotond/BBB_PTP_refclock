#include "j721e_CPTS_functions.h"

size_t alignAddress(const size_t addr)
{
    return addr & ~(PAGE_SIZE - 1);
}

size_t makeOffset(const size_t addr)
{
    return addr - alignAddress(addr);
}

int j721e_CPTS_init(void *addr, CPTS_t *cpts)
{
    cpts->fd = open("/dev/mem", O_RDWR | O_SYNC);
    if (cpts->fd == -1)
    {
        return -1;
    }

    size_t phys_begin = alignAddress(CPTS_BEGIN);
    size_t phys_end = alignAddress(CPTS_END);
    cpts->length = phys_end - phys_begin + (size_t)PAGE_SIZE;

    cpts->base = mmap(addr, cpts->length, PROT_READ | PROT_WRITE, MAP_SHARED, cpts->fd, phys_begin);
    if (cpts->base == MAP_FAILED)
    {
        close(cpts->fd);
        return -2;
    }

    cpts->regs.CPTS_regs[0] = (volatile uint32_t *)(cpts->base + makeOffset(CPTS_BEGIN));

    for (size_t i = 0; i < CPTS_GENF_REG_MAX; i++)
    {
        cpts->regs.GENF_regs[i][0] = (volatile uint32_t *)(cpts->base + makeOffset(CPTS_GENF_START[i]));
    }

    for (size_t i = 0; i < CPTS_ESTF_REG_MAX; i++)
    {
        cpts->regs.ESTF_regs[i][0] = (volatile uint32_t *)(cpts->base + makeOffset(CPTS_ESTF_START[i]));
    }

    return 0;
}

int j721e_CPTS_close(CPTS_t *cpts)
{
    if (munmap(cpts->base, cpts->length) == -1)
    {
        close(cpts->fd);
        return -1;
    }
    close(cpts->fd);
    return 0;
}

uint32_t j721e_CPTS_read_reg(CPTS_t *cpts, CPTS_reg_names_t regName)
{
    return cpts->regs.CPTS_regs[0][regName];
}

void j721e_CPTS_print_all_regs(CPTS_t *cpts)
{
    for (size_t i = 0; i < CPTS_REG_COUNT; i++)
    {
        printf("%s: 0x%08X\n", j721e_CPTS_reg_strings[i], j721e_CPTS_read_reg(cpts, i));
    }

    return;
}