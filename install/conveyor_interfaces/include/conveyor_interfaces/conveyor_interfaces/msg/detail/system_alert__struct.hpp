// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from conveyor_interfaces:msg/SystemAlert.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "conveyor_interfaces/msg/system_alert.hpp"


#ifndef CONVEYOR_INTERFACES__MSG__DETAIL__SYSTEM_ALERT__STRUCT_HPP_
#define CONVEYOR_INTERFACES__MSG__DETAIL__SYSTEM_ALERT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__conveyor_interfaces__msg__SystemAlert __attribute__((deprecated))
#else
# define DEPRECATED__conveyor_interfaces__msg__SystemAlert __declspec(deprecated)
#endif

namespace conveyor_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SystemAlert_
{
  using Type = SystemAlert_<ContainerAllocator>;

  explicit SystemAlert_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level = "";
      this->message = "";
    }
  }

  explicit SystemAlert_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : level(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level = "";
      this->message = "";
    }
  }

  // field types and members
  using _level_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _level_type level;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__level(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->level = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    conveyor_interfaces::msg::SystemAlert_<ContainerAllocator> *;
  using ConstRawPtr =
    const conveyor_interfaces::msg::SystemAlert_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<conveyor_interfaces::msg::SystemAlert_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<conveyor_interfaces::msg::SystemAlert_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      conveyor_interfaces::msg::SystemAlert_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<conveyor_interfaces::msg::SystemAlert_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      conveyor_interfaces::msg::SystemAlert_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<conveyor_interfaces::msg::SystemAlert_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<conveyor_interfaces::msg::SystemAlert_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<conveyor_interfaces::msg::SystemAlert_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__conveyor_interfaces__msg__SystemAlert
    std::shared_ptr<conveyor_interfaces::msg::SystemAlert_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__conveyor_interfaces__msg__SystemAlert
    std::shared_ptr<conveyor_interfaces::msg::SystemAlert_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemAlert_ & other) const
  {
    if (this->level != other.level) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemAlert_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemAlert_

// alias to use template instance with default allocator
using SystemAlert =
  conveyor_interfaces::msg::SystemAlert_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace conveyor_interfaces

#endif  // CONVEYOR_INTERFACES__MSG__DETAIL__SYSTEM_ALERT__STRUCT_HPP_
