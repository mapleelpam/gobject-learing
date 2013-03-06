
#include <stdio.h>

#include "maman-bar.h"

int main (int argc, char *argv[])
{
	g_type_init();

	/* Create our object */
	MamanBar *bar = g_object_new (MAMAN_BAR_TYPE, NULL);

	maman_bar_dump_all_value( bar );
	MAMAN_BAR_GET_CLASS( bar ) -> incAll(bar);
	maman_bar_dump_all_value( bar );
	return 0; 
}
