#ifndef _ROS_cob_actions_SetIntAction_h
#define _ROS_cob_actions_SetIntAction_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "cob_actions/SetIntActionGoal.h"
#include "cob_actions/SetIntActionResult.h"
#include "cob_actions/SetIntActionFeedback.h"

namespace cob_actions
{

  class SetIntAction : public ros::Msg
  {
    public:
      typedef cob_actions::SetIntActionGoal _action_goal_type;
      _action_goal_type action_goal;
      typedef cob_actions::SetIntActionResult _action_result_type;
      _action_result_type action_result;
      typedef cob_actions::SetIntActionFeedback _action_feedback_type;
      _action_feedback_type action_feedback;

    SetIntAction():
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

    virtual const char * getType() override { return "cob_actions/SetIntAction"; };
    virtual const char * getMD5() override { return "b11d6f491d05b51e8d57714e43711737"; };

  };

}
#endif
