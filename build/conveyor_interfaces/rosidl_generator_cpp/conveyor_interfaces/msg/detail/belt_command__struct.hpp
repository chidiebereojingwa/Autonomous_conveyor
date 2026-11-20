// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from conveyor_interfaces:msg/BeltCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "conveyor_interfaces/msg/belt_command.hpp"


#ifndef CONVEYOR_INTERFACES__MSG__DETAIL__BELT_COMMAND__STRUCT_HPP_
#define CONVEYOR_INTERFACES__MSG__DETAIL__BELT_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__conveyor_interfaces__msg__BeltCommand __attribute__((deprecated))
#else
# define DEPRECATED__conveyor_interfaces__msg__BeltCommand __declspec(deprecated)
#endif

namespace conveyor_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BeltCommand_
{
  using Type = BeltCommand_<ContainerAllocator>;

  explicit BeltCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->stop = false;
    }
  }

  explicit BeltCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->stop = false;
    }
  }

  // field types and members
  using _speed_type =
    float;
  _speed_type speed;
  using _stop_type =
    bool;
  _stop_type stop;

  // setters for named parameter idiom
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__stop(
    const bool & _arg)
  {
    this->stop = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    conveyor_interfaces::msg::BeltCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const conveyor_interfaces::msg::BeltCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<conveyor_interfaces::msg::BeltCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<conveyor_interfaces::msg::BeltCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      conveyor_interfaces::msg::BeltCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<conveyor_interfaces::msg::BeltCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      conveyor_interfaces::msg::BeltCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<conveyor_interfaces::msg::BeltCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<conveyor_interfaces::msg::BeltCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<conveyor_interfaces::msg::BeltCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__conveyor_interfaces__msg__BeltCommand
    std::shared_ptr<conveyor_interfaces::msg::BeltCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__conveyor_interfaces__msg__BeltCommand
    std::shared_ptr<conveyor_interfaces::msg::BeltCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BeltCommand_ & other) const
  {
    if (this->speed != other.speed) {
      return false;
    }
    if (this->stop != other.stop) {
      return false;
    }
    return true;
  }
  bool operator!=(const BeltCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BeltCommand_

// alias to use template instance with default allocator
using BeltCommand =
  conveyor_interfaces::msg::BeltCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace conveyor_interfaces

#endif  // CONVEYOR_INTERFACES__MSG__DETAIL__BELT_COMMAND__STRUCT_HPP_
