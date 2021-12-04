// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ue_msgs:srv/GetElevatorStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ue_msgs/srv/detail/get_elevator_status__rosidl_typesupport_introspection_c.h"
#include "ue_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ue_msgs/srv/detail/get_elevator_status__functions.h"
#include "ue_msgs/srv/detail/get_elevator_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetElevatorStatus_Request__rosidl_typesupport_introspection_c__GetElevatorStatus_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ue_msgs__srv__GetElevatorStatus_Request__init(message_memory);
}

void GetElevatorStatus_Request__rosidl_typesupport_introspection_c__GetElevatorStatus_Request_fini_function(void * message_memory)
{
  ue_msgs__srv__GetElevatorStatus_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetElevatorStatus_Request__rosidl_typesupport_introspection_c__GetElevatorStatus_Request_message_member_array[1] = {
  {
    "dummy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__srv__GetElevatorStatus_Request, dummy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetElevatorStatus_Request__rosidl_typesupport_introspection_c__GetElevatorStatus_Request_message_members = {
  "ue_msgs__srv",  // message namespace
  "GetElevatorStatus_Request",  // message name
  1,  // number of fields
  sizeof(ue_msgs__srv__GetElevatorStatus_Request),
  GetElevatorStatus_Request__rosidl_typesupport_introspection_c__GetElevatorStatus_Request_message_member_array,  // message members
  GetElevatorStatus_Request__rosidl_typesupport_introspection_c__GetElevatorStatus_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetElevatorStatus_Request__rosidl_typesupport_introspection_c__GetElevatorStatus_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetElevatorStatus_Request__rosidl_typesupport_introspection_c__GetElevatorStatus_Request_message_type_support_handle = {
  0,
  &GetElevatorStatus_Request__rosidl_typesupport_introspection_c__GetElevatorStatus_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, GetElevatorStatus_Request)() {
  if (!GetElevatorStatus_Request__rosidl_typesupport_introspection_c__GetElevatorStatus_Request_message_type_support_handle.typesupport_identifier) {
    GetElevatorStatus_Request__rosidl_typesupport_introspection_c__GetElevatorStatus_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetElevatorStatus_Request__rosidl_typesupport_introspection_c__GetElevatorStatus_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ue_msgs/srv/detail/get_elevator_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ue_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ue_msgs/srv/detail/get_elevator_status__functions.h"
// already included above
// #include "ue_msgs/srv/detail/get_elevator_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetElevatorStatus_Response__rosidl_typesupport_introspection_c__GetElevatorStatus_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ue_msgs__srv__GetElevatorStatus_Response__init(message_memory);
}

void GetElevatorStatus_Response__rosidl_typesupport_introspection_c__GetElevatorStatus_Response_fini_function(void * message_memory)
{
  ue_msgs__srv__GetElevatorStatus_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetElevatorStatus_Response__rosidl_typesupport_introspection_c__GetElevatorStatus_Response_message_member_array[4] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__srv__GetElevatorStatus_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "door_open",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__srv__GetElevatorStatus_Response, door_open),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_floor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__srv__GetElevatorStatus_Response, current_floor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nb_reservations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__srv__GetElevatorStatus_Response, nb_reservations),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetElevatorStatus_Response__rosidl_typesupport_introspection_c__GetElevatorStatus_Response_message_members = {
  "ue_msgs__srv",  // message namespace
  "GetElevatorStatus_Response",  // message name
  4,  // number of fields
  sizeof(ue_msgs__srv__GetElevatorStatus_Response),
  GetElevatorStatus_Response__rosidl_typesupport_introspection_c__GetElevatorStatus_Response_message_member_array,  // message members
  GetElevatorStatus_Response__rosidl_typesupport_introspection_c__GetElevatorStatus_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetElevatorStatus_Response__rosidl_typesupport_introspection_c__GetElevatorStatus_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetElevatorStatus_Response__rosidl_typesupport_introspection_c__GetElevatorStatus_Response_message_type_support_handle = {
  0,
  &GetElevatorStatus_Response__rosidl_typesupport_introspection_c__GetElevatorStatus_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, GetElevatorStatus_Response)() {
  if (!GetElevatorStatus_Response__rosidl_typesupport_introspection_c__GetElevatorStatus_Response_message_type_support_handle.typesupport_identifier) {
    GetElevatorStatus_Response__rosidl_typesupport_introspection_c__GetElevatorStatus_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetElevatorStatus_Response__rosidl_typesupport_introspection_c__GetElevatorStatus_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ue_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ue_msgs/srv/detail/get_elevator_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ue_msgs__srv__detail__get_elevator_status__rosidl_typesupport_introspection_c__GetElevatorStatus_service_members = {
  "ue_msgs__srv",  // service namespace
  "GetElevatorStatus",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ue_msgs__srv__detail__get_elevator_status__rosidl_typesupport_introspection_c__GetElevatorStatus_Request_message_type_support_handle,
  NULL  // response message
  // ue_msgs__srv__detail__get_elevator_status__rosidl_typesupport_introspection_c__GetElevatorStatus_Response_message_type_support_handle
};

static rosidl_service_type_support_t ue_msgs__srv__detail__get_elevator_status__rosidl_typesupport_introspection_c__GetElevatorStatus_service_type_support_handle = {
  0,
  &ue_msgs__srv__detail__get_elevator_status__rosidl_typesupport_introspection_c__GetElevatorStatus_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, GetElevatorStatus_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, GetElevatorStatus_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, GetElevatorStatus)() {
  if (!ue_msgs__srv__detail__get_elevator_status__rosidl_typesupport_introspection_c__GetElevatorStatus_service_type_support_handle.typesupport_identifier) {
    ue_msgs__srv__detail__get_elevator_status__rosidl_typesupport_introspection_c__GetElevatorStatus_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ue_msgs__srv__detail__get_elevator_status__rosidl_typesupport_introspection_c__GetElevatorStatus_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, GetElevatorStatus_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, GetElevatorStatus_Response)()->data;
  }

  return &ue_msgs__srv__detail__get_elevator_status__rosidl_typesupport_introspection_c__GetElevatorStatus_service_type_support_handle;
}
