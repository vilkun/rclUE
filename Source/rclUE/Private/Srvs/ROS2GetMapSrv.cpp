// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from nav_msgs/GetMap.srv - do not modify

#include "Srvs/ROS2GetMapSrv.h"

const rosidl_service_type_support_t* UROS2GetMapSrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(nav_msgs, srv, GetMap);
}

void UROS2GetMapSrv::Init()
{
    nav_msgs__srv__GetMap_Request__init(&GetMap_req);
    nav_msgs__srv__GetMap_Response__init(&GetMap_res);
}

void UROS2GetMapSrv::Fini()
{
    nav_msgs__srv__GetMap_Request__fini(&GetMap_req);
    nav_msgs__srv__GetMap_Response__fini(&GetMap_res);
}

void UROS2GetMapSrv::SetRequest(const FROSGetMap_Request& Request)
{
    Request.SetROS2(GetMap_req);
}

void UROS2GetMapSrv::GetRequest(FROSGetMap_Request& Request) const
{
    Request.SetFromROS2(GetMap_req);
}

void UROS2GetMapSrv::SetResponse(const FROSGetMap_Response& Response)
{
    Response.SetROS2(GetMap_res);
}

void UROS2GetMapSrv::GetResponse(FROSGetMap_Response& Response) const
{
    Response.SetFromROS2(GetMap_res);
}

void* UROS2GetMapSrv::GetRequest()
{
    return &GetMap_req;
}

void* UROS2GetMapSrv::GetResponse()
{
    return &GetMap_res;
}

FString UROS2GetMapSrv::SrvRequestToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}

FString UROS2GetMapSrv::SrvResponseToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}