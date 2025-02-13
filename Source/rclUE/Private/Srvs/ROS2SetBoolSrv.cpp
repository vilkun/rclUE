// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/SetBool.srv - do not modify

#include "Srvs/ROS2SetBoolSrv.h"

const rosidl_service_type_support_t* UROS2SetBoolSrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(example_interfaces, srv, SetBool);
}

void UROS2SetBoolSrv::Init()
{
    example_interfaces__srv__SetBool_Request__init(&SetBool_req);
    example_interfaces__srv__SetBool_Response__init(&SetBool_res);
}

void UROS2SetBoolSrv::Fini()
{
    example_interfaces__srv__SetBool_Request__fini(&SetBool_req);
    example_interfaces__srv__SetBool_Response__fini(&SetBool_res);
}

void UROS2SetBoolSrv::SetRequest(const FROSSetBool_Request& Request)
{
    Request.SetROS2(SetBool_req);
}

void UROS2SetBoolSrv::GetRequest(FROSSetBool_Request& Request) const
{
    Request.SetFromROS2(SetBool_req);
}

void UROS2SetBoolSrv::SetResponse(const FROSSetBool_Response& Response)
{
    Response.SetROS2(SetBool_res);
}

void UROS2SetBoolSrv::GetResponse(FROSSetBool_Response& Response) const
{
    Response.SetFromROS2(SetBool_res);
}

void* UROS2SetBoolSrv::GetRequest()
{
    return &SetBool_req;
}

void* UROS2SetBoolSrv::GetResponse()
{
    return &SetBool_res;
}

FString UROS2SetBoolSrv::SrvRequestToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}

FString UROS2SetBoolSrv::SrvResponseToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}