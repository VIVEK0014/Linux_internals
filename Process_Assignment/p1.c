# include <stdio.h>
# include <unistd.h>
# include <sys/types.h>
# include <fcntl.h>

int main()
{
	int fd = open("./exec1",O_RDONLY);
	printf("in test3 fd = %d\n",fd);
}
