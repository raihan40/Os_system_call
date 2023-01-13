#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
 
int main() {
 
        pid_t p = fork();
 
        if (p == 0) {
 
                char *path = "/usr/bin/gcc";
                char *arg1 = "gcc";
                /*char *arg2 = "-o";
                char *arg3 = "./a.out";*/
                char *arg4 = "test.c";
 
                execl(path, arg1, arg4, NULL);
        }
        else if (p > 0) {
 
                wait(NULL);
 
                char *path = "./a.out";
                char *arg = "a.out";
 
                execl(path, arg, NULL);
        }
        
        return 0;
}
