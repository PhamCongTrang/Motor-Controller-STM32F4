#ifndef _ROS_cob_cartesian_controller_CartesianControllerAction_h
#define _ROS_cob_cartesian_controller_CartesianControllerAction_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "cob_cartesian_controller/CartesianControllerActionGoal.h"
#include "cob_cartesian_controller/CartesianControllerActionResult.h"
#include "cob_cartesian_controller/CartesianControllerActionFeedback.h"

namespace cob_cartesian_controller
{

  class CartesianControllerAction : public ros::Msg
  {
    public:
      typedef cob_cartesian_controller::CartesianControllerActionGoal _action_goal_type;
      _action_goal_type action_goal;
      typedef cob_cartesian_controller::CartesianControllerActionResult _action_result_type;
      _action_result_type action_result;
      typedef cob_cartesian_controller::CartesianControllerActionFeedback _action_feedback_type;
      _action_feedback_type action_feedback;

    CartesianControllerAction():
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

    virtual const char * getType() override { return "cob_cartesian_controller/CartesianControllerAction"; };
    virtual const char * getMD5() override { return "6d4c7a6b6500da8a3e3778cdc0e6ebc8"; };

  };

}
#endif
