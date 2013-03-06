
#include <stdlib.h>
#include <stdio.h>

struct A{
	int a;
};

struct B{
	short b;
	short c;
};

struct C{
	char low_b;
	char hi_b;
	char low_c;
	char hi_c;
};

int main()
{
	struct A* pa = malloc( sizeof(struct A) );
	struct B* pb = (struct B*) pa;
	struct C* pc = (struct C*) pa;

	pc -> hi_b = 0x12;
	pc -> low_b = 0x34;
	pc -> hi_c = 0x56;
	pc -> low_c = 0x78;
	
	printf("pb->b(0x%x)  pb->c(0x%x)\n",pb->b,pb->c );
	printf("pa->a(0x%x)\n",pa->a );

	free( pa );
}
