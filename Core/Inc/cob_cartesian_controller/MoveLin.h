#ifndef _ROS_cob_cartesian_controller_MoveLin_h
#define _ROS_cob_cartesian_controller_MoveLin_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "geometry_msgs/Pose.h"

namespace cob_cartesian_controller
{

  class MoveLin : public ros::Msg
  {
    public:
      typedef geometry_msgs::Pose _pose_goal_type;
      _pose_goal_type pose_goal;
      typedef const char* _frame_id_type;
      _frame_id_type frame_id;

    MoveLin():
      pose_goal(),
      frame_id("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->pose_goal.serialize(outbuffer + offset);
      uint32_t length_frame_id = strlen(this->frame_id);
      varToArr(outbuffer + offset, length_frame_id);
      offset += 4;
      memcpy(outbuffer + offset, this->frame_id, length_frame_id);
      offset += length_frame_id;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->pose_goal.deserialize(inbuffer + offset);
      uint32_t length_frame_id;
      arrToVar(length_frame_id, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_frame_id; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_frame_id-1]=0;
      this->frame_id = (char *)(inbuffer + offset-1);
      offset += length_frame_id;
     return offset;
    }

    virtual const char * getType() override { return "cob_cartesian_controller/MoveLin"; };
    virtual const char * getMD5() override { return "70cac8ff7d59d99584e4fc6cb33417df"; };

  };

}
#endif
