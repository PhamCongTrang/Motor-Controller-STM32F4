#ifndef _ROS_cob_actions_SetFloatAction_h
#define _ROS_cob_actions_SetFloatAction_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "cob_actions/SetFloatActionGoal.h"
#include "cob_actions/SetFloatActionResult.h"
#include "cob_actions/SetFloatActionFeedback.h"

namespace cob_actions
{

  class SetFloatAction : public ros::Msg
  {
    public:
      typedef cob_actions::SetFloatActionGoal _action_goal_type;
      _action_goal_type action_goal;
      typedef cob_actions::SetFloatActionResult _action_result_type;
      _action_result_type action_result;
      typedef cob_actions::SetFloatActionFeedback _action_feedback_type;
      _action_feedback_type action_feedback;

    SetFloatAction():
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

    virtual const char * getType() override { return "cob_actions/SetFloatAction"; };
    virtual const char * getMD5() override { return "2d252264954c3cb3823b6b1d18b8dc68"; };

  };

}
#endif
