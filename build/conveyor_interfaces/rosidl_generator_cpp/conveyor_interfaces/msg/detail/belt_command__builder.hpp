// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from conveyor_interfaces:msg/BeltCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "conveyor_interfaces/msg/belt_command.hpp"


#ifndef CONVEYOR_INTERFACES__MSG__DETAIL__BELT_COMMAND__BUILDER_HPP_
#define CONVEYOR_INTERFACES__MSG__DETAIL__BELT_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "conveyor_interfaces/msg/detail/belt_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace conveyor_interfaces
{

namespace msg
{

namespace builder
{

class Init_BeltCommand_stop
{
public:
  explicit Init_BeltCommand_stop(::conveyor_interfaces::msg::BeltCommand & msg)
  : msg_(msg)
  {}
  ::conveyor_interfaces::msg::BeltCommand stop(::conveyor_interfaces::msg::BeltCommand::_stop_type arg)
  {
    msg_.stop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::conveyor_interfaces::msg::BeltCommand msg_;
};

class Init_BeltCommand_speed
{
public:
  Init_BeltCommand_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BeltCommand_stop speed(::conveyor_interfaces::msg::BeltCommand::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_BeltCommand_stop(msg_);
  }

private:
  ::conveyor_interfaces::msg::BeltCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::conveyor_interfaces::msg::BeltCommand>()
{
  return conveyor_interfaces::msg::builder::Init_BeltCommand_speed();
}

}  // namespace conveyor_interfaces

#endif  // CONVEYOR_INTERFACES__MSG__DETAIL__BELT_COMMAND__BUILDER_HPP_
