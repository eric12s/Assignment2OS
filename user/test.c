#include "kernel/param.h"
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fs.h"
#include "kernel/fcntl.h"
#include "kernel/syscall.h"
#include "kernel/memlayout.h"
#include "kernel/riscv.h"


int
main(int argc, char *argv[]) {
    int pid = fork();
    if(pid != 0){
        printf("pid = %d\n",pid);
        exit(pid);
    }
    int pid2 = fork();
    if(pid2 != 0){
        printf("pid2 = %d\n",pid2);
        exit(pid2);
    }

    printf("first cpu: %d\n", cpu_process_count(0));
    printf("second cpu: %d\n", cpu_process_count(1));

    exit(0);
}