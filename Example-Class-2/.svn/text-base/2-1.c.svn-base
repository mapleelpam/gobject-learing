
#include <stdio.h>

typedef void (*FP) ( void );

void hello() { printf("hello "); }

int main()
{
	void world() { printf("world\n"); }

	FP fp = hello;
	fp();
	fp = world;
	fp();
};
