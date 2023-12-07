#include "j721e_CPTS_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <stdbool.h>

bool running = 1;
void terminate(int signum)
{
    running = 0;
}

int main(int argc, char *argv[])
{
    struct sigaction action;
    memset(&action, 0, sizeof(struct sigaction));
    action.sa_handler = terminate;
    sigaction(SIGINT, &action, NULL);
    int opt;
    enum modes
    {
        mode_printHelp,
        mode_printAll,
        mode_monitorFifo
    } mode = mode_monitorFifo;

    while ((opt = getopt(argc, argv, "haf")) != -1)
    {
        switch (opt)
        {
        case 'h':
            mode = mode_printHelp;
            break;
        case 'a':
            mode = mode_printAll;
            break;
        case 'f':
            mode = mode_monitorFifo;
            break;
        default:
            printf("Usage: %s [-h]\n", argv[0]);
            printf("  -h: help\n");
            return -1;
        }
    }

    if (mode_printHelp == mode)
    {
        printHelp();
        exit(EXIT_SUCCESS);
    }

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

    switch (mode)
    {
    case mode_printAll:
        j721e_CPTS_print_all_regs(&cpts);
        break;
    case mode_monitorFifo:
        printf("Monitoring event FIFO\n");
        while (running)
        {
            static int eventRegs[4], lastRegs[4];
            for (size_t i = 0; i < 4; i++)
            {
                eventRegs[i] = j721e_CPTS_read_reg(&cpts, i + EVENT_0_REG);
            }
            if (memcmp(eventRegs, lastRegs, sizeof(eventRegs)) != 0)
            {
                for (size_t i = 0; i < 4; i++)
                {
                    printf("%s: 0x%08X ", j721e_CPTS_reg_strings[i + EVENT_0_REG], eventRegs[i]);
                }
                printf("\n");
                memcpy(lastRegs, eventRegs, sizeof(eventRegs));
            }
        }
        break;
    }

    if (j721e_CPTS_close(&cpts) == -1)
    {
        perror("munmap failed\n");
        return -1;
    }
    return 0;
}