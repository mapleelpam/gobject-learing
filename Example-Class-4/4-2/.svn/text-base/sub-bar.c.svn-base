/*
 * Copyright/Licensing information.
 *
 * Reference:
 *
 * http://library.gnome.org/devel/gobject/unstable/howto-gobject.html
 * http://library.gnome.org/devel/gobject/unstable/chapter-gobject.html
 *
 *
 */

#include "sub-bar.h"
#include <stdio.h>

/* Function Definition */
static void sub_bar_init ( SubBar* );

GType sub_bar_get_type (void)
{
	static GType type = 0;
	if (type == 0) {
		static const GTypeInfo info = {
			/* You fill this structure. */
			sizeof (SubBarClass),
			NULL,   /* base_init */
			NULL,   /* base_finalize */
			NULL,   /* class_init */
			NULL,   /* class_finalize */
			NULL,   /* class_data */
			sizeof (SubBar),
			0,      /* n_preallocs */
			sub_bar_init/* instance_init */
		};
		type = g_type_register_static (MAMAN_BAR_TYPE, "SubBarType", &info, 0);
	}
	return type;
}

static void sub_bar_init ( SubBar* self)
{
	self -> c = 3;
	self -> d = 4;
//	printf(" %s %d %d\n", __FUNCTION__,self->c,self->d);
}

