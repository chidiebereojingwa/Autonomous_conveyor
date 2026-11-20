// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from conveyor_interfaces:msg/SystemAlert.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "conveyor_interfaces/msg/system_alert.hpp"


#ifndef CONVEYOR_INTERFACES__MSG__DETAIL__SYSTEM_ALERT__TRAITS_HPP_
#define CONVEYOR_INTERFACES__MSG__DETAIL__SYSTEM_ALERT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "conveyor_interfaces/msg/detail/system_alert__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace conveyor_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SystemAlert & msg,
  std::ostream & out)
{
  out << "{";
  // member: level
  {
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SystemAlert & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SystemAlert & msg, bool use_flow_style = false)
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
  const conveyor_interfaces::msg::SystemAlert & msg,
  std::ostream & out, size_t indentation = 0)
{
  conveyor_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use conveyor_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const conveyor_interfaces::msg::SystemAlert & msg)
{
  return conveyor_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<conveyor_interfaces::msg::SystemAlert>()
{
  return "conveyor_interfaces::msg::SystemAlert";
}

template<>
inline const char * name<conveyor_interfaces::msg::SystemAlert>()
{
  return "conveyor_interfaces/msg/SystemAlert";
}

template<>
struct has_fixed_size<conveyor_interfaces::msg::SystemAlert>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<conveyor_interfaces::msg::SystemAlert>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<conveyor_interfaces::msg::SystemAlert>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONVEYOR_INTERFACES__MSG__DETAIL__SYSTEM_ALERT__TRAITS_HPP_
