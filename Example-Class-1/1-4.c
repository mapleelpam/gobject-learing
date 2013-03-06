
#include <stdlib.h>
#include <stdio.h>

#include "1-4.h"

int main()
{
	struct A* pa = malloc( sizeof(struct B) );
	struct B* pb = (struct B*) pa;

	pa -> a = 1;
	pa -> b = 2;
	pb -> c = 3;
	
	printf("pa(%d,%d) pb(%d)\n",pa->a,pa->b,pb->c );
	free( pa );
}
