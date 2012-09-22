/*
 * Extent descriptor functions
 *
 * Copyright (c) 2009-2012 Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBVMDK_EXTENT_DESCRIPTOR_H )
#define _LIBVMDK_EXTENT_DESCRIPTOR_H

#include <common.h>
#include <types.h>

#include "libvmdk_libcerror.h"
#include "libvmdk_libcsplit.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct libvmdk_extent_descriptor libvmdk_extent_descriptor_t;

struct libvmdk_extent_descriptor
{
	/* The extent offset
	 */
	off64_t offset;

	/* The extent size
	 */
	size64_t size;

	/* The type
	 */
	int type;

	/* The access
	 */
	int access;
};

int libvmdk_extent_descriptor_initialize(
     libvmdk_extent_descriptor_t **extent_descriptor,
     libcerror_error_t **error );

int libvmdk_extent_descriptor_free(
     libvmdk_extent_descriptor_t **extent_descriptor,
     libcerror_error_t **error );

int libvmdk_extent_descriptor_read(
     libvmdk_extent_descriptor_t *extent_descriptor,
     const char *value_string,
     size_t value_string_size,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif
