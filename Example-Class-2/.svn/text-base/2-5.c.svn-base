
/* 2-5.c */

#include <stdio.h>

typedef void (*FP) ( void* );

struct A
{
	int a;
	FP  method_a;
};

struct B
{
	struct A parent;
	int b;
	FP  method_b;
};

void A_real_method_a( void* p) 
{
	struct A* this = p;
	printf("this is %s %d\n",__FUNCTION__,this->a); 
}
void B_real_method_a( void* p) 
{
	struct B* this = p;
	printf("this is %s %d\n",__FUNCTION__,this->b); 
}
void B_real_method_b( void* p) 
{
	struct B* this = p;
	printf("this is %s %d\n",__FUNCTION__,this->b); 
}

void A_init( struct A* a)
{
	a -> a = 1;
	a -> method_a = A_real_method_a;
}
void B_init( struct B* b)
{
	struct A* a = (struct A*)b;
	b -> b = 2;
	a -> method_a = B_real_method_a;
	b -> method_b = B_real_method_b;
}
int main()
{
	struct B b;
	A_init( (struct A*) &b );

	struct A* ap = (struct A*)&b;
	ap -> method_a( ap );

	B_init( (struct B*) &b );
	ap -> method_a( ap );
	b  .  method_b( &b );
};
