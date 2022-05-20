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
     pid = fork();
    if(pid != 0){
        printf("pid = %d\n",pid);
        exit(pid);
    }
     pid = fork();
    if(pid != 0){
        printf("pid = %d\n",pid);
        exit(pid);
    }



printf("cpu 0: %d\n", cpu_process_count(0));
printf("cpu 1: %d\n", cpu_process_count(1));
printf("cpu 2: %d\n", cpu_process_count(2));

    exit(0);
}