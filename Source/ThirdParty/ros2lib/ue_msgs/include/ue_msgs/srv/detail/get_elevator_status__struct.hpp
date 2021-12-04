// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ue_msgs:srv/GetElevatorStatus.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__GET_ELEVATOR_STATUS__STRUCT_HPP_
#define UE_MSGS__SRV__DETAIL__GET_ELEVATOR_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ue_msgs__srv__GetElevatorStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__srv__GetElevatorStatus_Request __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetElevatorStatus_Request_
{
  using Type = GetElevatorStatus_Request_<ContainerAllocator>;

  explicit GetElevatorStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dummy = false;
    }
  }

  explicit GetElevatorStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dummy = false;
    }
  }

  // field types and members
  using _dummy_type =
    bool;
  _dummy_type dummy;

  // setters for named parameter idiom
  Type & set__dummy(
    const bool & _arg)
  {
    this->dummy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::srv::GetElevatorStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::srv::GetElevatorStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::srv::GetElevatorStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::srv::GetElevatorStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::srv::GetElevatorStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::srv::GetElevatorStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::srv::GetElevatorStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::srv::GetElevatorStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::srv::GetElevatorStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::srv::GetElevatorStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__srv__GetElevatorStatus_Request
    std::shared_ptr<ue_msgs::srv::GetElevatorStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__srv__GetElevatorStatus_Request
    std::shared_ptr<ue_msgs::srv::GetElevatorStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetElevatorStatus_Request_ & other) const
  {
    if (this->dummy != other.dummy) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetElevatorStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetElevatorStatus_Request_

// alias to use template instance with default allocator
using GetElevatorStatus_Request =
  ue_msgs::srv::GetElevatorStatus_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ue_msgs


#ifndef _WIN32
# define DEPRECATED__ue_msgs__srv__GetElevatorStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__srv__GetElevatorStatus_Response __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetElevatorStatus_Response_
{
  using Type = GetElevatorStatus_Response_<ContainerAllocator>;

  explicit GetElevatorStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->door_open = false;
      this->current_floor = 0l;
      this->nb_reservations = 0l;
    }
  }

  explicit GetElevatorStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->door_open = false;
      this->current_floor = 0l;
      this->nb_reservations = 0l;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _door_open_type =
    bool;
  _door_open_type door_open;
  using _current_floor_type =
    int32_t;
  _current_floor_type current_floor;
  using _nb_reservations_type =
    int32_t;
  _nb_reservations_type nb_reservations;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__door_open(
    const bool & _arg)
  {
    this->door_open = _arg;
    return *this;
  }
  Type & set__current_floor(
    const int32_t & _arg)
  {
    this->current_floor = _arg;
    return *this;
  }
  Type & set__nb_reservations(
    const int32_t & _arg)
  {
    this->nb_reservations = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::srv::GetElevatorStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::srv::GetElevatorStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::srv::GetElevatorStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::srv::GetElevatorStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::srv::GetElevatorStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::srv::GetElevatorStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::srv::GetElevatorStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::srv::GetElevatorStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::srv::GetElevatorStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::srv::GetElevatorStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__srv__GetElevatorStatus_Response
    std::shared_ptr<ue_msgs::srv::GetElevatorStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__srv__GetElevatorStatus_Response
    std::shared_ptr<ue_msgs::srv::GetElevatorStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetElevatorStatus_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->door_open != other.door_open) {
      return false;
    }
    if (this->current_floor != other.current_floor) {
      return false;
    }
    if (this->nb_reservations != other.nb_reservations) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetElevatorStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetElevatorStatus_Response_

// alias to use template instance with default allocator
using GetElevatorStatus_Response =
  ue_msgs::srv::GetElevatorStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ue_msgs

namespace ue_msgs
{

namespace srv
{

struct GetElevatorStatus
{
  using Request = ue_msgs::srv::GetElevatorStatus_Request;
  using Response = ue_msgs::srv::GetElevatorStatus_Response;
};

}  // namespace srv

}  // namespace ue_msgs

#endif  // UE_MSGS__SRV__DETAIL__GET_ELEVATOR_STATUS__STRUCT_HPP_
