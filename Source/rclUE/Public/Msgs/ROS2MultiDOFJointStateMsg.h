// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/MultiDOFJointState.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "sensor_msgs/msg/multi_dof_joint_state.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2MultiDOFJointStateMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSMultiDOFJointState
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int header_stamp_sec;

	unsigned int header_stamp_nanosec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString header_frame_id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> joint_names;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector> transforms_translation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FQuat> transforms_rotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector> twist_linear;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector> twist_angular;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector> wrench_force;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector> wrench_torque;

	

	void SetFromROS2(const sensor_msgs__msg__MultiDOFJointState& in_ros_data)
	{
    	header_stamp_sec = in_ros_data.header.stamp.sec;

		header_stamp_nanosec = in_ros_data.header.stamp.nanosec;

		header_frame_id.AppendChars(in_ros_data.header.frame_id.data, in_ros_data.header.frame_id.size);

		for (int i = 0; i < in_ros_data.joint_names.size; i++)
		{
			joint_names.Add("");
			joint_names[i].AppendChars(in_ros_data.joint_names.data[i].data,in_ros_data.joint_names.data[i].size);
		}

		for (int i = 0; i < in_ros_data.transforms.size; i++)
		{
			transforms_translation.Add(FVector());
			transforms_translation[i].X = in_ros_data.transforms.data[i].translation.x;
			transforms_translation[i].Y = in_ros_data.transforms.data[i].translation.y;
			transforms_translation[i].Z = in_ros_data.transforms.data[i].translation.z;
		}

		for (int i = 0; i < in_ros_data.transforms.size; i++)
		{
			transforms_rotation.Add(FQuat());
			transforms_rotation[i].X = in_ros_data.transforms.data[i].rotation.x;
			transforms_rotation[i].Y = in_ros_data.transforms.data[i].rotation.y;
			transforms_rotation[i].Z = in_ros_data.transforms.data[i].rotation.z;
			transforms_rotation[i].W = in_ros_data.transforms.data[i].rotation.w;
		}

		for (int i = 0; i < in_ros_data.twist.size; i++)
		{
			twist_linear.Add(FVector());
			twist_linear[i].X = in_ros_data.twist.data[i].linear.x;
			twist_linear[i].Y = in_ros_data.twist.data[i].linear.y;
			twist_linear[i].Z = in_ros_data.twist.data[i].linear.z;
		}

		for (int i = 0; i < in_ros_data.twist.size; i++)
		{
			twist_angular.Add(FVector());
			twist_angular[i].X = in_ros_data.twist.data[i].angular.x;
			twist_angular[i].Y = in_ros_data.twist.data[i].angular.y;
			twist_angular[i].Z = in_ros_data.twist.data[i].angular.z;
		}

		for (int i = 0; i < in_ros_data.wrench.size; i++)
		{
			wrench_force.Add(FVector());
			wrench_force[i].X = in_ros_data.wrench.data[i].force.x;
			wrench_force[i].Y = in_ros_data.wrench.data[i].force.y;
			wrench_force[i].Z = in_ros_data.wrench.data[i].force.z;
		}

		for (int i = 0; i < in_ros_data.wrench.size; i++)
		{
			wrench_torque.Add(FVector());
			wrench_torque[i].X = in_ros_data.wrench.data[i].torque.x;
			wrench_torque[i].Y = in_ros_data.wrench.data[i].torque.y;
			wrench_torque[i].Z = in_ros_data.wrench.data[i].torque.z;
		}

		
	}

	void SetROS2(sensor_msgs__msg__MultiDOFJointState& out_ros_data) const
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

		if (out_ros_data.joint_names.data != nullptr)
		{
			free(out_ros_data.joint_names.data);
		}
		out_ros_data.joint_names.data = (decltype(out_ros_data.joint_names.data))malloc((joint_names.Num())*sizeof(decltype(*out_ros_data.joint_names.data)));
		for (int i = 0; i < joint_names.Num(); i++)
		{
			{
				FTCHARToUTF8 strUtf8( *joint_names[i] );
				int32 strLength = strUtf8.Length();
				if (out_ros_data.joint_names.data[i].data != nullptr)
				{
					free(out_ros_data.joint_names.data[i].data);
				}
				out_ros_data.joint_names.data[i].data = (char*)malloc((strLength+1)*sizeof(char));
				memcpy(out_ros_data.joint_names.data[i].data, TCHAR_TO_UTF8(*joint_names[i]), (strLength+1)*sizeof(char));
				out_ros_data.joint_names.data[i].size = strLength;
				out_ros_data.joint_names.data[i].capacity = strLength + 1;
			}
		}

		if (out_ros_data.transforms.data != nullptr)
		{
			free(out_ros_data.transforms.data);
		}
		out_ros_data.transforms.data = (decltype(out_ros_data.transforms.data))malloc(transforms_translation.Num() * (sizeof(transforms_translation) + sizeof(transforms_rotation)));
		out_ros_data.transforms.size = transforms_translation.Num();
		out_ros_data.transforms.capacity = transforms_translation.Num();
		for (int i = 0; i < transforms_translation.Num(); i++)
		{
			out_ros_data.transforms.data[i].translation.x = transforms_translation[i].X;
			out_ros_data.transforms.data[i].translation.y = transforms_translation[i].Y;
			out_ros_data.transforms.data[i].translation.z = transforms_translation[i].Z;

			out_ros_data.transforms.data[i].rotation.x = transforms_rotation[i].X;
			out_ros_data.transforms.data[i].rotation.y = transforms_rotation[i].Y;
			out_ros_data.transforms.data[i].rotation.z = transforms_rotation[i].Z;
			out_ros_data.transforms.data[i].rotation.w = transforms_rotation[i].W;

			}
	if (out_ros_data.twist.data != nullptr)
		{
			free(out_ros_data.twist.data);
		}
		out_ros_data.twist.data = (decltype(out_ros_data.twist.data))malloc(twist_linear.Num() * (sizeof(twist_linear) + sizeof(twist_angular)));
		out_ros_data.twist.size = twist_linear.Num();
		out_ros_data.twist.capacity = twist_linear.Num();
		for (int i = 0; i < twist_linear.Num(); i++)
		{
			out_ros_data.twist.data[i].linear.x = twist_linear[i].X;
			out_ros_data.twist.data[i].linear.y = twist_linear[i].Y;
			out_ros_data.twist.data[i].linear.z = twist_linear[i].Z;

			out_ros_data.twist.data[i].angular.x = twist_angular[i].X;
			out_ros_data.twist.data[i].angular.y = twist_angular[i].Y;
			out_ros_data.twist.data[i].angular.z = twist_angular[i].Z;

			}
	if (out_ros_data.wrench.data != nullptr)
		{
			free(out_ros_data.wrench.data);
		}
		out_ros_data.wrench.data = (decltype(out_ros_data.wrench.data))malloc(wrench_force.Num() * (sizeof(wrench_force) + sizeof(wrench_torque)));
		out_ros_data.wrench.size = wrench_force.Num();
		out_ros_data.wrench.capacity = wrench_force.Num();
		for (int i = 0; i < wrench_force.Num(); i++)
		{
			out_ros_data.wrench.data[i].force.x = wrench_force[i].X;
			out_ros_data.wrench.data[i].force.y = wrench_force[i].Y;
			out_ros_data.wrench.data[i].force.z = wrench_force[i].Z;

			out_ros_data.wrench.data[i].torque.x = wrench_torque[i].X;
			out_ros_data.wrench.data[i].torque.y = wrench_torque[i].Y;
			out_ros_data.wrench.data[i].torque.z = wrench_torque[i].Z;

			}
	
	}
};

UCLASS()
class RCLUE_API UROS2MultiDOFJointStateMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSMultiDOFJointState& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSMultiDOFJointState& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	sensor_msgs__msg__MultiDOFJointState multi_dof_joint_state_msg;
};