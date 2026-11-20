// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from conveyor_interfaces:msg/BoxState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "conveyor_interfaces/msg/box_state.h"


#ifndef CONVEYOR_INTERFACES__MSG__DETAIL__BOX_STATE__STRUCT_H_
#define CONVEYOR_INTERFACES__MSG__DETAIL__BOX_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/BoxState in the package conveyor_interfaces.
typedef struct conveyor_interfaces__msg__BoxState
{
  int32_t box_count;
  bool overload;
} conveyor_interfaces__msg__BoxState;

// Struct for a sequence of conveyor_interfaces__msg__BoxState.
typedef struct conveyor_interfaces__msg__BoxState__Sequence
{
  conveyor_interfaces__msg__BoxState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} conveyor_interfaces__msg__BoxState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONVEYOR_INTERFACES__MSG__DETAIL__BOX_STATE__STRUCT_H_
