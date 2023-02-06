#ifndef _ROS_cob_actions_DockAction_h
#define _ROS_cob_actions_DockAction_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "cob_actions/DockActionGoal.h"
#include "cob_actions/DockActionResult.h"
#include "cob_actions/DockActionFeedback.h"

namespace cob_actions
{

  class DockAction : public ros::Msg
  {
    public:
      typedef cob_actions::DockActionGoal _action_goal_type;
      _action_goal_type action_goal;
      typedef cob_actions::DockActionResult _action_result_type;
      _action_result_type action_result;
      typedef cob_actions::DockActionFeedback _action_feedback_type;
      _action_feedback_type action_feedback;

    DockAction():
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

    virtual const char * getType() override { return "cob_actions/DockAction"; };
    virtual const char * getMD5() override { return "5c6a8e2c92e329e8aaad33bd8c8b2c0a"; };

  };

}
#endif
