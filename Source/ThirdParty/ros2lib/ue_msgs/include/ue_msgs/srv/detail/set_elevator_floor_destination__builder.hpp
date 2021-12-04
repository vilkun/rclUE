// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ue_msgs:srv/SetElevatorFloorDestination.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__SET_ELEVATOR_FLOOR_DESTINATION__BUILDER_HPP_
#define UE_MSGS__SRV__DETAIL__SET_ELEVATOR_FLOOR_DESTINATION__BUILDER_HPP_

#include "ue_msgs/srv/detail/set_elevator_floor_destination__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ue_msgs
{

namespace srv
{

namespace builder
{

class Init_SetElevatorFloorDestination_Request_floor_destination
{
public:
  Init_SetElevatorFloorDestination_Request_floor_destination()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ue_msgs::srv::SetElevatorFloorDestination_Request floor_destination(::ue_msgs::srv::SetElevatorFloorDestination_Request::_floor_destination_type arg)
  {
    msg_.floor_destination = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::srv::SetElevatorFloorDestination_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::srv::SetElevatorFloorDestination_Request>()
{
  return ue_msgs::srv::builder::Init_SetElevatorFloorDestination_Request_floor_destination();
}

}  // namespace ue_msgs


namespace ue_msgs
{

namespace srv
{

namespace builder
{

class Init_SetElevatorFloorDestination_Response_remarks
{
public:
  explicit Init_SetElevatorFloorDestination_Response_remarks(::ue_msgs::srv::SetElevatorFloorDestination_Response & msg)
  : msg_(msg)
  {}
  ::ue_msgs::srv::SetElevatorFloorDestination_Response remarks(::ue_msgs::srv::SetElevatorFloorDestination_Response::_remarks_type arg)
  {
    msg_.remarks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::srv::SetElevatorFloorDestination_Response msg_;
};

class Init_SetElevatorFloorDestination_Response_success
{
public:
  Init_SetElevatorFloorDestination_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetElevatorFloorDestination_Response_remarks success(::ue_msgs::srv::SetElevatorFloorDestination_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetElevatorFloorDestination_Response_remarks(msg_);
  }

private:
  ::ue_msgs::srv::SetElevatorFloorDestination_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::srv::SetElevatorFloorDestination_Response>()
{
  return ue_msgs::srv::builder::Init_SetElevatorFloorDestination_Response_success();
}

}  // namespace ue_msgs

#endif  // UE_MSGS__SRV__DETAIL__SET_ELEVATOR_FLOOR_DESTINATION__BUILDER_HPP_
