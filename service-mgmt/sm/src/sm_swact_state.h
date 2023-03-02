//
// Copyright (c) 2017,2023 Wind River Systems, Inc.
//
// SPDX-License-Identifier: Apache-2.0
//
#ifndef __SM_SWACT_STATE_H__
#define __SM_SWACT_STATE_H__

#include "sm_types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum
{
    SM_SWACT_STATE_NONE,
    SM_SWACT_STATE_START,
    SM_SWACT_STATE_END,
} SmSwactStateT;

// ****************************************************************************
// initialize mutex
// ==============
extern SmErrorT sm_swact_state_mutex_initialize ( void );
// ****************************************************************************

// ****************************************************************************
// destroy mutex
// ==============
extern SmErrorT sm_swact_state_mutex_finalize ( void );
// ****************************************************************************

// ****************************************************************************
// Swact State - Setter
// ==========================================
// ****************************************************************************
extern void sm_set_swact_state( SmSwactStateT state );

// ****************************************************************************
// Swact State - Getter
// ==========================================
extern SmSwactStateT sm_get_swact_state( void );

#ifdef __cplusplus
}
#endif

#endif
