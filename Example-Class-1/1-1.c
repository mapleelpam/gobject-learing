
#include <stdlib.h>
#include <stdio.h>

struct A{
	int a;
	int b;
};

int main()
{
	struct A* pa = malloc( sizeof(struct A) );

	printf("%x,%x,%x\n",pa, &(pa->a), &(pa->b) );
	
	free( pa );
}
