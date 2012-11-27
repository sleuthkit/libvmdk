/*
 * Grain data functions
 *
 * Copyright (c) 2009-2012, Joachim Metz <joachim.metz@gmail.com>
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

#if !defined( _LIBVMDK_GRAIN_DATA_H )
#define _LIBVMDK_GRAIN_DATA_H

#include <common.h>
#include <types.h>

#include "libvmdk_libcerror.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct libvmdk_grain_data libvmdk_grain_data_t;

struct libvmdk_grain_data
{
	/* The data
	 */
	uint8_t *data;

	/* The data size
	 */
	size_t data_size;
};

int libvmdk_grain_data_initialize(
     libvmdk_grain_data_t **grain_data,
     size_t data_size,
     libcerror_error_t **error );

int libvmdk_grain_data_free(
     libvmdk_grain_data_t **grain_data,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif
