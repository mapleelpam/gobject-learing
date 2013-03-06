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
#ifndef __MAMAN_BAR_H__
#define __MAMAN_BAR_H__

#include <glib-object.h>

#define MAMAN_TYPE_BAR                  (maman_bar_get_type ())

typedef struct _MamanBar MamanBar;
typedef struct _MamanBarClass MamanBarClass;

struct _MamanBar {
	GObject parent;
	/* instance members */
	int a;
	int b;
};

struct _MamanBarClass {
	GObjectClass parent;
	/* class members */
};

GType maman_bar_get_type (void);
void maman_bar_dump_all_value( MamanBar* thiz );

#endif /* __MAMAN_BAR_H__ */
