// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from conveyor_interfaces:msg/SystemAlert.idl
// generated code does not contain a copyright notice
#include "conveyor_interfaces/msg/detail/system_alert__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `level`
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
conveyor_interfaces__msg__SystemAlert__init(conveyor_interfaces__msg__SystemAlert * msg)
{
  if (!msg) {
    return false;
  }
  // level
  if (!rosidl_runtime_c__String__init(&msg->level)) {
    conveyor_interfaces__msg__SystemAlert__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    conveyor_interfaces__msg__SystemAlert__fini(msg);
    return false;
  }
  return true;
}

void
conveyor_interfaces__msg__SystemAlert__fini(conveyor_interfaces__msg__SystemAlert * msg)
{
  if (!msg) {
    return;
  }
  // level
  rosidl_runtime_c__String__fini(&msg->level);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
conveyor_interfaces__msg__SystemAlert__are_equal(const conveyor_interfaces__msg__SystemAlert * lhs, const conveyor_interfaces__msg__SystemAlert * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // level
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->level), &(rhs->level)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
conveyor_interfaces__msg__SystemAlert__copy(
  const conveyor_interfaces__msg__SystemAlert * input,
  conveyor_interfaces__msg__SystemAlert * output)
{
  if (!input || !output) {
    return false;
  }
  // level
  if (!rosidl_runtime_c__String__copy(
      &(input->level), &(output->level)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

conveyor_interfaces__msg__SystemAlert *
conveyor_interfaces__msg__SystemAlert__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  conveyor_interfaces__msg__SystemAlert * msg = (conveyor_interfaces__msg__SystemAlert *)allocator.allocate(sizeof(conveyor_interfaces__msg__SystemAlert), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(conveyor_interfaces__msg__SystemAlert));
  bool success = conveyor_interfaces__msg__SystemAlert__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
conveyor_interfaces__msg__SystemAlert__destroy(conveyor_interfaces__msg__SystemAlert * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    conveyor_interfaces__msg__SystemAlert__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
conveyor_interfaces__msg__SystemAlert__Sequence__init(conveyor_interfaces__msg__SystemAlert__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  conveyor_interfaces__msg__SystemAlert * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(conveyor_interfaces__msg__SystemAlert)) {
      return false;
    }
    data = (conveyor_interfaces__msg__SystemAlert *)allocator.zero_allocate(size, sizeof(conveyor_interfaces__msg__SystemAlert), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = conveyor_interfaces__msg__SystemAlert__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        conveyor_interfaces__msg__SystemAlert__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
conveyor_interfaces__msg__SystemAlert__Sequence__fini(conveyor_interfaces__msg__SystemAlert__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      conveyor_interfaces__msg__SystemAlert__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

conveyor_interfaces__msg__SystemAlert__Sequence *
conveyor_interfaces__msg__SystemAlert__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  conveyor_interfaces__msg__SystemAlert__Sequence * array = (conveyor_interfaces__msg__SystemAlert__Sequence *)allocator.allocate(sizeof(conveyor_interfaces__msg__SystemAlert__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = conveyor_interfaces__msg__SystemAlert__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
conveyor_interfaces__msg__SystemAlert__Sequence__destroy(conveyor_interfaces__msg__SystemAlert__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    conveyor_interfaces__msg__SystemAlert__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
conveyor_interfaces__msg__SystemAlert__Sequence__are_equal(const conveyor_interfaces__msg__SystemAlert__Sequence * lhs, const conveyor_interfaces__msg__SystemAlert__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!conveyor_interfaces__msg__SystemAlert__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
conveyor_interfaces__msg__SystemAlert__Sequence__copy(
  const conveyor_interfaces__msg__SystemAlert__Sequence * input,
  conveyor_interfaces__msg__SystemAlert__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(conveyor_interfaces__msg__SystemAlert)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(conveyor_interfaces__msg__SystemAlert);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    conveyor_interfaces__msg__SystemAlert * data =
      (conveyor_interfaces__msg__SystemAlert *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!conveyor_interfaces__msg__SystemAlert__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          conveyor_interfaces__msg__SystemAlert__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!conveyor_interfaces__msg__SystemAlert__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
