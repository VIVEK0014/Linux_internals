#include <stdio.h>
#include <unistd.h>
int main() 
{
printf("Executing main\nCalling execl\n");
execl("/usr/bin/pstree", "pstree", NULL);
return 0;
}
