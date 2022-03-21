#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main() 
{
int p1,p2;
p1 = fork();
p2 = fork();
if(p1 == 0) 
	{
		printf("\nFirst child process's pid: %d\n Parent pid: %d\n",getpid(),getppid());
		printf("\nFirst child says hello\n");
	}
if(p2 == 0) 
	{
		printf("\nSecond child process's pid: %d",getpid());
		printf("\nSecond child says hello\n");
	}
return 0;
}
