
#include "vala.h"
#include <stdio.h>

int main (int argc, char *argv[])
{
	/* this function should be executed first. Before everything  */
	g_type_init();

	/* Create our object */
	MamanBar *bar = maman_bar_new();
	maman_bar_dumpall( bar );

	MamanBar *subbar = sub_bar_new();
	maman_bar_dumpall( subbar );
		
	MAMAN_BAR_GET_CLASS( subbar ) -> dumpall( subbar );

	return 0; 
}
