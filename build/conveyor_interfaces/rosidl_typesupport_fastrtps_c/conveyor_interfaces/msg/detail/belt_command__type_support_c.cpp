// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from conveyor_interfaces:msg/BeltCommand.idl
// generated code does not contain a copyright notice
#include "conveyor_interfaces/msg/detail/belt_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "conveyor_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "conveyor_interfaces/msg/detail/belt_command__struct.h"
#include "conveyor_interfaces/msg/detail/belt_command__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _BeltCommand__ros_msg_type = conveyor_interfaces__msg__BeltCommand;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conveyor_interfaces
bool cdr_serialize_conveyor_interfaces__msg__BeltCommand(
  const conveyor_interfaces__msg__BeltCommand * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: stop
  {
    cdr << (ros_message->stop ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conveyor_interfaces
bool cdr_deserialize_conveyor_interfaces__msg__BeltCommand(
  eprosima::fastcdr::Cdr & cdr,
  conveyor_interfaces__msg__BeltCommand * ros_message)
{
  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->stop = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conveyor_interfaces
size_t get_serialized_size_conveyor_interfaces__msg__BeltCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BeltCommand__ros_msg_type * ros_message = static_cast<const _BeltCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: stop
  {
    size_t item_size = sizeof(ros_message->stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conveyor_interfaces
size_t max_serialized_size_conveyor_interfaces__msg__BeltCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: stop
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = conveyor_interfaces__msg__BeltCommand;
    is_plain =
      (
      offsetof(DataType, stop) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conveyor_interfaces
bool cdr_serialize_key_conveyor_interfaces__msg__BeltCommand(
  const conveyor_interfaces__msg__BeltCommand * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: stop
  {
    cdr << (ros_message->stop ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conveyor_interfaces
size_t get_serialized_size_key_conveyor_interfaces__msg__BeltCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BeltCommand__ros_msg_type * ros_message = static_cast<const _BeltCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: stop
  {
    size_t item_size = sizeof(ros_message->stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conveyor_interfaces
size_t max_serialized_size_key_conveyor_interfaces__msg__BeltCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: stop
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = conveyor_interfaces__msg__BeltCommand;
    is_plain =
      (
      offsetof(DataType, stop) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _BeltCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const conveyor_interfaces__msg__BeltCommand * ros_message = static_cast<const conveyor_interfaces__msg__BeltCommand *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_conveyor_interfaces__msg__BeltCommand(ros_message, cdr);
}

static bool _BeltCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  conveyor_interfaces__msg__BeltCommand * ros_message = static_cast<conveyor_interfaces__msg__BeltCommand *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_conveyor_interfaces__msg__BeltCommand(cdr, ros_message);
}

static uint32_t _BeltCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_conveyor_interfaces__msg__BeltCommand(
      untyped_ros_message, 0));
}

static size_t _BeltCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_conveyor_interfaces__msg__BeltCommand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BeltCommand = {
  "conveyor_interfaces::msg",
  "BeltCommand",
  _BeltCommand__cdr_serialize,
  _BeltCommand__cdr_deserialize,
  _BeltCommand__get_serialized_size,
  _BeltCommand__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _BeltCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BeltCommand,
  get_message_typesupport_handle_function,
  &conveyor_interfaces__msg__BeltCommand__get_type_hash,
  &conveyor_interfaces__msg__BeltCommand__get_type_description,
  &conveyor_interfaces__msg__BeltCommand__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, conveyor_interfaces, msg, BeltCommand)() {
  return &_BeltCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
