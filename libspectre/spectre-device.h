/* This file is part of Libspectre.
 *
 * Copyright (C) 2007 Albert Astals Cid <aacid@kde.org>
 * Copyright (C) 2007 Carlos Garcia Campos <carlosgc@gnome.org>
 *
 * Libspectre is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * Libspectre is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef SPECTRE_DEVICE_H
#define SPECTRE_DEVICE_H

#include <libspectre/spectre-macros.h>

#include "ps.h"

SPECTRE_BEGIN_DECLS

typedef struct SpectreDevice SpectreDevice;

SpectreDevice *spectre_device_new    (struct document *doc);
void           spectre_device_render (SpectreDevice   *device,
				      unsigned int     page,
				      double           scale,
				      unsigned int     rotation,
				      double           x_dpi,
				      double           y_dpi,
				      int              width,
				      int              height,
				      unsigned char  **page_data,
				      int             *row_length);
void           spectre_device_free   (SpectreDevice   *device);


SPECTRE_END_DECLS

#endif /* SPECTRE_DEVICE_H */
