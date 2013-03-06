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

#define MAMAN_BAR_TYPE                  (maman_bar_get_type ())
#define MAMAN_BAR_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), MANAN_BAR_TYPE, MamanBarClass))

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

	void (* incAll) ( MamanBar* );
};

GType maman_bar_get_type (void);
void maman_bar_dump_all_value( MamanBar* thiz );

#endif /* __MAMAN_BAR_H__ */
