// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/WrenchStamped.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "geometry_msgs/msg/wrench_stamped.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2WrenchStampedMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSWrenchStamped
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int header_stamp_sec;

	unsigned int header_stamp_nanosec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString header_frame_id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector wrench_force;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector wrench_torque;

	

	void SetFromROS2(const geometry_msgs__msg__WrenchStamped& in_ros_data)
	{
    	header_stamp_sec = in_ros_data.header.stamp.sec;

		header_stamp_nanosec = in_ros_data.header.stamp.nanosec;

		header_frame_id.AppendChars(in_ros_data.header.frame_id.data, in_ros_data.header.frame_id.size);

		wrench_force.X = in_ros_data.wrench.force.x;
		wrench_force.Y = in_ros_data.wrench.force.y;
		wrench_force.Z = in_ros_data.wrench.force.z;

		wrench_torque.X = in_ros_data.wrench.torque.x;
		wrench_torque.Y = in_ros_data.wrench.torque.y;
		wrench_torque.Z = in_ros_data.wrench.torque.z;

		
	}

	void SetROS2(geometry_msgs__msg__WrenchStamped& out_ros_data) const
	{
    	out_ros_data.header.stamp.sec = header_stamp_sec;

		out_ros_data.header.stamp.nanosec = header_stamp_nanosec;

		{
			FTCHARToUTF8 strUtf8( *header_frame_id );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.header.frame_id.data != nullptr)
		{
			free(out_ros_data.header.frame_id.data);
		}
		out_ros_data.header.frame_id.data = (decltype(out_ros_data.header.frame_id.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.header.frame_id.data)));
		memcpy(out_ros_data.header.frame_id.data, TCHAR_TO_UTF8(*header_frame_id), (strLength+1)*sizeof(char));
			out_ros_data.header.frame_id.size = strLength;
			out_ros_data.header.frame_id.capacity = strLength + 1;
		}

		out_ros_data.wrench.force.x = wrench_force.X;
		out_ros_data.wrench.force.y = wrench_force.Y;
		out_ros_data.wrench.force.z = wrench_force.Z;

		out_ros_data.wrench.torque.x = wrench_torque.X;
		out_ros_data.wrench.torque.y = wrench_torque.Y;
		out_ros_data.wrench.torque.z = wrench_torque.Z;

		
	}
};

UCLASS()
class RCLUE_API UROS2WrenchStampedMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSWrenchStamped& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSWrenchStamped& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	geometry_msgs__msg__WrenchStamped wrench_stamped_msg;
};