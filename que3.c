/*3. Write program that returns “ls -l ” kind of structure of information from an existing file
or opend file.*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
int main()
{
 int f1;
 struct stat st;
 f1 =open ("input.txt",O_RDONLY,0775);
 stat("inpur.txt",&st);
 printf("%lu\n",st.st_size);
 printf("%lu\n",st.st_ino);
 return 0;

}

