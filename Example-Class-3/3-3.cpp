
#include "stdio.h"

class A{
	public:
		A(){va=0;};
		A(int v){va=v;};
	private:
		int va;
};
class B: public A{
	public:
		B();
		B(int);
	private:
		int vb;
};

B::B()
: A()
, vb(0)
{
	printf("hello this is B()\n");
}

B::B(int v)
: A(v)
, vb(v)
{
	printf("hello this is B(int)\n");
}

int main()
{
	B b1;
	B b2(1);
}
