// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ue_msgs:srv/GetElevatorStatus.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__GET_ELEVATOR_STATUS__STRUCT_H_
#define UE_MSGS__SRV__DETAIL__GET_ELEVATOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetElevatorStatus in the package ue_msgs.
typedef struct ue_msgs__srv__GetElevatorStatus_Request
{
  bool dummy;
} ue_msgs__srv__GetElevatorStatus_Request;

// Struct for a sequence of ue_msgs__srv__GetElevatorStatus_Request.
typedef struct ue_msgs__srv__GetElevatorStatus_Request__Sequence
{
  ue_msgs__srv__GetElevatorStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__srv__GetElevatorStatus_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/GetElevatorStatus in the package ue_msgs.
typedef struct ue_msgs__srv__GetElevatorStatus_Response
{
  bool success;
  bool door_open;
  int32_t current_floor;
  int32_t nb_reservations;
} ue_msgs__srv__GetElevatorStatus_Response;

// Struct for a sequence of ue_msgs__srv__GetElevatorStatus_Response.
typedef struct ue_msgs__srv__GetElevatorStatus_Response__Sequence
{
  ue_msgs__srv__GetElevatorStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__srv__GetElevatorStatus_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UE_MSGS__SRV__DETAIL__GET_ELEVATOR_STATUS__STRUCT_H_
