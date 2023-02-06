#ifndef _ROS_cartesian_control_msgs_FollowCartesianTrajectoryActionGoal_h
#define _ROS_cartesian_control_msgs_FollowCartesianTrajectoryActionGoal_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalID.h"
#include "cartesian_control_msgs/FollowCartesianTrajectoryGoal.h"

namespace cartesian_control_msgs
{

  class FollowCartesianTrajectoryActionGoal : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef actionlib_msgs::GoalID _goal_id_type;
      _goal_id_type goal_id;
      typedef cartesian_control_msgs::FollowCartesianTrajectoryGoal _goal_type;
      _goal_type goal;

    FollowCartesianTrajectoryActionGoal():
      header(),
      goal_id(),
      goal()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->goal_id.serialize(outbuffer + offset);
      offset += this->goal.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->goal_id.deserialize(inbuffer + offset);
      offset += this->goal.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return "cartesian_control_msgs/FollowCartesianTrajectoryActionGoal"; };
    virtual const char * getMD5() override { return "4056d334183d6e78f45b035350ac6b04"; };

  };

}
#endif
