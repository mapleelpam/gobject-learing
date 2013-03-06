
#include "stdio.h"

class A{
	public:
		A(){printf("a");};
		A(int){printf("A");};
};
class B: public A{
	public:
		B(){printf("b");};
		B(int){printf("B");};
};
class C: public B{
	public:
		C(){printf("c");};
		C(int){printf("C");};
};


int main()
{
//	C* c1 = new C;
	C* c2 = new C(1);
	printf("\n");
}
