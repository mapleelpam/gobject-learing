
#include <stdio.h>

#include "maman-bar.h"
#include "sub-bar.h"

int main (int argc, char *argv[])
{
	g_type_init();

	/* Create our object */
	MamanBar *bar = g_object_new (MAMAN_BAR_TYPE, NULL);

	maman_bar_dump_all_value( bar );
	MAMAN_BAR_GET_CLASS( bar ) -> incAll(bar);
	maman_bar_dump_all_value( bar );
	

	SubBar *subbar = g_object_new (SUB_BAR_TYPE, NULL);
	sub_bar_dump_all_value( subbar );
	MAMAN_BAR_GET_CLASS( subbar ) -> incAll( subbar );
	sub_bar_dump_all_value( subbar );
	

	return 0; 
}
