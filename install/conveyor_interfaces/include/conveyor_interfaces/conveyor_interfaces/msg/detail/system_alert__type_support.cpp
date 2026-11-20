// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from conveyor_interfaces:msg/SystemAlert.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "conveyor_interfaces/msg/detail/system_alert__functions.h"
#include "conveyor_interfaces/msg/detail/system_alert__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace conveyor_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SystemAlert_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) conveyor_interfaces::msg::SystemAlert(_init);
}

void SystemAlert_fini_function(void * message_memory)
{
  auto typed_message = static_cast<conveyor_interfaces::msg::SystemAlert *>(message_memory);
  typed_message->~SystemAlert();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SystemAlert_message_member_array[2] = {
  {
    "level",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conveyor_interfaces::msg::SystemAlert, level),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conveyor_interfaces::msg::SystemAlert, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SystemAlert_message_members = {
  "conveyor_interfaces::msg",  // message namespace
  "SystemAlert",  // message name
  2,  // number of fields
  sizeof(conveyor_interfaces::msg::SystemAlert),
  false,  // has_any_key_member_
  SystemAlert_message_member_array,  // message members
  SystemAlert_init_function,  // function to initialize message memory (memory has to be allocated)
  SystemAlert_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SystemAlert_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SystemAlert_message_members,
  get_message_typesupport_handle_function,
  &conveyor_interfaces__msg__SystemAlert__get_type_hash,
  &conveyor_interfaces__msg__SystemAlert__get_type_description,
  &conveyor_interfaces__msg__SystemAlert__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace conveyor_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<conveyor_interfaces::msg::SystemAlert>()
{
  return &::conveyor_interfaces::msg::rosidl_typesupport_introspection_cpp::SystemAlert_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, conveyor_interfaces, msg, SystemAlert)() {
  return &::conveyor_interfaces::msg::rosidl_typesupport_introspection_cpp::SystemAlert_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
