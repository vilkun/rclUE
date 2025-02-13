// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ue_msgs:srv/DeleteEntity.idl
// generated code does not contain a copyright notice
#include "ue_msgs/srv/detail/delete_entity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
ue_msgs__srv__DeleteEntity_Request__init(ue_msgs__srv__DeleteEntity_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    ue_msgs__srv__DeleteEntity_Request__fini(msg);
    return false;
  }
  return true;
}

void
ue_msgs__srv__DeleteEntity_Request__fini(ue_msgs__srv__DeleteEntity_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

ue_msgs__srv__DeleteEntity_Request *
ue_msgs__srv__DeleteEntity_Request__create()
{
  ue_msgs__srv__DeleteEntity_Request * msg = (ue_msgs__srv__DeleteEntity_Request *)malloc(sizeof(ue_msgs__srv__DeleteEntity_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ue_msgs__srv__DeleteEntity_Request));
  bool success = ue_msgs__srv__DeleteEntity_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ue_msgs__srv__DeleteEntity_Request__destroy(ue_msgs__srv__DeleteEntity_Request * msg)
{
  if (msg) {
    ue_msgs__srv__DeleteEntity_Request__fini(msg);
  }
  free(msg);
}


bool
ue_msgs__srv__DeleteEntity_Request__Sequence__init(ue_msgs__srv__DeleteEntity_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ue_msgs__srv__DeleteEntity_Request * data = NULL;
  if (size) {
    data = (ue_msgs__srv__DeleteEntity_Request *)calloc(size, sizeof(ue_msgs__srv__DeleteEntity_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ue_msgs__srv__DeleteEntity_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ue_msgs__srv__DeleteEntity_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ue_msgs__srv__DeleteEntity_Request__Sequence__fini(ue_msgs__srv__DeleteEntity_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ue_msgs__srv__DeleteEntity_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ue_msgs__srv__DeleteEntity_Request__Sequence *
ue_msgs__srv__DeleteEntity_Request__Sequence__create(size_t size)
{
  ue_msgs__srv__DeleteEntity_Request__Sequence * array = (ue_msgs__srv__DeleteEntity_Request__Sequence *)malloc(sizeof(ue_msgs__srv__DeleteEntity_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ue_msgs__srv__DeleteEntity_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ue_msgs__srv__DeleteEntity_Request__Sequence__destroy(ue_msgs__srv__DeleteEntity_Request__Sequence * array)
{
  if (array) {
    ue_msgs__srv__DeleteEntity_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `status_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
ue_msgs__srv__DeleteEntity_Response__init(ue_msgs__srv__DeleteEntity_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // status_message
  if (!rosidl_runtime_c__String__init(&msg->status_message)) {
    ue_msgs__srv__DeleteEntity_Response__fini(msg);
    return false;
  }
  return true;
}

void
ue_msgs__srv__DeleteEntity_Response__fini(ue_msgs__srv__DeleteEntity_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // status_message
  rosidl_runtime_c__String__fini(&msg->status_message);
}

ue_msgs__srv__DeleteEntity_Response *
ue_msgs__srv__DeleteEntity_Response__create()
{
  ue_msgs__srv__DeleteEntity_Response * msg = (ue_msgs__srv__DeleteEntity_Response *)malloc(sizeof(ue_msgs__srv__DeleteEntity_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ue_msgs__srv__DeleteEntity_Response));
  bool success = ue_msgs__srv__DeleteEntity_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ue_msgs__srv__DeleteEntity_Response__destroy(ue_msgs__srv__DeleteEntity_Response * msg)
{
  if (msg) {
    ue_msgs__srv__DeleteEntity_Response__fini(msg);
  }
  free(msg);
}


bool
ue_msgs__srv__DeleteEntity_Response__Sequence__init(ue_msgs__srv__DeleteEntity_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ue_msgs__srv__DeleteEntity_Response * data = NULL;
  if (size) {
    data = (ue_msgs__srv__DeleteEntity_Response *)calloc(size, sizeof(ue_msgs__srv__DeleteEntity_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ue_msgs__srv__DeleteEntity_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ue_msgs__srv__DeleteEntity_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ue_msgs__srv__DeleteEntity_Response__Sequence__fini(ue_msgs__srv__DeleteEntity_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ue_msgs__srv__DeleteEntity_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ue_msgs__srv__DeleteEntity_Response__Sequence *
ue_msgs__srv__DeleteEntity_Response__Sequence__create(size_t size)
{
  ue_msgs__srv__DeleteEntity_Response__Sequence * array = (ue_msgs__srv__DeleteEntity_Response__Sequence *)malloc(sizeof(ue_msgs__srv__DeleteEntity_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ue_msgs__srv__DeleteEntity_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ue_msgs__srv__DeleteEntity_Response__Sequence__destroy(ue_msgs__srv__DeleteEntity_Response__Sequence * array)
{
  if (array) {
    ue_msgs__srv__DeleteEntity_Response__Sequence__fini(array);
  }
  free(array);
}
