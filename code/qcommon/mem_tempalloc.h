/*
===========================================================================
Copyright (C) 2015 the OpenMoHAA team

This file is part of OpenMoHAA source code.

OpenMoHAA source code is free software; you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 2 of the License,
or (at your option) any later version.

OpenMoHAA source code is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with OpenMoHAA source code; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
===========================================================================
*/

// mem_tempalloc.h: Fast temporary memory manager

#ifndef __MEM_TEMPALLOC_H__
#define __MEM_TEMPALLOC_H__

class MEM_TempAlloc {
	unsigned char *m_CurrentMemoryBlock;
	size_t m_CurrentMemoryPos;

public:
	MEM_TempAlloc();

	void *Alloc( size_t len );
	void FreeAll( void );
};

#endif // __MEM_TEMPALLOC_H__
