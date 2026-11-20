// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from conveyor_interfaces:msg/BoxState.idl
// generated code does not contain a copyright notice

#include "conveyor_interfaces/msg/detail/box_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_conveyor_interfaces
const rosidl_type_hash_t *
conveyor_interfaces__msg__BoxState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd5, 0x2a, 0xb1, 0x51, 0x00, 0x98, 0x28, 0x35,
      0x39, 0xcf, 0x52, 0x73, 0xfc, 0xd6, 0xd2, 0xc6,
      0xbc, 0x90, 0x03, 0x27, 0xf2, 0x98, 0x11, 0xe5,
      0x00, 0x4d, 0x00, 0xb7, 0xb1, 0x9d, 0x56, 0x9a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char conveyor_interfaces__msg__BoxState__TYPE_NAME[] = "conveyor_interfaces/msg/BoxState";

// Define type names, field names, and default values
static char conveyor_interfaces__msg__BoxState__FIELD_NAME__box_count[] = "box_count";
static char conveyor_interfaces__msg__BoxState__FIELD_NAME__overload[] = "overload";

static rosidl_runtime_c__type_description__Field conveyor_interfaces__msg__BoxState__FIELDS[] = {
  {
    {conveyor_interfaces__msg__BoxState__FIELD_NAME__box_count, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {conveyor_interfaces__msg__BoxState__FIELD_NAME__overload, 8, 8},
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
conveyor_interfaces__msg__BoxState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {conveyor_interfaces__msg__BoxState__TYPE_NAME, 32, 32},
      {conveyor_interfaces__msg__BoxState__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 box_count\n"
  "bool overload";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
conveyor_interfaces__msg__BoxState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {conveyor_interfaces__msg__BoxState__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 29, 29},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
conveyor_interfaces__msg__BoxState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *conveyor_interfaces__msg__BoxState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
