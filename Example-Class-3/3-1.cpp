
#include "stdio.h"

class A{
	public:
		A(){printf("a");};
};
class B: public A{
	public:
		B(){printf("b");};
};
class C: public B{
	public:
		C(){printf("c");};
};


int main()
{
	C* c = new C;
	printf("\n");
}
