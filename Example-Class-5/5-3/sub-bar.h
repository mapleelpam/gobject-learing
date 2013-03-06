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


/* inclusion guard */
#ifndef __SUB_BAR_H__
#define __SUB_BAR_H__

#include "maman-bar.h"
#include <glib-object.h>

#define SUB_BAR_TYPE 	(sub_bar_get_type ())

typedef struct _SubBar SubBar;
typedef struct _SubBarClass SubBarClass;

struct _SubBar {
	MamanBar parent;
	/* instance members */
	int c;
	int d;
};

struct _SubBarClass {
	MamanBarClass parent;
	/* class members */
};

GType sub_bar_get_type (void);
void sub_bar_dump_all_value( SubBar* thiz );

#endif /* __SUB_BAR_H__ */
