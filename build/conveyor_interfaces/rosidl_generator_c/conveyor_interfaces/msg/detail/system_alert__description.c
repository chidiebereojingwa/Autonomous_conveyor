// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from conveyor_interfaces:msg/SystemAlert.idl
// generated code does not contain a copyright notice

#include "conveyor_interfaces/msg/detail/system_alert__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_conveyor_interfaces
const rosidl_type_hash_t *
conveyor_interfaces__msg__SystemAlert__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x54, 0x03, 0x74, 0xbb, 0x07, 0x1a, 0xf4, 0xea,
      0x11, 0x9d, 0x34, 0xb5, 0x5c, 0x23, 0x67, 0xbe,
      0xe3, 0x67, 0x88, 0x1f, 0xf1, 0x5f, 0x57, 0x56,
      0x50, 0x73, 0x3d, 0xa8, 0xb8, 0xdb, 0xda, 0xba,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char conveyor_interfaces__msg__SystemAlert__TYPE_NAME[] = "conveyor_interfaces/msg/SystemAlert";

// Define type names, field names, and default values
static char conveyor_interfaces__msg__SystemAlert__FIELD_NAME__level[] = "level";
static char conveyor_interfaces__msg__SystemAlert__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field conveyor_interfaces__msg__SystemAlert__FIELDS[] = {
  {
    {conveyor_interfaces__msg__SystemAlert__FIELD_NAME__level, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {conveyor_interfaces__msg__SystemAlert__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
conveyor_interfaces__msg__SystemAlert__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {conveyor_interfaces__msg__SystemAlert__TYPE_NAME, 35, 35},
      {conveyor_interfaces__msg__SystemAlert__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string level\n"
  "string message";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
conveyor_interfaces__msg__SystemAlert__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {conveyor_interfaces__msg__SystemAlert__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 27, 27},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
conveyor_interfaces__msg__SystemAlert__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *conveyor_interfaces__msg__SystemAlert__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
