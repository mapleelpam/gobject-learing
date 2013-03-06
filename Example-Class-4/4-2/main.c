
#include <stdio.h>

#include "maman-bar.h"
#include "sub-bar.h"

int main (int argc, char *argv[])
{
	g_type_init();

	/* Create our object */
	MamanBar *bar = g_object_new (MAMAN_BAR_TYPE, NULL);

	printf(" bar->a = (%d) bar->b = (%d)\n", bar->a, bar->b );

	SubBar *subbar = g_object_new (SUB_BAR_TYPE, NULL);

	printf(" ((MamanBar*)subbar)->a = (%d) ((MamanBar*)subbar)->b = (%d)\n", ((MamanBar*)subbar)->a, ((MamanBar*)subbar)->b );
	printf(" subbar->a = (%d) subbar->b = (%d)\n", subbar->c, subbar->d );
	return 0; 
}
