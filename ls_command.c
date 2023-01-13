#include <unistd.h>
 #include<stdio.h>
int main(void) {
  char *binaryPath = "ls";
  char *arg1 = "-l";
 
  execlp(binaryPath, binaryPath, NULL);

 
  return 0;
}
