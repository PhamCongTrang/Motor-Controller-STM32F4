#ifndef _ROS_cartesian_control_msgs_CartesianTrajectoryPoint_h
#define _ROS_cartesian_control_msgs_CartesianTrajectoryPoint_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "ros/duration.h"
#include "geometry_msgs/Pose.h"
#include "geometry_msgs/Twist.h"
#include "geometry_msgs/Accel.h"
#include "cartesian_control_msgs/CartesianPosture.h"

namespace cartesian_control_msgs
{

  class CartesianTrajectoryPoint : public ros::Msg
  {
    public:
      typedef ros::Duration _time_from_start_type;
      _time_from_start_type time_from_start;
      typedef geometry_msgs::Pose _pose_type;
      _pose_type pose;
      typedef geometry_msgs::Twist _twist_type;
      _twist_type twist;
      typedef geometry_msgs::Accel _acceleration_type;
      _acceleration_type acceleration;
      typedef geometry_msgs::Accel _jerk_type;
      _jerk_type jerk;
      typedef cartesian_control_msgs::CartesianPosture _posture_type;
      _posture_type posture;

    CartesianTrajectoryPoint():
      time_from_start(),
      pose(),
      twist(),
      acceleration(),
      jerk(),
      posture()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->time_from_start.sec >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->time_from_start.sec >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->time_from_start.sec >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->time_from_start.sec >> (8 * 3)) & 0xFF;
      offset += sizeof(this->time_from_start.sec);
      *(outbuffer + offset + 0) = (this->time_from_start.nsec >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->time_from_start.nsec >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->time_from_start.nsec >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->time_from_start.nsec >> (8 * 3)) & 0xFF;
      offset += sizeof(this->time_from_start.nsec);
      offset += this->pose.serialize(outbuffer + offset);
      offset += this->twist.serialize(outbuffer + offset);
      offset += this->acceleration.serialize(outbuffer + offset);
      offset += this->jerk.serialize(outbuffer + offset);
      offset += this->posture.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->time_from_start.sec =  ((uint32_t) (*(inbuffer + offset)));
      this->time_from_start.sec |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->time_from_start.sec |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->time_from_start.sec |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->time_from_start.sec);
      this->time_from_start.nsec =  ((uint32_t) (*(inbuffer + offset)));
      this->time_from_start.nsec |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->time_from_start.nsec |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->time_from_start.nsec |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->time_from_start.nsec);
      offset += this->pose.deserialize(inbuffer + offset);
      offset += this->twist.deserialize(inbuffer + offset);
      offset += this->acceleration.deserialize(inbuffer + offset);
      offset += this->jerk.deserialize(inbuffer + offset);
      offset += this->posture.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return "cartesian_control_msgs/CartesianTrajectoryPoint"; };
    virtual const char * getMD5() override { return "02d556067c148166af2dabae6251c00f"; };

  };

}
#endif
