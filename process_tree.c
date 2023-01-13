#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>
void p1();
void p3();
void p2();
int main()
{
 int i = 0;
 pid_t id;
  for(i = 0 ; i < 3 ;i++){
    id = fork();
    if(i == 0 && id == 0){
        printf("\n1Parent id = %d Child id = %d\n",getppid(),getpid());
        p1();
        exit(0);
    }
    if(i == 1 && id == 0){
        printf("\n2Parent id = %d Child id = %d\n",getppid(),getpid());
        exit(0);
    }
    if(i == 2 && id == 0){
        printf("\n3Parent id = %d Child id = %d\n",getppid(),getpid());
        p2();
        exit(0);
    }
  }

    wait(NULL);
    wait(NULL);
    wait(NULL);
  printf("\nparent id = %d \n",getpid());

}

void p1(){

    int i = 0;
    pid_t id ;
    for(i = 0 ; i < 2 ;i++){
      id = fork();
    if(i == 0 && id == 0){
        printf("\np1 Parent id = %d Child id = %d\n",getppid(),getpid());
        p3();
        exit(0);
    }
    if(i == 1 && id == 0){
        printf("\np1 Parent id = %d Child id = %d\n",getppid(),getpid());
        exit(0);
    }
  }
   wait(NULL);

}
void p3(){
   
    if(fork()== 0){
        printf("\np3 Parent id = %d Child id = %d\n",getppid(),getpid());
        exit(0);
    }
  wait(NULL);
}

void p2(){
     if(fork()== 0){
        printf("\np2 Parent id = %d Child id = %d\n",getppid(),getpid());
        exit(0);
    }
  wait(NULL);
}