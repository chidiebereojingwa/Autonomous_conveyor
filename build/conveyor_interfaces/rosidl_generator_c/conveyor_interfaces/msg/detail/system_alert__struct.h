// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from conveyor_interfaces:msg/SystemAlert.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "conveyor_interfaces/msg/system_alert.h"


#ifndef CONVEYOR_INTERFACES__MSG__DETAIL__SYSTEM_ALERT__STRUCT_H_
#define CONVEYOR_INTERFACES__MSG__DETAIL__SYSTEM_ALERT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'level'
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SystemAlert in the package conveyor_interfaces.
typedef struct conveyor_interfaces__msg__SystemAlert
{
  rosidl_runtime_c__String level;
  rosidl_runtime_c__String message;
} conveyor_interfaces__msg__SystemAlert;

// Struct for a sequence of conveyor_interfaces__msg__SystemAlert.
typedef struct conveyor_interfaces__msg__SystemAlert__Sequence
{
  conveyor_interfaces__msg__SystemAlert * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} conveyor_interfaces__msg__SystemAlert__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONVEYOR_INTERFACES__MSG__DETAIL__SYSTEM_ALERT__STRUCT_H_
