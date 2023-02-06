#ifndef _ROS_cob_actions_SetBoolAction_h
#define _ROS_cob_actions_SetBoolAction_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "cob_actions/SetBoolActionGoal.h"
#include "cob_actions/SetBoolActionResult.h"
#include "cob_actions/SetBoolActionFeedback.h"

namespace cob_actions
{

  class SetBoolAction : public ros::Msg
  {
    public:
      typedef cob_actions::SetBoolActionGoal _action_goal_type;
      _action_goal_type action_goal;
      typedef cob_actions::SetBoolActionResult _action_result_type;
      _action_result_type action_result;
      typedef cob_actions::SetBoolActionFeedback _action_feedback_type;
      _action_feedback_type action_feedback;

    SetBoolAction():
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

    virtual const char * getType() override { return "cob_actions/SetBoolAction"; };
    virtual const char * getMD5() override { return "bd02c71e3fb8600d1908fc467cffd71c"; };

  };

}
#endif
