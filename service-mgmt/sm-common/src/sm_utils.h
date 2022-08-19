//
// Copyright (c) 2014 Wind River Systems, Inc.
//
// SPDX-License-Identifier: Apache-2.0
//
#ifndef __SM_UTILS_H__
#define __SM_UTILS_H__

#include <stdbool.h>

#include "sm_types.h"

#ifdef __cplusplus
extern "C" {
#endif

// ****************************************************************************
// Utils - Process Running
// =======================
extern bool sm_utils_process_running( const char* pid_filename );
// ****************************************************************************

// ****************************************************************************
// Utils - Set Pid File
// ====================
extern bool sm_utils_set_pid_file( const char* pid_filename );
// ****************************************************************************

// ****************************************************************************
// Utils - Boot Complete
// =====================
extern bool sm_utils_boot_complete( void );
// ****************************************************************************

// ****************************************************************************
// Utils - Set Boot Complete
// =========================
extern SmErrorT sm_utils_set_boot_complete( void );
// ****************************************************************************

// ****************************************************************************
// Utils - Indicate Degraded
// =========================
extern SmErrorT sm_utils_indicate_degraded( void );
// ****************************************************************************

// ****************************************************************************
// Utils - Clear Degraded
// ======================
extern SmErrorT sm_utils_clear_degraded( void );
// ****************************************************************************

#ifdef __cplusplus
}
#endif

#endif // __SM_UTILS_H__
