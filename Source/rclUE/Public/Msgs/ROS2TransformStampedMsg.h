// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/TransformStamped.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "geometry_msgs/msg/transform_stamped.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2TransformStampedMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSTransformStamped
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int header_stamp_sec;

	unsigned int header_stamp_nanosec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString header_frame_id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString child_frame_id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector transform_translation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuat transform_rotation;

	

	void SetFromROS2(const geometry_msgs__msg__TransformStamped& in_ros_data)
	{
    	header_stamp_sec = in_ros_data.header.stamp.sec;

		header_stamp_nanosec = in_ros_data.header.stamp.nanosec;

		header_frame_id.AppendChars(in_ros_data.header.frame_id.data, in_ros_data.header.frame_id.size);

		child_frame_id.AppendChars(in_ros_data.child_frame_id.data, in_ros_data.child_frame_id.size);

		transform_translation.X = in_ros_data.transform.translation.x;
		transform_translation.Y = in_ros_data.transform.translation.y;
		transform_translation.Z = in_ros_data.transform.translation.z;

		transform_rotation.X = in_ros_data.transform.rotation.x;
		transform_rotation.Y = in_ros_data.transform.rotation.y;
		transform_rotation.Z = in_ros_data.transform.rotation.z;
		transform_rotation.W = in_ros_data.transform.rotation.w;

		
	}

	void SetROS2(geometry_msgs__msg__TransformStamped& out_ros_data) const
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

		{
			FTCHARToUTF8 strUtf8( *child_frame_id );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.child_frame_id.data != nullptr)
		{
			free(out_ros_data.child_frame_id.data);
		}
		out_ros_data.child_frame_id.data = (decltype(out_ros_data.child_frame_id.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.child_frame_id.data)));
		memcpy(out_ros_data.child_frame_id.data, TCHAR_TO_UTF8(*child_frame_id), (strLength+1)*sizeof(char));
			out_ros_data.child_frame_id.size = strLength;
			out_ros_data.child_frame_id.capacity = strLength + 1;
		}

		out_ros_data.transform.translation.x = transform_translation.X;
		out_ros_data.transform.translation.y = transform_translation.Y;
		out_ros_data.transform.translation.z = transform_translation.Z;

		out_ros_data.transform.rotation.x = transform_rotation.X;
		out_ros_data.transform.rotation.y = transform_rotation.Y;
		out_ros_data.transform.rotation.z = transform_rotation.Z;
		out_ros_data.transform.rotation.w = transform_rotation.W;

		
	}
};

UCLASS()
class RCLUE_API UROS2TransformStampedMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSTransformStamped& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSTransformStamped& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	geometry_msgs__msg__TransformStamped transform_stamped_msg;
};