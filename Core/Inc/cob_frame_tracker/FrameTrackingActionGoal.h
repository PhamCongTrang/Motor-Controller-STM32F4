#ifndef _ROS_cob_frame_tracker_FrameTrackingActionGoal_h
#define _ROS_cob_frame_tracker_FrameTrackingActionGoal_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalID.h"
#include "cob_frame_tracker/FrameTrackingGoal.h"

namespace cob_frame_tracker
{

  class FrameTrackingActionGoal : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef actionlib_msgs::GoalID _goal_id_type;
      _goal_id_type goal_id;
      typedef cob_frame_tracker::FrameTrackingGoal _goal_type;
      _goal_type goal;

    FrameTrackingActionGoal():
      header(),
      goal_id(),
      goal()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->goal_id.serialize(outbuffer + offset);
      offset += this->goal.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->goal_id.deserialize(inbuffer + offset);
      offset += this->goal.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return "cob_frame_tracker/FrameTrackingActionGoal"; };
    virtual const char * getMD5() override { return "152fb0b7b7eba5094fe7a58eef570e20"; };

  };

}
#endif
