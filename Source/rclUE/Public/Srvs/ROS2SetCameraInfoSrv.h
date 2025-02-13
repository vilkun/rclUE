// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/SetCameraInfo.srv - do not modify

#pragma once

#include <CoreMinimal.h>

#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"
#include "sensor_msgs/srv/set_camera_info.h"

#include "ROS2SetCameraInfoSrv.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSSetCameraInfo_Request
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int camera_info_header_stamp_sec;

	unsigned int camera_info_header_stamp_nanosec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString camera_info_header_frame_id;

	unsigned int camera_info_height;

	unsigned int camera_info_width;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString camera_info_distortion_model;

	TArray<double> camera_info_d;

	TArray<double> camera_info_k;

	TArray<double> camera_info_r;

	TArray<double> camera_info_p;

	unsigned int camera_info_binning_x;

	unsigned int camera_info_binning_y;

	unsigned int camera_info_roi_x_offset;

	unsigned int camera_info_roi_y_offset;

	unsigned int camera_info_roi_height;

	unsigned int camera_info_roi_width;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool camera_info_roi_do_rectify;

	

	void SetFromROS2(const sensor_msgs__srv__SetCameraInfo_Request& in_ros_data)
	{
    	camera_info_header_stamp_sec = in_ros_data.camera_info.header.stamp.sec;

		camera_info_header_stamp_nanosec = in_ros_data.camera_info.header.stamp.nanosec;

		camera_info_header_frame_id.AppendChars(in_ros_data.camera_info.header.frame_id.data, in_ros_data.camera_info.header.frame_id.size);

		camera_info_height = in_ros_data.camera_info.height;

		camera_info_width = in_ros_data.camera_info.width;

		camera_info_distortion_model.AppendChars(in_ros_data.camera_info.distortion_model.data, in_ros_data.camera_info.distortion_model.size);

		for (int i = 0; i < in_ros_data.camera_info.d.size; i++)
		{
			camera_info_d.Add(in_ros_data.camera_info.d.data[i]);
		}

		for (int i = 0; i < 9; i++)
		{
			camera_info_k.Add(in_ros_data.camera_info.k[i]);
		}

		for (int i = 0; i < 9; i++)
		{
			camera_info_r.Add(in_ros_data.camera_info.r[i]);
		}

		for (int i = 0; i < 12; i++)
		{
			camera_info_p.Add(in_ros_data.camera_info.p[i]);
		}

		camera_info_binning_x = in_ros_data.camera_info.binning_x;

		camera_info_binning_y = in_ros_data.camera_info.binning_y;

		camera_info_roi_x_offset = in_ros_data.camera_info.roi.x_offset;

		camera_info_roi_y_offset = in_ros_data.camera_info.roi.y_offset;

		camera_info_roi_height = in_ros_data.camera_info.roi.height;

		camera_info_roi_width = in_ros_data.camera_info.roi.width;

		camera_info_roi_do_rectify = in_ros_data.camera_info.roi.do_rectify;

		
	}

	void SetROS2(sensor_msgs__srv__SetCameraInfo_Request& out_ros_data) const
	{
    	out_ros_data.camera_info.header.stamp.sec = camera_info_header_stamp_sec;

		out_ros_data.camera_info.header.stamp.nanosec = camera_info_header_stamp_nanosec;

		{
			FTCHARToUTF8 strUtf8( *camera_info_header_frame_id );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.camera_info.header.frame_id.data != nullptr)
		{
			free(out_ros_data.camera_info.header.frame_id.data);
		}
		out_ros_data.camera_info.header.frame_id.data = (decltype(out_ros_data.camera_info.header.frame_id.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.camera_info.header.frame_id.data)));
		memcpy(out_ros_data.camera_info.header.frame_id.data, TCHAR_TO_UTF8(*camera_info_header_frame_id), (strLength+1)*sizeof(char));
			out_ros_data.camera_info.header.frame_id.size = strLength;
			out_ros_data.camera_info.header.frame_id.capacity = strLength + 1;
		}

		out_ros_data.camera_info.height = camera_info_height;

		out_ros_data.camera_info.width = camera_info_width;

		{
			FTCHARToUTF8 strUtf8( *camera_info_distortion_model );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.camera_info.distortion_model.data != nullptr)
		{
			free(out_ros_data.camera_info.distortion_model.data);
		}
		out_ros_data.camera_info.distortion_model.data = (decltype(out_ros_data.camera_info.distortion_model.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.camera_info.distortion_model.data)));
		memcpy(out_ros_data.camera_info.distortion_model.data, TCHAR_TO_UTF8(*camera_info_distortion_model), (strLength+1)*sizeof(char));
			out_ros_data.camera_info.distortion_model.size = strLength;
			out_ros_data.camera_info.distortion_model.capacity = strLength + 1;
		}

		if (out_ros_data.camera_info.d.data != nullptr)
		{
			free(out_ros_data.camera_info.d.data);
		}
		out_ros_data.camera_info.d.data = (decltype(out_ros_data.camera_info.d.data))malloc((camera_info_d.Num())*sizeof(decltype(*out_ros_data.camera_info.d.data)));
		
		for (int i = 0; i < camera_info_d.Num(); i++)
		{
			out_ros_data.camera_info.d.data[i] = camera_info_d[i];
		}

		out_ros_data.camera_info.d.size = camera_info_d.Num();
		out_ros_data.camera_info.d.capacity = camera_info_d.Num();

		for (int i = 0; i < 9; i++)
		{
			out_ros_data.camera_info.k[i] = camera_info_k[i];
		}

		for (int i = 0; i < 9; i++)
		{
			out_ros_data.camera_info.r[i] = camera_info_r[i];
		}

		for (int i = 0; i < 12; i++)
		{
			out_ros_data.camera_info.p[i] = camera_info_p[i];
		}

		out_ros_data.camera_info.binning_x = camera_info_binning_x;

		out_ros_data.camera_info.binning_y = camera_info_binning_y;

		out_ros_data.camera_info.roi.x_offset = camera_info_roi_x_offset;

		out_ros_data.camera_info.roi.y_offset = camera_info_roi_y_offset;

		out_ros_data.camera_info.roi.height = camera_info_roi_height;

		out_ros_data.camera_info.roi.width = camera_info_roi_width;

		out_ros_data.camera_info.roi.do_rectify = camera_info_roi_do_rectify;

		
	}
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSSetCameraInfo_Response
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool success;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString status_message;

	

	void SetFromROS2(const sensor_msgs__srv__SetCameraInfo_Response& in_ros_data)
	{
    	success = in_ros_data.success;

		status_message.AppendChars(in_ros_data.status_message.data, in_ros_data.status_message.size);

		
	}

	void SetROS2(sensor_msgs__srv__SetCameraInfo_Response& out_ros_data) const
	{
    	out_ros_data.success = success;

		{
			FTCHARToUTF8 strUtf8( *status_message );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.status_message.data != nullptr)
		{
			free(out_ros_data.status_message.data);
		}
		out_ros_data.status_message.data = (decltype(out_ros_data.status_message.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.status_message.data)));
		memcpy(out_ros_data.status_message.data, TCHAR_TO_UTF8(*status_message), (strLength+1)*sizeof(char));
			out_ros_data.status_message.size = strLength;
			out_ros_data.status_message.capacity = strLength + 1;
		}

		
	}
};

UCLASS()
class RCLUE_API UROS2SetCameraInfoSrv : public UROS2GenericSrv
{
	GENERATED_BODY()

public:
  	UFUNCTION(BlueprintCallable)
	virtual void Init() override;

  	UFUNCTION(BlueprintCallable)
	virtual void Fini() override;

	virtual const rosidl_service_type_support_t* GetTypeSupport() const override;
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void SetRequest(const FROSSetCameraInfo_Request& Request);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void GetRequest(FROSSetCameraInfo_Request& Request) const;
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void SetResponse(const FROSSetCameraInfo_Response& Response);
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void GetResponse(FROSSetCameraInfo_Response& Response) const;
	
	virtual void* GetRequest() override;
	virtual void* GetResponse() override;

private:
	virtual FString SrvRequestToString() const override;
	virtual FString SrvResponseToString() const override;

	sensor_msgs__srv__SetCameraInfo_Request SetCameraInfo_req;
	sensor_msgs__srv__SetCameraInfo_Response SetCameraInfo_res;
};