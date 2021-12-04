// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ue_msgs:srv/GetElevatorStatus.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__GET_ELEVATOR_STATUS__TRAITS_HPP_
#define UE_MSGS__SRV__DETAIL__GET_ELEVATOR_STATUS__TRAITS_HPP_

#include "ue_msgs/srv/detail/get_elevator_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::srv::GetElevatorStatus_Request>()
{
  return "ue_msgs::srv::GetElevatorStatus_Request";
}

template<>
inline const char * name<ue_msgs::srv::GetElevatorStatus_Request>()
{
  return "ue_msgs/srv/GetElevatorStatus_Request";
}

template<>
struct has_fixed_size<ue_msgs::srv::GetElevatorStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ue_msgs::srv::GetElevatorStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ue_msgs::srv::GetElevatorStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::srv::GetElevatorStatus_Response>()
{
  return "ue_msgs::srv::GetElevatorStatus_Response";
}

template<>
inline const char * name<ue_msgs::srv::GetElevatorStatus_Response>()
{
  return "ue_msgs/srv/GetElevatorStatus_Response";
}

template<>
struct has_fixed_size<ue_msgs::srv::GetElevatorStatus_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ue_msgs::srv::GetElevatorStatus_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ue_msgs::srv::GetElevatorStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::srv::GetElevatorStatus>()
{
  return "ue_msgs::srv::GetElevatorStatus";
}

template<>
inline const char * name<ue_msgs::srv::GetElevatorStatus>()
{
  return "ue_msgs/srv/GetElevatorStatus";
}

template<>
struct has_fixed_size<ue_msgs::srv::GetElevatorStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<ue_msgs::srv::GetElevatorStatus_Request>::value &&
    has_fixed_size<ue_msgs::srv::GetElevatorStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<ue_msgs::srv::GetElevatorStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<ue_msgs::srv::GetElevatorStatus_Request>::value &&
    has_bounded_size<ue_msgs::srv::GetElevatorStatus_Response>::value
  >
{
};

template<>
struct is_service<ue_msgs::srv::GetElevatorStatus>
  : std::true_type
{
};

template<>
struct is_service_request<ue_msgs::srv::GetElevatorStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ue_msgs::srv::GetElevatorStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UE_MSGS__SRV__DETAIL__GET_ELEVATOR_STATUS__TRAITS_HPP_
