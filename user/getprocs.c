#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "fcntl.h"
#include "syscall.h"
#include "traps.h"

int 
main(int argc, char *argv[])
{
    int procs = getprocs();
    printf(1,"%d\n", procs);
    exit();
    return 0;
} 
