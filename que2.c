/*2.Write a program that demonstrates repositioning of file offset using SEEK_SET,
SEEK_END and SEEK_END.*/


#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
 int fd1;
 char k[50];
 fd1=open("/home/vivek/linux_assignment/data1.txt",O_RDONLY,0775);
 lseek(fd1,0,SEEK_END);
 read(fd1,k,30);
 printf("%s\n",k);

 lseek(fd1,0,SEEK_SET);
 read(fd1,k,17);
 printf("%s\n",k);

 lseek(fd1,10,SEEK_CUR);
 read(fd1,k,7);
 printf("%s\n",k);

 close(fd1);

 return 0;

} 

