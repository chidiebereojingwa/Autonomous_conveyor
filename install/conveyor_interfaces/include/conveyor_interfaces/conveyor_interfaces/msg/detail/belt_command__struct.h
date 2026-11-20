// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from conveyor_interfaces:msg/BeltCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "conveyor_interfaces/msg/belt_command.h"


#ifndef CONVEYOR_INTERFACES__MSG__DETAIL__BELT_COMMAND__STRUCT_H_
#define CONVEYOR_INTERFACES__MSG__DETAIL__BELT_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/BeltCommand in the package conveyor_interfaces.
typedef struct conveyor_interfaces__msg__BeltCommand
{
  float speed;
  bool stop;
} conveyor_interfaces__msg__BeltCommand;

// Struct for a sequence of conveyor_interfaces__msg__BeltCommand.
typedef struct conveyor_interfaces__msg__BeltCommand__Sequence
{
  conveyor_interfaces__msg__BeltCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} conveyor_interfaces__msg__BeltCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONVEYOR_INTERFACES__MSG__DETAIL__BELT_COMMAND__STRUCT_H_
