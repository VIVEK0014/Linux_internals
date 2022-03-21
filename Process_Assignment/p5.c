#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>
int main() 
{
int f1, c1;
c1 = fork();
char c[10];
if(c1 == 0) 
{
	printf("Entering child process\nreading input.txt into buffer\n");
	f1 = open("input.txt",O_RDONLY,NULL);
	read(f1,c,5);
	printf("input.txt: %s\n",c);
	close(f1);
}
else 
{
	printf("Child terminated\n");
	wait(NULL);
}
return 0;
}

