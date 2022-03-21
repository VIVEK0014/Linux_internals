#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main() {
int c,status;
c = fork();
if(c == 0) {
execl("/bin/ls","ls",NULL);
}
waitpid(c,&status,0);
printf("Parent process\n");
return 0;
}
