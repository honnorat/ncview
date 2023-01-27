/*
 * Ncview by David W. Pierce.  A visual netCDF file viewer.
 * Copyright (C) 1993-2010 David W. Pierce
 *
 * This program  is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License, version 3, for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * David W. Pierce
 * 6259 Caminito Carrena
 * San Diego, CA  92122
 * dpierce@ucsd.edu
 */

/* These are the pixmaps for the following buttons:

	reverse
	back
	pause
	forward
	fast forward
*/

#include "interface/open_circle_bitmap.h"
#include "interface/closed_circle_bitmap.h"

#define reversebitmap_width 20
#define reversebitmap_height 20
#define reversebitmap_x_hot 0
#define reversebitmap_y_hot 0
static unsigned char reversebitmap_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x00, 0x03, 0x03,
   0x80, 0x83, 0x03, 0xc0, 0xc3, 0x03, 0xe0, 0xe3, 0x03, 0xf0, 0xf3, 0x03,
   0xf8, 0xfb, 0x03, 0xfc, 0xff, 0x03, 0xf8, 0xfb, 0x03, 0xf0, 0xf3, 0x03,
   0xe0, 0xe3, 0x03, 0xc0, 0xc3, 0x03, 0x80, 0x83, 0x03, 0x00, 0x03, 0x03,
   0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

#define backbitmap_width 20
#define backbitmap_height 20
#define backbitmap_x_hot 0
#define backbitmap_y_hot 0
static unsigned char backbitmap_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00,
   0x00, 0x18, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x1f, 0x00,
   0x80, 0x1f, 0x00, 0xc0, 0x1f, 0x00, 0xc0, 0x1f, 0x00, 0x80, 0x1f, 0x00,
   0x00, 0x1f, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x18, 0x00,
   0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

#define pausebitmap_width 20
#define pausebitmap_height 20
#define pausebitmap_x_hot 0
#define pausebitmap_y_hot 0
static unsigned char pausebitmap_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x39, 0x00,
   0xc0, 0x39, 0x00, 0xc0, 0x39, 0x00, 0xc0, 0x39, 0x00, 0xc0, 0x39, 0x00,
   0xc0, 0x39, 0x00, 0xc0, 0x39, 0x00, 0xc0, 0x39, 0x00, 0xc0, 0x39, 0x00,
   0xc0, 0x39, 0x00, 0xc0, 0x39, 0x00, 0xc0, 0x39, 0x00, 0xc0, 0x39, 0x00,
   0xc0, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

#define forwardbitmap_width 20
#define forwardbitmap_height 20
#define forwardbitmap_x_hot 0
#define forwardbitmap_y_hot 0
static unsigned char forwardbitmap_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00,
   0xc0, 0x00, 0x00, 0xc0, 0x01, 0x00, 0xc0, 0x03, 0x00, 0xc0, 0x07, 0x00,
   0xc0, 0x0f, 0x00, 0xc0, 0x1f, 0x00, 0xc0, 0x1f, 0x00, 0xc0, 0x0f, 0x00,
   0xc0, 0x07, 0x00, 0xc0, 0x03, 0x00, 0xc0, 0x01, 0x00, 0xc0, 0x00, 0x00,
   0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

#define ffbitmap_width 20
#define ffbitmap_height 20
#define ffbitmap_x_hot 0
#define ffbitmap_y_hot 0
static unsigned char ffbitmap_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x04, 0x00,
   0x18, 0x0c, 0x00, 0x38, 0x1c, 0x00, 0x78, 0x3c, 0x00, 0xf8, 0x7c, 0x00,
   0xf8, 0xfd, 0x00, 0xf8, 0xff, 0x01, 0xf8, 0xfd, 0x00, 0xf8, 0x7c, 0x00,
   0x78, 0x3c, 0x00, 0x38, 0x1c, 0x00, 0x18, 0x0c, 0x00, 0x08, 0x04, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

