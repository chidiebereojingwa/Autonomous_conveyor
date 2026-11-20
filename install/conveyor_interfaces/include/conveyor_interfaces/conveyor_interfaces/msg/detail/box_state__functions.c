// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from conveyor_interfaces:msg/BoxState.idl
// generated code does not contain a copyright notice
#include "conveyor_interfaces/msg/detail/box_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
conveyor_interfaces__msg__BoxState__init(conveyor_interfaces__msg__BoxState * msg)
{
  if (!msg) {
    return false;
  }
  // box_count
  // overload
  return true;
}

void
conveyor_interfaces__msg__BoxState__fini(conveyor_interfaces__msg__BoxState * msg)
{
  if (!msg) {
    return;
  }
  // box_count
  // overload
}

bool
conveyor_interfaces__msg__BoxState__are_equal(const conveyor_interfaces__msg__BoxState * lhs, const conveyor_interfaces__msg__BoxState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // box_count
  if (lhs->box_count != rhs->box_count) {
    return false;
  }
  // overload
  if (lhs->overload != rhs->overload) {
    return false;
  }
  return true;
}

bool
conveyor_interfaces__msg__BoxState__copy(
  const conveyor_interfaces__msg__BoxState * input,
  conveyor_interfaces__msg__BoxState * output)
{
  if (!input || !output) {
    return false;
  }
  // box_count
  output->box_count = input->box_count;
  // overload
  output->overload = input->overload;
  return true;
}

conveyor_interfaces__msg__BoxState *
conveyor_interfaces__msg__BoxState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  conveyor_interfaces__msg__BoxState * msg = (conveyor_interfaces__msg__BoxState *)allocator.allocate(sizeof(conveyor_interfaces__msg__BoxState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(conveyor_interfaces__msg__BoxState));
  bool success = conveyor_interfaces__msg__BoxState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
conveyor_interfaces__msg__BoxState__destroy(conveyor_interfaces__msg__BoxState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    conveyor_interfaces__msg__BoxState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
conveyor_interfaces__msg__BoxState__Sequence__init(conveyor_interfaces__msg__BoxState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  conveyor_interfaces__msg__BoxState * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(conveyor_interfaces__msg__BoxState)) {
      return false;
    }
    data = (conveyor_interfaces__msg__BoxState *)allocator.zero_allocate(size, sizeof(conveyor_interfaces__msg__BoxState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = conveyor_interfaces__msg__BoxState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        conveyor_interfaces__msg__BoxState__fini(&data[i - 1]);
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
conveyor_interfaces__msg__BoxState__Sequence__fini(conveyor_interfaces__msg__BoxState__Sequence * array)
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
      conveyor_interfaces__msg__BoxState__fini(&array->data[i]);
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

conveyor_interfaces__msg__BoxState__Sequence *
conveyor_interfaces__msg__BoxState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  conveyor_interfaces__msg__BoxState__Sequence * array = (conveyor_interfaces__msg__BoxState__Sequence *)allocator.allocate(sizeof(conveyor_interfaces__msg__BoxState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = conveyor_interfaces__msg__BoxState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
conveyor_interfaces__msg__BoxState__Sequence__destroy(conveyor_interfaces__msg__BoxState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    conveyor_interfaces__msg__BoxState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
conveyor_interfaces__msg__BoxState__Sequence__are_equal(const conveyor_interfaces__msg__BoxState__Sequence * lhs, const conveyor_interfaces__msg__BoxState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!conveyor_interfaces__msg__BoxState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
conveyor_interfaces__msg__BoxState__Sequence__copy(
  const conveyor_interfaces__msg__BoxState__Sequence * input,
  conveyor_interfaces__msg__BoxState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(conveyor_interfaces__msg__BoxState)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(conveyor_interfaces__msg__BoxState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    conveyor_interfaces__msg__BoxState * data =
      (conveyor_interfaces__msg__BoxState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!conveyor_interfaces__msg__BoxState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          conveyor_interfaces__msg__BoxState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!conveyor_interfaces__msg__BoxState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
