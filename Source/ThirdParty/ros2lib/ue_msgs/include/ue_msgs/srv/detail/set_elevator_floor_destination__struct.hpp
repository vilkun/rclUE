// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ue_msgs:srv/SetElevatorFloorDestination.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__SET_ELEVATOR_FLOOR_DESTINATION__STRUCT_HPP_
#define UE_MSGS__SRV__DETAIL__SET_ELEVATOR_FLOOR_DESTINATION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ue_msgs__srv__SetElevatorFloorDestination_Request __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__srv__SetElevatorFloorDestination_Request __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetElevatorFloorDestination_Request_
{
  using Type = SetElevatorFloorDestination_Request_<ContainerAllocator>;

  explicit SetElevatorFloorDestination_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->floor_destination = 0l;
    }
  }

  explicit SetElevatorFloorDestination_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->floor_destination = 0l;
    }
  }

  // field types and members
  using _floor_destination_type =
    int32_t;
  _floor_destination_type floor_destination;

  // setters for named parameter idiom
  Type & set__floor_destination(
    const int32_t & _arg)
  {
    this->floor_destination = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::srv::SetElevatorFloorDestination_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::srv::SetElevatorFloorDestination_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::srv::SetElevatorFloorDestination_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::srv::SetElevatorFloorDestination_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::srv::SetElevatorFloorDestination_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::srv::SetElevatorFloorDestination_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::srv::SetElevatorFloorDestination_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::srv::SetElevatorFloorDestination_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::srv::SetElevatorFloorDestination_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::srv::SetElevatorFloorDestination_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__srv__SetElevatorFloorDestination_Request
    std::shared_ptr<ue_msgs::srv::SetElevatorFloorDestination_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__srv__SetElevatorFloorDestination_Request
    std::shared_ptr<ue_msgs::srv::SetElevatorFloorDestination_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetElevatorFloorDestination_Request_ & other) const
  {
    if (this->floor_destination != other.floor_destination) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetElevatorFloorDestination_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetElevatorFloorDestination_Request_

// alias to use template instance with default allocator
using SetElevatorFloorDestination_Request =
  ue_msgs::srv::SetElevatorFloorDestination_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ue_msgs


#ifndef _WIN32
# define DEPRECATED__ue_msgs__srv__SetElevatorFloorDestination_Response __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__srv__SetElevatorFloorDestination_Response __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetElevatorFloorDestination_Response_
{
  using Type = SetElevatorFloorDestination_Response_<ContainerAllocator>;

  explicit SetElevatorFloorDestination_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->remarks = "";
    }
  }

  explicit SetElevatorFloorDestination_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : remarks(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->remarks = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _remarks_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _remarks_type remarks;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__remarks(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->remarks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::srv::SetElevatorFloorDestination_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::srv::SetElevatorFloorDestination_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::srv::SetElevatorFloorDestination_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::srv::SetElevatorFloorDestination_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::srv::SetElevatorFloorDestination_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::srv::SetElevatorFloorDestination_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::srv::SetElevatorFloorDestination_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::srv::SetElevatorFloorDestination_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::srv::SetElevatorFloorDestination_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::srv::SetElevatorFloorDestination_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__srv__SetElevatorFloorDestination_Response
    std::shared_ptr<ue_msgs::srv::SetElevatorFloorDestination_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__srv__SetElevatorFloorDestination_Response
    std::shared_ptr<ue_msgs::srv::SetElevatorFloorDestination_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetElevatorFloorDestination_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->remarks != other.remarks) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetElevatorFloorDestination_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetElevatorFloorDestination_Response_

// alias to use template instance with default allocator
using SetElevatorFloorDestination_Response =
  ue_msgs::srv::SetElevatorFloorDestination_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ue_msgs

namespace ue_msgs
{

namespace srv
{

struct SetElevatorFloorDestination
{
  using Request = ue_msgs::srv::SetElevatorFloorDestination_Request;
  using Response = ue_msgs::srv::SetElevatorFloorDestination_Response;
};

}  // namespace srv

}  // namespace ue_msgs

#endif  // UE_MSGS__SRV__DETAIL__SET_ELEVATOR_FLOOR_DESTINATION__STRUCT_HPP_
