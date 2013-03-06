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

#include "maman-bar.h"
#include <stdio.h>

/* Function Definition */
static void maman_bar_init ( MamanBar* );
static void maman_bar_class_init ( MamanBarClass* class);

GType maman_bar_get_type (void)
{
	static GType type = 0;
	if (type == 0) {
		static const GTypeInfo info = {
			/* You fill this structure. */
			sizeof (MamanBarClass),
			NULL,   /* base_init */
			NULL,   /* base_finalize */
			maman_bar_class_init,   /* class_init */
			NULL,   /* class_finalize */
			NULL,   /* class_data */
			sizeof (MamanBar),
			0,      /* n_preallocs */
			maman_bar_init/* instance_init */
		};
		type = g_type_register_static (G_TYPE_OBJECT, "MamanBarType", &info, 0);
	}
	return type;
}

static void maman_bar_init ( MamanBar* self)
{
	self -> a = 1;
	self -> b = 2;
//	printf(" %s %d %d\n", __FUNCTION__,self->a,self->b);
}

void maman_bar_dump_all_value( MamanBar* thiz )
{
	printf(" bar->a = (%d) bar->b = (%d)\n", thiz->a, thiz->b );
}

void maman_bar_inc_all( MamanBar* thiz )
{
	thiz -> a ++;
	thiz -> b ++;
}

static void maman_bar_class_init ( MamanBarClass* class)
{
	class->incAll = maman_bar_inc_all;
}
