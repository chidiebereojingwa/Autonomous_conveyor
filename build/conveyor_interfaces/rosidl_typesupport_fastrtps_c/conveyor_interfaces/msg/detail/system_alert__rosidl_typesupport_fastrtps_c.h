// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from conveyor_interfaces:msg/SystemAlert.idl
// generated code does not contain a copyright notice
#ifndef CONVEYOR_INTERFACES__MSG__DETAIL__SYSTEM_ALERT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define CONVEYOR_INTERFACES__MSG__DETAIL__SYSTEM_ALERT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "conveyor_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "conveyor_interfaces/msg/detail/system_alert__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conveyor_interfaces
bool cdr_serialize_conveyor_interfaces__msg__SystemAlert(
  const conveyor_interfaces__msg__SystemAlert * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conveyor_interfaces
bool cdr_deserialize_conveyor_interfaces__msg__SystemAlert(
  eprosima::fastcdr::Cdr &,
  conveyor_interfaces__msg__SystemAlert * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conveyor_interfaces
size_t get_serialized_size_conveyor_interfaces__msg__SystemAlert(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conveyor_interfaces
size_t max_serialized_size_conveyor_interfaces__msg__SystemAlert(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conveyor_interfaces
bool cdr_serialize_key_conveyor_interfaces__msg__SystemAlert(
  const conveyor_interfaces__msg__SystemAlert * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conveyor_interfaces
size_t get_serialized_size_key_conveyor_interfaces__msg__SystemAlert(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conveyor_interfaces
size_t max_serialized_size_key_conveyor_interfaces__msg__SystemAlert(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conveyor_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, conveyor_interfaces, msg, SystemAlert)();

#ifdef __cplusplus
}
#endif

#endif  // CONVEYOR_INTERFACES__MSG__DETAIL__SYSTEM_ALERT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
