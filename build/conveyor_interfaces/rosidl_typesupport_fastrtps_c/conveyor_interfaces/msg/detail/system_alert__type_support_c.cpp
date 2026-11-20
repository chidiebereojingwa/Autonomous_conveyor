// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from conveyor_interfaces:msg/SystemAlert.idl
// generated code does not contain a copyright notice
#include "conveyor_interfaces/msg/detail/system_alert__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "conveyor_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "conveyor_interfaces/msg/detail/system_alert__struct.h"
#include "conveyor_interfaces/msg/detail/system_alert__functions.h"
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

#include "rosidl_runtime_c/string.h"  // level, message
#include "rosidl_runtime_c/string_functions.h"  // level, message

// forward declare type support functions


using _SystemAlert__ros_msg_type = conveyor_interfaces__msg__SystemAlert;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conveyor_interfaces
bool cdr_serialize_conveyor_interfaces__msg__SystemAlert(
  const conveyor_interfaces__msg__SystemAlert * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: level
  {
    const rosidl_runtime_c__String * str = &ros_message->level;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conveyor_interfaces
bool cdr_deserialize_conveyor_interfaces__msg__SystemAlert(
  eprosima::fastcdr::Cdr & cdr,
  conveyor_interfaces__msg__SystemAlert * ros_message)
{
  // Field name: level
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->level.data) {
      rosidl_runtime_c__String__init(&ros_message->level);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->level,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'level'\n");
      return false;
    }
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conveyor_interfaces
size_t get_serialized_size_conveyor_interfaces__msg__SystemAlert(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SystemAlert__ros_msg_type * ros_message = static_cast<const _SystemAlert__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: level
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->level.size + 1);

  // Field name: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conveyor_interfaces
size_t max_serialized_size_conveyor_interfaces__msg__SystemAlert(
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

  // Field name: level
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: message
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = conveyor_interfaces__msg__SystemAlert;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conveyor_interfaces
bool cdr_serialize_key_conveyor_interfaces__msg__SystemAlert(
  const conveyor_interfaces__msg__SystemAlert * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: level
  {
    const rosidl_runtime_c__String * str = &ros_message->level;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conveyor_interfaces
size_t get_serialized_size_key_conveyor_interfaces__msg__SystemAlert(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SystemAlert__ros_msg_type * ros_message = static_cast<const _SystemAlert__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: level
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->level.size + 1);

  // Field name: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conveyor_interfaces
size_t max_serialized_size_key_conveyor_interfaces__msg__SystemAlert(
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
  // Field name: level
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: message
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = conveyor_interfaces__msg__SystemAlert;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SystemAlert__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const conveyor_interfaces__msg__SystemAlert * ros_message = static_cast<const conveyor_interfaces__msg__SystemAlert *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_conveyor_interfaces__msg__SystemAlert(ros_message, cdr);
}

static bool _SystemAlert__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  conveyor_interfaces__msg__SystemAlert * ros_message = static_cast<conveyor_interfaces__msg__SystemAlert *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_conveyor_interfaces__msg__SystemAlert(cdr, ros_message);
}

static uint32_t _SystemAlert__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_conveyor_interfaces__msg__SystemAlert(
      untyped_ros_message, 0));
}

static size_t _SystemAlert__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_conveyor_interfaces__msg__SystemAlert(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SystemAlert = {
  "conveyor_interfaces::msg",
  "SystemAlert",
  _SystemAlert__cdr_serialize,
  _SystemAlert__cdr_deserialize,
  _SystemAlert__get_serialized_size,
  _SystemAlert__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SystemAlert__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SystemAlert,
  get_message_typesupport_handle_function,
  &conveyor_interfaces__msg__SystemAlert__get_type_hash,
  &conveyor_interfaces__msg__SystemAlert__get_type_description,
  &conveyor_interfaces__msg__SystemAlert__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, conveyor_interfaces, msg, SystemAlert)() {
  return &_SystemAlert__type_support;
}

#if defined(__cplusplus)
}
#endif
