/*	SCCS Id: @(#)gold.h	1.3	87/07/14
/* Copyright (c) Stichting Mathematisch Centrum, Amsterdam, 1985. */
/* gold.h - version 1.0.2 */

struct gold {
	struct gold *ngold;
	xchar gx,gy;
	long amount;
};

extern struct gold *fgold;
struct gold *g_at();
#define newgold()	(struct gold *) alloc(sizeof(struct gold))
