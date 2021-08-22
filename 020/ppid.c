/**
 * Desc: A simple program that prints at stdout the PID and PPID
 */

#include <unistd.h>
#include <stdio.h>

int main(void)
{
        pid_t ppid;
        pid_t pid;

        ppid = getppid();
        pid = getpid();

        printf("The PPID of this process is %u\n", ppid);
        printf("The PID of this process is %u\n", pid);

        return(0);
}