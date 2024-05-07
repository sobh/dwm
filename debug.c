/* See LICENSE file for copyright and license details. */
#include "debug.h"

static Clr *dbg_scheme;

void
dbg_drw_rect(Drw *drw, int x, int y, unsigned int w, unsigned int h, int filled, int invert)
{
	drw_setscheme(drw, dbg_scheme);
	drw_rect(drw, x, y, w, h, filled, invert);
}

void
dbg_init(Drw *drw)
{
	const char col_red[]          = "#FF0000";
	const char col_yellow[]       = "#FFFF00";
        const char *dbg_color[] = {col_red, col_yellow, col_red};

        dbg_scheme = drw_scm_create(drw, dbg_color, 3);
}
void
dbg_cleanup(void)
{
	free(dbg_scheme);
}
