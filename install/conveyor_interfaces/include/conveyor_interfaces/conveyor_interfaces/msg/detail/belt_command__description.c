// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from conveyor_interfaces:msg/BeltCommand.idl
// generated code does not contain a copyright notice

#include "conveyor_interfaces/msg/detail/belt_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_conveyor_interfaces
const rosidl_type_hash_t *
conveyor_interfaces__msg__BeltCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcc, 0x3d, 0x0b, 0x3a, 0xf1, 0x91, 0x32, 0x8c,
      0xcf, 0x76, 0x09, 0xaf, 0x5b, 0x65, 0x9b, 0x1f,
      0x90, 0x3b, 0x67, 0x45, 0xbc, 0xd4, 0x37, 0xde,
      0x0e, 0x7d, 0x00, 0xc7, 0xcb, 0xe6, 0x7c, 0x88,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char conveyor_interfaces__msg__BeltCommand__TYPE_NAME[] = "conveyor_interfaces/msg/BeltCommand";

// Define type names, field names, and default values
static char conveyor_interfaces__msg__BeltCommand__FIELD_NAME__speed[] = "speed";
static char conveyor_interfaces__msg__BeltCommand__FIELD_NAME__stop[] = "stop";

static rosidl_runtime_c__type_description__Field conveyor_interfaces__msg__BeltCommand__FIELDS[] = {
  {
    {conveyor_interfaces__msg__BeltCommand__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {conveyor_interfaces__msg__BeltCommand__FIELD_NAME__stop, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
conveyor_interfaces__msg__BeltCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {conveyor_interfaces__msg__BeltCommand__TYPE_NAME, 35, 35},
      {conveyor_interfaces__msg__BeltCommand__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 speed\n"
  "bool stop";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
conveyor_interfaces__msg__BeltCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {conveyor_interfaces__msg__BeltCommand__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 23, 23},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
conveyor_interfaces__msg__BeltCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *conveyor_interfaces__msg__BeltCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
