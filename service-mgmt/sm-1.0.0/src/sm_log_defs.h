//
// Copyright (c) 2014 Wind River Systems, Inc.
//
// SPDX-License-Identifier: Apache-2.0
//
#ifndef __SM_LOG_DEFINITIONS_H__
#define __SM_LOG_DEFINITIONS_H__

#include <stdbool.h>

#include "sm_limits.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef char SmLogNodeNameT[SM_NODE_NAME_MAX_CHAR];

typedef char SmLogDomainNameT[SM_LOG_DOMAIN_NAME_MAX_CHAR];

typedef char SmLogServiceGroupNameT[SM_LOG_SERVICE_GROUP_NAME_MAX_CHAR];

typedef char SmLogEntityNameT[SM_LOG_ENTITY_NAME_MAX_CHAR];

typedef enum
{
    SM_LOG_EVENT_TYPE_UNKNOWN,
    SM_LOG_EVENT_TYPE_COMMUNICATIONS_ALARM,
    SM_LOG_EVENT_TYPE_PROCESSING_ERROR_ALARM,
    SM_LOG_EVENT_TYPE_ENVIRONMENTAL_ALARM,
    SM_LOG_EVENT_TYPE_QUALITY_OF_SERVICE_ALARM,
    SM_LOG_EVENT_TYPE_EQUIPMENT_ALARM,
    SM_LOG_EVENT_TYPE_INTEGRITY_VIOLATION,
    SM_LOG_EVENT_TYPE_OPERATIONAL_VIOLATION,
    SM_LOG_EVENT_TYPE_PHYSICAL_VIOLATION,
    SM_LOG_EVENT_TYPE_SECURITY_SERVICE_VIOLATION,
    SM_LOG_EVENT_TYPE_MECHANISM_VIOLATION,
    SM_LOG_EVENT_TYPE_TIME_DOMAIN_VIOLATION,
    SM_LOG_EVENT_TYPE_MAX
} SmLogEventTypeT;

typedef enum
{
    SM_LOG_UNKNOWN,
    SM_LOG_SERVICE_GROUP_STATE,
    SM_LOG_SERVICE_GROUP_REDUNDANCY,
    SM_LOG_SOFTWARE_MODIFICATION,
    SM_LOG_COMMUNICATION_FAILURE,
    SM_LOG_SERVICE_STATE,
    SM_LOG_NODE_STATE,
    SM_LOG_MAX
} SmLogT;

#define SM_LOG_SERVICE_GROUP_STATE_LOG_ID           "401.001"
#define SM_LOG_SERVICE_GROUP_REDUNDANCY_LOG_ID      "401.002"
#define SM_LOG_SOFTWARE_MODIFICATION_LOG_ID         "401.004"
#define SM_LOG_COMMUNICATION_FAILURE_LOG_ID         "401.005"
#define SM_LOG_SERVICE_STATE_LOG_ID                 "401.006"
#define SM_LOG_NODE_STATE_LOG_ID                    "401.007"

#ifdef __cplusplus
}
#endif

#endif // __SM_LOG_DEFINITIONS_H__
