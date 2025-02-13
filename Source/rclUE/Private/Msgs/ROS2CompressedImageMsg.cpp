// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/CompressedImage.msg - do not modify

#include "Msgs/ROS2CompressedImageMsg.h"

#include "Kismet/GameplayStatics.h"

void UROS2CompressedImageMsg::Init()
{
	sensor_msgs__msg__CompressedImage__init(&compressed_image_msg);
}

void UROS2CompressedImageMsg::Fini()
{
	sensor_msgs__msg__CompressedImage__fini(&compressed_image_msg);
}

const rosidl_message_type_support_t* UROS2CompressedImageMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, CompressedImage);
}

void UROS2CompressedImageMsg::SetMsg(const FROSCompressedImage& Inputs)
{
    Inputs.SetROS2(compressed_image_msg);
}

void UROS2CompressedImageMsg::GetMsg(FROSCompressedImage& Outputs) const
{
    Outputs.SetFromROS2(compressed_image_msg);
}

void* UROS2CompressedImageMsg::Get()
{
	return &compressed_image_msg;
}

FString UROS2CompressedImageMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}