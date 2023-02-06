#ifndef _ROS_cob_script_server_StateAction_h
#define _ROS_cob_script_server_StateAction_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "cob_script_server/StateActionGoal.h"
#include "cob_script_server/StateActionResult.h"
#include "cob_script_server/StateActionFeedback.h"

namespace cob_script_server
{

  class StateAction : public ros::Msg
  {
    public:
      typedef cob_script_server::StateActionGoal _action_goal_type;
      _action_goal_type action_goal;
      typedef cob_script_server::StateActionResult _action_result_type;
      _action_result_type action_result;
      typedef cob_script_server::StateActionFeedback _action_feedback_type;
      _action_feedback_type action_feedback;

    StateAction():
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

    virtual const char * getType() override { return "cob_script_server/StateAction"; };
    virtual const char * getMD5() override { return "40f8241715c1af1ecd09c2bda397f113"; };

  };

}
#endif
