// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from conveyor_interfaces:msg/SystemAlert.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "conveyor_interfaces/msg/system_alert.hpp"


#ifndef CONVEYOR_INTERFACES__MSG__DETAIL__SYSTEM_ALERT__BUILDER_HPP_
#define CONVEYOR_INTERFACES__MSG__DETAIL__SYSTEM_ALERT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "conveyor_interfaces/msg/detail/system_alert__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace conveyor_interfaces
{

namespace msg
{

namespace builder
{

class Init_SystemAlert_message
{
public:
  explicit Init_SystemAlert_message(::conveyor_interfaces::msg::SystemAlert & msg)
  : msg_(msg)
  {}
  ::conveyor_interfaces::msg::SystemAlert message(::conveyor_interfaces::msg::SystemAlert::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::conveyor_interfaces::msg::SystemAlert msg_;
};

class Init_SystemAlert_level
{
public:
  Init_SystemAlert_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemAlert_message level(::conveyor_interfaces::msg::SystemAlert::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_SystemAlert_message(msg_);
  }

private:
  ::conveyor_interfaces::msg::SystemAlert msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::conveyor_interfaces::msg::SystemAlert>()
{
  return conveyor_interfaces::msg::builder::Init_SystemAlert_level();
}

}  // namespace conveyor_interfaces

#endif  // CONVEYOR_INTERFACES__MSG__DETAIL__SYSTEM_ALERT__BUILDER_HPP_
