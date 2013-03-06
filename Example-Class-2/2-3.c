
#include <stdio.h>

#define ERROR 1


typedef void (*FP) ( void* );

struct A
{
	int a;
	int b;
	FP  method;
};
void a_real_method( void* p) 
{
	struct A* this = p;
	printf("%d,%d\n",this->a,this->b); 
}
/*
void a_real_method(struct A* this) 
{ 
	printf("%d,%d\n",this->a,this->b); 
}*/

int main()
{
	struct A a;
	a.a = 1;
	a.b = 2;
	a.method = a_real_method;
	a.method( &a );
};
