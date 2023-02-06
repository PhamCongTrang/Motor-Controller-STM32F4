#ifndef _ROS_cartesian_control_msgs_CartesianTolerance_h
#define _ROS_cartesian_control_msgs_CartesianTolerance_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "geometry_msgs/Vector3.h"
#include "geometry_msgs/Twist.h"
#include "geometry_msgs/Accel.h"

namespace cartesian_control_msgs
{

  class CartesianTolerance : public ros::Msg
  {
    public:
      typedef geometry_msgs::Vector3 _position_error_type;
      _position_error_type position_error;
      typedef geometry_msgs::Vector3 _orientation_error_type;
      _orientation_error_type orientation_error;
      typedef geometry_msgs::Twist _twist_error_type;
      _twist_error_type twist_error;
      typedef geometry_msgs::Accel _acceleration_error_type;
      _acceleration_error_type acceleration_error;

    CartesianTolerance():
      position_error(),
      orientation_error(),
      twist_error(),
      acceleration_error()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->position_error.serialize(outbuffer + offset);
      offset += this->orientation_error.serialize(outbuffer + offset);
      offset += this->twist_error.serialize(outbuffer + offset);
      offset += this->acceleration_error.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->position_error.deserialize(inbuffer + offset);
      offset += this->orientation_error.deserialize(inbuffer + offset);
      offset += this->twist_error.deserialize(inbuffer + offset);
      offset += this->acceleration_error.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return "cartesian_control_msgs/CartesianTolerance"; };
    virtual const char * getMD5() override { return "af7b81a920293904e6a5480495adb8d1"; };

  };

}
#endif
