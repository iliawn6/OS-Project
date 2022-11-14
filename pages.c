#include "kernel/types.h"

#include "kernel/stat.h"

#include "user/user.h"



int
main(int argc, char *argv[])
{
    int freePages = pages();
    printf("xv6 system memory: 0x80000000 + 128*1024*1024\n");
    printf("xv6 free pages: %d * 4KB\n", freePages);

    exit(0);
}