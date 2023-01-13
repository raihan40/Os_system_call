#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
int main(){
    int n , i;
    printf("Enter the number of child you want!");
    scanf("%d",&n);
    for(i = 0 ; i < n ; i++){
        if(fork()==0){
            printf("Parent id = %d\nChild id = %d\n",getppid(),getpid());
            exit(0);
        }

    }
    return 0;
}