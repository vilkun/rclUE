// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/Point.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "geometry_msgs/msg/point.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2PointMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSPoint
{
	GENERATED_BODY()

public:
	double x;

	double y;

	double z;

	

	void SetFromROS2(const geometry_msgs__msg__Point& in_ros_data)
	{
    	x = in_ros_data.x;

		y = in_ros_data.y;

		z = in_ros_data.z;

		
	}

	void SetROS2(geometry_msgs__msg__Point& out_ros_data) const
	{
    	out_ros_data.x = x;

		out_ros_data.y = y;

		out_ros_data.z = z;

		
	}
};

UCLASS()
class RCLUE_API UROS2PointMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSPoint& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSPoint& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	geometry_msgs__msg__Point point_msg;
};