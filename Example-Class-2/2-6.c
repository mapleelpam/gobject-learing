
/* 2-6.c */

#include <stdio.h>
#include <stdlib.h>

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
	struct A* a = (struct A*) b;
	b -> b = 2;
	a -> method_a = B_real_method_a;
	b -> method_b = B_real_method_b;
}

struct B* B_new()
{
	struct B* pb = malloc(sizeof(struct B));
	struct A* pa = (struct A*) pb;
	A_init( pa );
	B_init( pb );
	return pb;
}
int main()
{
	struct B* pb = B_new();

	((struct A*)pb) -> method_a( pb );
	pb -> method_b( pb );

};
