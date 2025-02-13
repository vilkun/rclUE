// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/Accel.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "geometry_msgs/msg/accel.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2AccelMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSAccel
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector linear;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector angular;

	

	void SetFromROS2(const geometry_msgs__msg__Accel& in_ros_data)
	{
    	linear.X = in_ros_data.linear.x;
		linear.Y = in_ros_data.linear.y;
		linear.Z = in_ros_data.linear.z;

		angular.X = in_ros_data.angular.x;
		angular.Y = in_ros_data.angular.y;
		angular.Z = in_ros_data.angular.z;

		
	}

	void SetROS2(geometry_msgs__msg__Accel& out_ros_data) const
	{
    	out_ros_data.linear.x = linear.X;
		out_ros_data.linear.y = linear.Y;
		out_ros_data.linear.z = linear.Z;

		out_ros_data.angular.x = angular.X;
		out_ros_data.angular.y = angular.Y;
		out_ros_data.angular.z = angular.Z;

		
	}
};

UCLASS()
class RCLUE_API UROS2AccelMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSAccel& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSAccel& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	geometry_msgs__msg__Accel accel_msg;
};