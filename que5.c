/*5.Write a program that creates a file with a 4K bytes free space. (Such files are called files
with holes.)*/


#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
 int fd1;
 fd1=open("Lib.txt",O_RDWR,0775);
 lseek(fd1,4096,SEEK_END);
 write(fd1,"kdc",3);

 close(fd1);

 return 0;

} 

