#ifndef _ROS_cob_actions_SetStringAction_h
#define _ROS_cob_actions_SetStringAction_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "cob_actions/SetStringActionGoal.h"
#include "cob_actions/SetStringActionResult.h"
#include "cob_actions/SetStringActionFeedback.h"

namespace cob_actions
{

  class SetStringAction : public ros::Msg
  {
    public:
      typedef cob_actions::SetStringActionGoal _action_goal_type;
      _action_goal_type action_goal;
      typedef cob_actions::SetStringActionResult _action_result_type;
      _action_result_type action_result;
      typedef cob_actions::SetStringActionFeedback _action_feedback_type;
      _action_feedback_type action_feedback;

    SetStringAction():
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

    virtual const char * getType() override { return "cob_actions/SetStringAction"; };
    virtual const char * getMD5() override { return "0d6f5fe689cd2ad0c1dea0cab5f7d293"; };

  };

}
#endif
