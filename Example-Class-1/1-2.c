
#include <stdlib.h>
#include <stdio.h>

struct A{
	int a;
	int b;
};

struct B{
	int a;
	int b;
	int c;
};

int main()
{
	struct A* pa = malloc( sizeof(struct B) );
	struct B* pb = (struct B*) pa;

	pa -> a = 1;
	pa -> b = 2;
	pb -> c = 3;
	
	printf("pb(%d,%d,%d)\n",pb->a,pb->b,pb->c );
	free( pa );
}
