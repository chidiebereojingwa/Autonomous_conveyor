// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from conveyor_interfaces:msg/BoxState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "conveyor_interfaces/msg/box_state.hpp"


#ifndef CONVEYOR_INTERFACES__MSG__DETAIL__BOX_STATE__STRUCT_HPP_
#define CONVEYOR_INTERFACES__MSG__DETAIL__BOX_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__conveyor_interfaces__msg__BoxState __attribute__((deprecated))
#else
# define DEPRECATED__conveyor_interfaces__msg__BoxState __declspec(deprecated)
#endif

namespace conveyor_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoxState_
{
  using Type = BoxState_<ContainerAllocator>;

  explicit BoxState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->box_count = 0l;
      this->overload = false;
    }
  }

  explicit BoxState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->box_count = 0l;
      this->overload = false;
    }
  }

  // field types and members
  using _box_count_type =
    int32_t;
  _box_count_type box_count;
  using _overload_type =
    bool;
  _overload_type overload;

  // setters for named parameter idiom
  Type & set__box_count(
    const int32_t & _arg)
  {
    this->box_count = _arg;
    return *this;
  }
  Type & set__overload(
    const bool & _arg)
  {
    this->overload = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    conveyor_interfaces::msg::BoxState_<ContainerAllocator> *;
  using ConstRawPtr =
    const conveyor_interfaces::msg::BoxState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<conveyor_interfaces::msg::BoxState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<conveyor_interfaces::msg::BoxState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      conveyor_interfaces::msg::BoxState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<conveyor_interfaces::msg::BoxState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      conveyor_interfaces::msg::BoxState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<conveyor_interfaces::msg::BoxState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<conveyor_interfaces::msg::BoxState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<conveyor_interfaces::msg::BoxState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__conveyor_interfaces__msg__BoxState
    std::shared_ptr<conveyor_interfaces::msg::BoxState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__conveyor_interfaces__msg__BoxState
    std::shared_ptr<conveyor_interfaces::msg::BoxState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoxState_ & other) const
  {
    if (this->box_count != other.box_count) {
      return false;
    }
    if (this->overload != other.overload) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoxState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoxState_

// alias to use template instance with default allocator
using BoxState =
  conveyor_interfaces::msg::BoxState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace conveyor_interfaces

#endif  // CONVEYOR_INTERFACES__MSG__DETAIL__BOX_STATE__STRUCT_HPP_
