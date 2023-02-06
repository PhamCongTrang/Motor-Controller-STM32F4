#ifndef _ROS_cob_frame_tracker_FrameTrackingAction_h
#define _ROS_cob_frame_tracker_FrameTrackingAction_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "cob_frame_tracker/FrameTrackingActionGoal.h"
#include "cob_frame_tracker/FrameTrackingActionResult.h"
#include "cob_frame_tracker/FrameTrackingActionFeedback.h"

namespace cob_frame_tracker
{

  class FrameTrackingAction : public ros::Msg
  {
    public:
      typedef cob_frame_tracker::FrameTrackingActionGoal _action_goal_type;
      _action_goal_type action_goal;
      typedef cob_frame_tracker::FrameTrackingActionResult _action_result_type;
      _action_result_type action_result;
      typedef cob_frame_tracker::FrameTrackingActionFeedback _action_feedback_type;
      _action_feedback_type action_feedback;

    FrameTrackingAction():
      action_goal(),
      action_result(),
      action_feedback()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->action_goal.serialize(outbuffer + offset);
      offset += this->action_result.serialize(outbuffer + offset);
      offset += this->action_feedback.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->action_goal.deserialize(inbuffer + offset);
      offset += this->action_result.deserialize(inbuffer + offset);
      offset += this->action_feedback.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return "cob_frame_tracker/FrameTrackingAction"; };
    virtual const char * getMD5() override { return "16582ddc5d15eb6f94e19f890cd956ff"; };

  };

}
#endif
