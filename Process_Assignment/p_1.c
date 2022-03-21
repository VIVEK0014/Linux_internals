#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main() 
{
int fd;
fd = open("input.txt",O_RDONLY,NULL);
printf("FD: %d\n",fd);
execl("q2", "./q2", "", NULL);
return 0;
}
