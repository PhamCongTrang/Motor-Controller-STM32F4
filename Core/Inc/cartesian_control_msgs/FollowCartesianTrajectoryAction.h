#ifndef _ROS_cartesian_control_msgs_FollowCartesianTrajectoryAction_h
#define _ROS_cartesian_control_msgs_FollowCartesianTrajectoryAction_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "cartesian_control_msgs/FollowCartesianTrajectoryActionGoal.h"
#include "cartesian_control_msgs/FollowCartesianTrajectoryActionResult.h"
#include "cartesian_control_msgs/FollowCartesianTrajectoryActionFeedback.h"

namespace cartesian_control_msgs
{

  class FollowCartesianTrajectoryAction : public ros::Msg
  {
    public:
      typedef cartesian_control_msgs::FollowCartesianTrajectoryActionGoal _action_goal_type;
      _action_goal_type action_goal;
      typedef cartesian_control_msgs::FollowCartesianTrajectoryActionResult _action_result_type;
      _action_result_type action_result;
      typedef cartesian_control_msgs::FollowCartesianTrajectoryActionFeedback _action_feedback_type;
      _action_feedback_type action_feedback;

    FollowCartesianTrajectoryAction():
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

    virtual const char * getType() override { return "cartesian_control_msgs/FollowCartesianTrajectoryAction"; };
    virtual const char * getMD5() override { return "12c96def0bf19f45684e25b6cc7318fc"; };

  };

}
#endif
