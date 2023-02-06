#ifndef _ROS_cob_sound_PlayAction_h
#define _ROS_cob_sound_PlayAction_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "cob_sound/PlayActionGoal.h"
#include "cob_sound/PlayActionResult.h"
#include "cob_sound/PlayActionFeedback.h"

namespace cob_sound
{

  class PlayAction : public ros::Msg
  {
    public:
      typedef cob_sound::PlayActionGoal _action_goal_type;
      _action_goal_type action_goal;
      typedef cob_sound::PlayActionResult _action_result_type;
      _action_result_type action_result;
      typedef cob_sound::PlayActionFeedback _action_feedback_type;
      _action_feedback_type action_feedback;

    PlayAction():
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

    virtual const char * getType() override { return "cob_sound/PlayAction"; };
    virtual const char * getMD5() override { return "698163f0203728812f2f985294225b09"; };

  };

}
#endif
