// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ue_msgs:srv/GetElevatorStatus.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__GET_ELEVATOR_STATUS__BUILDER_HPP_
#define UE_MSGS__SRV__DETAIL__GET_ELEVATOR_STATUS__BUILDER_HPP_

#include "ue_msgs/srv/detail/get_elevator_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ue_msgs
{

namespace srv
{

namespace builder
{

class Init_GetElevatorStatus_Request_dummy
{
public:
  Init_GetElevatorStatus_Request_dummy()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ue_msgs::srv::GetElevatorStatus_Request dummy(::ue_msgs::srv::GetElevatorStatus_Request::_dummy_type arg)
  {
    msg_.dummy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::srv::GetElevatorStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::srv::GetElevatorStatus_Request>()
{
  return ue_msgs::srv::builder::Init_GetElevatorStatus_Request_dummy();
}

}  // namespace ue_msgs


namespace ue_msgs
{

namespace srv
{

namespace builder
{

class Init_GetElevatorStatus_Response_nb_reservations
{
public:
  explicit Init_GetElevatorStatus_Response_nb_reservations(::ue_msgs::srv::GetElevatorStatus_Response & msg)
  : msg_(msg)
  {}
  ::ue_msgs::srv::GetElevatorStatus_Response nb_reservations(::ue_msgs::srv::GetElevatorStatus_Response::_nb_reservations_type arg)
  {
    msg_.nb_reservations = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::srv::GetElevatorStatus_Response msg_;
};

class Init_GetElevatorStatus_Response_current_floor
{
public:
  explicit Init_GetElevatorStatus_Response_current_floor(::ue_msgs::srv::GetElevatorStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetElevatorStatus_Response_nb_reservations current_floor(::ue_msgs::srv::GetElevatorStatus_Response::_current_floor_type arg)
  {
    msg_.current_floor = std::move(arg);
    return Init_GetElevatorStatus_Response_nb_reservations(msg_);
  }

private:
  ::ue_msgs::srv::GetElevatorStatus_Response msg_;
};

class Init_GetElevatorStatus_Response_door_open
{
public:
  explicit Init_GetElevatorStatus_Response_door_open(::ue_msgs::srv::GetElevatorStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetElevatorStatus_Response_current_floor door_open(::ue_msgs::srv::GetElevatorStatus_Response::_door_open_type arg)
  {
    msg_.door_open = std::move(arg);
    return Init_GetElevatorStatus_Response_current_floor(msg_);
  }

private:
  ::ue_msgs::srv::GetElevatorStatus_Response msg_;
};

class Init_GetElevatorStatus_Response_success
{
public:
  Init_GetElevatorStatus_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetElevatorStatus_Response_door_open success(::ue_msgs::srv::GetElevatorStatus_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetElevatorStatus_Response_door_open(msg_);
  }

private:
  ::ue_msgs::srv::GetElevatorStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::srv::GetElevatorStatus_Response>()
{
  return ue_msgs::srv::builder::Init_GetElevatorStatus_Response_success();
}

}  // namespace ue_msgs

#endif  // UE_MSGS__SRV__DETAIL__GET_ELEVATOR_STATUS__BUILDER_HPP_
