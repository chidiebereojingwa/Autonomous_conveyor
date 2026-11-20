// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from conveyor_interfaces:msg/BeltCommand.idl
// generated code does not contain a copyright notice
#include "conveyor_interfaces/msg/detail/belt_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
conveyor_interfaces__msg__BeltCommand__init(conveyor_interfaces__msg__BeltCommand * msg)
{
  if (!msg) {
    return false;
  }
  // speed
  // stop
  return true;
}

void
conveyor_interfaces__msg__BeltCommand__fini(conveyor_interfaces__msg__BeltCommand * msg)
{
  if (!msg) {
    return;
  }
  // speed
  // stop
}

bool
conveyor_interfaces__msg__BeltCommand__are_equal(const conveyor_interfaces__msg__BeltCommand * lhs, const conveyor_interfaces__msg__BeltCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // stop
  if (lhs->stop != rhs->stop) {
    return false;
  }
  return true;
}

bool
conveyor_interfaces__msg__BeltCommand__copy(
  const conveyor_interfaces__msg__BeltCommand * input,
  conveyor_interfaces__msg__BeltCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // speed
  output->speed = input->speed;
  // stop
  output->stop = input->stop;
  return true;
}

conveyor_interfaces__msg__BeltCommand *
conveyor_interfaces__msg__BeltCommand__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  conveyor_interfaces__msg__BeltCommand * msg = (conveyor_interfaces__msg__BeltCommand *)allocator.allocate(sizeof(conveyor_interfaces__msg__BeltCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(conveyor_interfaces__msg__BeltCommand));
  bool success = conveyor_interfaces__msg__BeltCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
conveyor_interfaces__msg__BeltCommand__destroy(conveyor_interfaces__msg__BeltCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    conveyor_interfaces__msg__BeltCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
conveyor_interfaces__msg__BeltCommand__Sequence__init(conveyor_interfaces__msg__BeltCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  conveyor_interfaces__msg__BeltCommand * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(conveyor_interfaces__msg__BeltCommand)) {
      return false;
    }
    data = (conveyor_interfaces__msg__BeltCommand *)allocator.zero_allocate(size, sizeof(conveyor_interfaces__msg__BeltCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = conveyor_interfaces__msg__BeltCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        conveyor_interfaces__msg__BeltCommand__fini(&data[i - 1]);
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
conveyor_interfaces__msg__BeltCommand__Sequence__fini(conveyor_interfaces__msg__BeltCommand__Sequence * array)
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
      conveyor_interfaces__msg__BeltCommand__fini(&array->data[i]);
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

conveyor_interfaces__msg__BeltCommand__Sequence *
conveyor_interfaces__msg__BeltCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  conveyor_interfaces__msg__BeltCommand__Sequence * array = (conveyor_interfaces__msg__BeltCommand__Sequence *)allocator.allocate(sizeof(conveyor_interfaces__msg__BeltCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = conveyor_interfaces__msg__BeltCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
conveyor_interfaces__msg__BeltCommand__Sequence__destroy(conveyor_interfaces__msg__BeltCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    conveyor_interfaces__msg__BeltCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
conveyor_interfaces__msg__BeltCommand__Sequence__are_equal(const conveyor_interfaces__msg__BeltCommand__Sequence * lhs, const conveyor_interfaces__msg__BeltCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!conveyor_interfaces__msg__BeltCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
conveyor_interfaces__msg__BeltCommand__Sequence__copy(
  const conveyor_interfaces__msg__BeltCommand__Sequence * input,
  conveyor_interfaces__msg__BeltCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(conveyor_interfaces__msg__BeltCommand)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(conveyor_interfaces__msg__BeltCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    conveyor_interfaces__msg__BeltCommand * data =
      (conveyor_interfaces__msg__BeltCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!conveyor_interfaces__msg__BeltCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          conveyor_interfaces__msg__BeltCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!conveyor_interfaces__msg__BeltCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
