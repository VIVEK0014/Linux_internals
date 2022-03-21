#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

inline void print1();
inline void print2();
inline void print3();
int main() 
{
	atexit(print1);
	atexit(print2);
	atexit(print3);
	return 0;
}

void print1() 
{
	printf("Function 1\n");
}
void print2() 
{
	printf("Function 2\n");
}
void print3() 
{
	printf("Function 3\n");
}

