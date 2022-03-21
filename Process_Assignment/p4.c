#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main() 
{
int a,b;
a = fork();
if(a == 0) 
{
printf("Child pid: %d\n",getpid());
execl("k", "./k", "a b c d", "e f g h" ,NULL);
}
else 
{
printf("Parent waiting for pid: %d\n",waitpid(a,&b,0));
}
return 0;
}
