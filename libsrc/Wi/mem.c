/*
 *  mem.c
 *
 *  $Id$
 *
 *  This file is part of the OpenLink Software Virtuoso Open-Source (VOS)
 *  project.
 *
 *  Copyright (C) 1998-2011 OpenLink Software
 *
 *  This project is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation; only version 2 of the License, dated June 1991.
 *
 *  This program is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 *  General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 *
 */

#include "sqlnode.h"
#include "arith.h"
#include "simd.h"


void
memzero (void *ptr, int len)
{
  memset (ptr, 0, len);
}


void
memset_16 (void *ptr, unsigned char fill, int len)
{
  memset (ptr, fill, len);
}


void
int_fill (int *ptr, int n, int len)
{
  unsigned int inx = 0;
  for (inx = inx; inx < len; inx++)
    ptr[inx] = n;
}


void
int64_fill (int64 * ptr, int64 n, int len)
{
  unsigned int inx = 0;
  for (inx = inx; inx < len; inx++)
    ptr[inx] = n;
}


void
int64_fill_nt (int64 * ptr, int64 n, int len)
{
  unsigned int inx = 0;
  for (inx = inx; inx < len; inx++)
    ptr[inx] = n;
}

void
int_asc_fill (int *ptr, int len, int start)
{
  unsigned int inx;
  for (inx = 0; inx < len; inx++)
    ptr[inx] = inx + start;
}


#define cpy(dtp) \
  {*(dtp*)target = *(dtp*)source; target += sizeof (dtp); source += sizeof (dtp);}

#define D_cpy(dtp) \
  { target -= sizeof (dtp); source -= sizeof (dtp); *(dtp*)target = *(dtp*)source;}

void
memcpy_16 (void *t, const void *s, size_t len)
{
  memcpy (t, s, len);
}


void
memcpy_16_nt (void *t, const void *s, size_t len)
{
  memcpy (t, s, len);
}

void
memmove_16 (void *t, const void *s, size_t len)
{
  memmove (t, s, len);
}



unsigned int64
rdtsc ()
{
    return 0;
}