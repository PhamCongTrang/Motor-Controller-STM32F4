#ifndef _ROS_cartesian_control_msgs_FollowCartesianTrajectoryFeedback_h
#define _ROS_cartesian_control_msgs_FollowCartesianTrajectoryFeedback_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "cartesian_control_msgs/CartesianTrajectoryPoint.h"

namespace cartesian_control_msgs
{

  class FollowCartesianTrajectoryFeedback : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef const char* _tcp_frame_type;
      _tcp_frame_type tcp_frame;
      typedef cartesian_control_msgs::CartesianTrajectoryPoint _desired_type;
      _desired_type desired;
      typedef cartesian_control_msgs::CartesianTrajectoryPoint _actual_type;
      _actual_type actual;
      typedef cartesian_control_msgs::CartesianTrajectoryPoint _error_type;
      _error_type error;

    FollowCartesianTrajectoryFeedback():
      header(),
      tcp_frame(""),
      desired(),
      actual(),
      error()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      uint32_t length_tcp_frame = strlen(this->tcp_frame);
      varToArr(outbuffer + offset, length_tcp_frame);
      offset += 4;
      memcpy(outbuffer + offset, this->tcp_frame, length_tcp_frame);
      offset += length_tcp_frame;
      offset += this->desired.serialize(outbuffer + offset);
      offset += this->actual.serialize(outbuffer + offset);
      offset += this->error.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint32_t length_tcp_frame;
      arrToVar(length_tcp_frame, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_tcp_frame; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_tcp_frame-1]=0;
      this->tcp_frame = (char *)(inbuffer + offset-1);
      offset += length_tcp_frame;
      offset += this->desired.deserialize(inbuffer + offset);
      offset += this->actual.deserialize(inbuffer + offset);
      offset += this->error.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return "cartesian_control_msgs/FollowCartesianTrajectoryFeedback"; };
    virtual const char * getMD5() override { return "729376eb4d5d3cbfb2089d26f2f7dd24"; };

  };

}
#endif
