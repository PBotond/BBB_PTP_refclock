#include "j721e_CPTS_functions.h"
#include <stdio.h>

int main(void)
{
    struct j721e_CPTS cpts;
    switch (j721e_CPTS_init(NULL, &cpts))
    {
    case -1:
        perror("open failed\n");
        return -1;
    case -2:
        perror("mmap failed\n");
        return -2;
    default:
        break;
    }

    size_t phys_offset = CPSW_CPTS_BEGIN - alignAddress(CPSW_CPTS_BEGIN);
    volatile uint32_t *mem32 = (volatile uint32_t *)cpts.base + phys_offset;
    printf("value: 0x%08X\n", mem32[0]);

    if (j721e_CPTS_close(&cpts) == -1)
    {
        perror("munmap failed\n");
        return -1;
    }
    return 0;
}