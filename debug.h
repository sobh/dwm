/* See LICENSE file for copyright and license details. */
#ifndef DEBUG_H
#define DEBUG_H

/* ---- Includes ------------------------------------------------------------ */
#include "drw.h"

/* ---- Functions ----------------------------------------------------------- */
void dbg_drw_rect(Drw *drw, int x, int y, unsigned int w, unsigned int h, int filled, int invert);
void dbg_init(Drw *drw);
void dbg_cleanup(void);
#endif /* DEBUG_H */
