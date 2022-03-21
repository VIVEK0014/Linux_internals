#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
int main(int argc, char *argv[]) 
{
	int i;
	printf("File name: %s\n", argv[0]);
	printf("Args: %d\n",argc);
	for(i=1;i<argc;i++) 
	{
		printf("%s",argv[i]);
	}
	printf("\n");
	return 0;
}
