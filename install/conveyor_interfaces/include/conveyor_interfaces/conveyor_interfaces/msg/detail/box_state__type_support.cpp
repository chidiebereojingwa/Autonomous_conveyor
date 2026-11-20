// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from conveyor_interfaces:msg/BoxState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "conveyor_interfaces/msg/detail/box_state__functions.h"
#include "conveyor_interfaces/msg/detail/box_state__struct.hpp"
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

void BoxState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) conveyor_interfaces::msg::BoxState(_init);
}

void BoxState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<conveyor_interfaces::msg::BoxState *>(message_memory);
  typed_message->~BoxState();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BoxState_message_member_array[2] = {
  {
    "box_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conveyor_interfaces::msg::BoxState, box_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "overload",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conveyor_interfaces::msg::BoxState, overload),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BoxState_message_members = {
  "conveyor_interfaces::msg",  // message namespace
  "BoxState",  // message name
  2,  // number of fields
  sizeof(conveyor_interfaces::msg::BoxState),
  false,  // has_any_key_member_
  BoxState_message_member_array,  // message members
  BoxState_init_function,  // function to initialize message memory (memory has to be allocated)
  BoxState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BoxState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BoxState_message_members,
  get_message_typesupport_handle_function,
  &conveyor_interfaces__msg__BoxState__get_type_hash,
  &conveyor_interfaces__msg__BoxState__get_type_description,
  &conveyor_interfaces__msg__BoxState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace conveyor_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<conveyor_interfaces::msg::BoxState>()
{
  return &::conveyor_interfaces::msg::rosidl_typesupport_introspection_cpp::BoxState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, conveyor_interfaces, msg, BoxState)() {
  return &::conveyor_interfaces::msg::rosidl_typesupport_introspection_cpp::BoxState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
