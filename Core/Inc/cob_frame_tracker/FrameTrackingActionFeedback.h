#ifndef _ROS_cob_frame_tracker_FrameTrackingActionFeedback_h
#define _ROS_cob_frame_tracker_FrameTrackingActionFeedback_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalStatus.h"
#include "cob_frame_tracker/FrameTrackingFeedback.h"

namespace cob_frame_tracker
{

  class FrameTrackingActionFeedback : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef actionlib_msgs::GoalStatus _status_type;
      _status_type status;
      typedef cob_frame_tracker::FrameTrackingFeedback _feedback_type;
      _feedback_type feedback;

    FrameTrackingActionFeedback():
      header(),
      status(),
      feedback()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->status.serialize(outbuffer + offset);
      offset += this->feedback.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->status.deserialize(inbuffer + offset);
      offset += this->feedback.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return "cob_frame_tracker/FrameTrackingActionFeedback"; };
    virtual const char * getMD5() override { return "573aea66953e661a14108f1ca29d7710"; };

  };

}
#endif
