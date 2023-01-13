#include<stdio.h>
#include<unistd.h>
int main(){
	printf("Process id is %d",getid());
	printf("Parent id is %d",getpid());
	return 0;
}
