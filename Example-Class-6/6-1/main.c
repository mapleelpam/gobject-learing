
#include "maman-bar.h"
#include <stdio.h>

int main (int argc, char *argv[])
{
	/* this function should be executed first. Before everything  */
	g_type_init();

	/* Create our object */
	MamanBar *bar = maman_bar_new();
	maman_bar_dumpall( bar );

	return 0; 
}
