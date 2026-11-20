// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from conveyor_interfaces:msg/BoxState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "conveyor_interfaces/msg/box_state.hpp"


#ifndef CONVEYOR_INTERFACES__MSG__DETAIL__BOX_STATE__TRAITS_HPP_
#define CONVEYOR_INTERFACES__MSG__DETAIL__BOX_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "conveyor_interfaces/msg/detail/box_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace conveyor_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const BoxState & msg,
  std::ostream & out)
{
  out << "{";
  // member: box_count
  {
    out << "box_count: ";
    rosidl_generator_traits::value_to_yaml(msg.box_count, out);
    out << ", ";
  }

  // member: overload
  {
    out << "overload: ";
    rosidl_generator_traits::value_to_yaml(msg.overload, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoxState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: box_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "box_count: ";
    rosidl_generator_traits::value_to_yaml(msg.box_count, out);
    out << "\n";
  }

  // member: overload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overload: ";
    rosidl_generator_traits::value_to_yaml(msg.overload, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoxState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace conveyor_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use conveyor_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const conveyor_interfaces::msg::BoxState & msg,
  std::ostream & out, size_t indentation = 0)
{
  conveyor_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use conveyor_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const conveyor_interfaces::msg::BoxState & msg)
{
  return conveyor_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<conveyor_interfaces::msg::BoxState>()
{
  return "conveyor_interfaces::msg::BoxState";
}

template<>
inline const char * name<conveyor_interfaces::msg::BoxState>()
{
  return "conveyor_interfaces/msg/BoxState";
}

template<>
struct has_fixed_size<conveyor_interfaces::msg::BoxState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<conveyor_interfaces::msg::BoxState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<conveyor_interfaces::msg::BoxState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONVEYOR_INTERFACES__MSG__DETAIL__BOX_STATE__TRAITS_HPP_
