
#include <stdio.h>

#define ERROR 1

typedef void (*FP) ( void );


void error_test( FP callback )
{
	if( ERROR ){
		callback();
	}
}

int main()
{
	void error() { printf("error happened\n"); }

	error_test( error );
};
