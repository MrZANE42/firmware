/**
 ******************************************************************************
 * @file    system-wifi.h
 * @authors Matthew McGowan
 * @date    09 February 2015
 ******************************************************************************
  Copyright (c) 2015 Spark Labs, Inc.  All rights reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation, either
  version 3 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, see <http://www.gnu.org/licenses/>.
 ******************************************************************************
 */

#ifndef SYSTEM_WIFI_H
#define	SYSTEM_WIFI_H

#include "dynalib.h"

#ifdef	__cplusplus
extern "C" {
#endif

/**
 * Indices into the module-level export table.
 */    
#define SYSTEM_WIFI_MODULE_JUMP_TABLE_INDEX_COMMUNICATION 0    
#define SYSTEM_WIFI_MODULE_JUMP_TABLE_INDEX_WIFI_RESOURCE 1
#define SYSTEM_WIFI_MODULE_JUMP_TABLE_INDEX_MODULE 2

/**
 * The static module-level export table of library jump table addresses.
 */    
extern const void* const system_part1_module[];
    

/*
 * Initialize this module. This should erase the BSS area, copy initialized
 * variables from flash to RAM.
 * Returns a pointer to the address following the statically allocated memory.
 */
void* module_pre_init();

/**
 * Called after the dynamic memory heap has been established. This function should
 * perform any final initialization of the module, such as calling constructors on static instances.
 */
void module_init();

/**
    Module-management functions
 */

DYNALIB_BEGIN(module_part1)
DYNALIB_FN(module_part1, module_pre_init)
DYNALIB_FN(module_part1, module_init)       
DYNALIB_END(module_part1)



#ifdef	__cplusplus
}
#endif

#endif	/* SYSTEM_WIFI_H */

