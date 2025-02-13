// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from ue_msgs/EntityState.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "ue_msgs/msg/entity_state.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2EntityStateMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSEntityState
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString name;

	double pose_position_x;

	double pose_position_y;

	double pose_position_z;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuat pose_orientation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector twist_linear;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector twist_angular;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString reference_frame;

	

	void SetFromROS2(const ue_msgs__msg__EntityState& in_ros_data)
	{
    	name.AppendChars(in_ros_data.name.data, in_ros_data.name.size);

		pose_position_x = in_ros_data.pose.position.x;

		pose_position_y = in_ros_data.pose.position.y;

		pose_position_z = in_ros_data.pose.position.z;

		pose_orientation.X = in_ros_data.pose.orientation.x;
		pose_orientation.Y = in_ros_data.pose.orientation.y;
		pose_orientation.Z = in_ros_data.pose.orientation.z;
		pose_orientation.W = in_ros_data.pose.orientation.w;

		twist_linear.X = in_ros_data.twist.linear.x;
		twist_linear.Y = in_ros_data.twist.linear.y;
		twist_linear.Z = in_ros_data.twist.linear.z;

		twist_angular.X = in_ros_data.twist.angular.x;
		twist_angular.Y = in_ros_data.twist.angular.y;
		twist_angular.Z = in_ros_data.twist.angular.z;

		reference_frame.AppendChars(in_ros_data.reference_frame.data, in_ros_data.reference_frame.size);

		
	}

	void SetROS2(ue_msgs__msg__EntityState& out_ros_data) const
	{
    	{
			FTCHARToUTF8 strUtf8( *name );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.name.data != nullptr)
		{
			free(out_ros_data.name.data);
		}
		out_ros_data.name.data = (decltype(out_ros_data.name.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.name.data)));
		memcpy(out_ros_data.name.data, TCHAR_TO_UTF8(*name), (strLength+1)*sizeof(char));
			out_ros_data.name.size = strLength;
			out_ros_data.name.capacity = strLength + 1;
		}

		out_ros_data.pose.position.x = pose_position_x;

		out_ros_data.pose.position.y = pose_position_y;

		out_ros_data.pose.position.z = pose_position_z;

		out_ros_data.pose.orientation.x = pose_orientation.X;
		out_ros_data.pose.orientation.y = pose_orientation.Y;
		out_ros_data.pose.orientation.z = pose_orientation.Z;
		out_ros_data.pose.orientation.w = pose_orientation.W;

		out_ros_data.twist.linear.x = twist_linear.X;
		out_ros_data.twist.linear.y = twist_linear.Y;
		out_ros_data.twist.linear.z = twist_linear.Z;

		out_ros_data.twist.angular.x = twist_angular.X;
		out_ros_data.twist.angular.y = twist_angular.Y;
		out_ros_data.twist.angular.z = twist_angular.Z;

		{
			FTCHARToUTF8 strUtf8( *reference_frame );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.reference_frame.data != nullptr)
		{
			free(out_ros_data.reference_frame.data);
		}
		out_ros_data.reference_frame.data = (decltype(out_ros_data.reference_frame.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.reference_frame.data)));
		memcpy(out_ros_data.reference_frame.data, TCHAR_TO_UTF8(*reference_frame), (strLength+1)*sizeof(char));
			out_ros_data.reference_frame.size = strLength;
			out_ros_data.reference_frame.capacity = strLength + 1;
		}

		
	}
};

UCLASS()
class RCLUE_API UROS2EntityStateMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSEntityState& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSEntityState& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	ue_msgs__msg__EntityState entity_state_msg;
};