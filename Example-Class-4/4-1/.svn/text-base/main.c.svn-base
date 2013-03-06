
#include "maman-bar.h"
#include <stdio.h>

int main (int argc, char *argv[])
{
	/* this function should be executed first. Before everything  */
	g_type_init();

	/* Create our object */
	MamanBar *bar = g_object_new (MAMAN_TYPE_BAR, NULL);

	printf(" bar->a = (%d) bar->b = (%d)\n", bar->a, bar->b );
	return 0; 
}
