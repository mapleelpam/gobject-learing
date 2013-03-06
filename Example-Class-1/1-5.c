
#include <stdlib.h>
#include <stdio.h>

#include "1-5.h"

int main()
{
	struct B* pb = malloc( sizeof(struct B) );
	pb -> c = 3;
	
	struct A* pa = (struct A*) pb; 
	pa -> a = 1;
	pa -> b = 2;

	printf("pa(%d,%d) pb(%d)\n",pa->a,pa->b,pb->c );

	free( pb );
}
