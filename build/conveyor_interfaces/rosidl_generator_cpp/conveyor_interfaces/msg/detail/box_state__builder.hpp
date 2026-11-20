// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from conveyor_interfaces:msg/BoxState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "conveyor_interfaces/msg/box_state.hpp"


#ifndef CONVEYOR_INTERFACES__MSG__DETAIL__BOX_STATE__BUILDER_HPP_
#define CONVEYOR_INTERFACES__MSG__DETAIL__BOX_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "conveyor_interfaces/msg/detail/box_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace conveyor_interfaces
{

namespace msg
{

namespace builder
{

class Init_BoxState_overload
{
public:
  explicit Init_BoxState_overload(::conveyor_interfaces::msg::BoxState & msg)
  : msg_(msg)
  {}
  ::conveyor_interfaces::msg::BoxState overload(::conveyor_interfaces::msg::BoxState::_overload_type arg)
  {
    msg_.overload = std::move(arg);
    return std::move(msg_);
  }

private:
  ::conveyor_interfaces::msg::BoxState msg_;
};

class Init_BoxState_box_count
{
public:
  Init_BoxState_box_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoxState_overload box_count(::conveyor_interfaces::msg::BoxState::_box_count_type arg)
  {
    msg_.box_count = std::move(arg);
    return Init_BoxState_overload(msg_);
  }

private:
  ::conveyor_interfaces::msg::BoxState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::conveyor_interfaces::msg::BoxState>()
{
  return conveyor_interfaces::msg::builder::Init_BoxState_box_count();
}

}  // namespace conveyor_interfaces

#endif  // CONVEYOR_INTERFACES__MSG__DETAIL__BOX_STATE__BUILDER_HPP_
