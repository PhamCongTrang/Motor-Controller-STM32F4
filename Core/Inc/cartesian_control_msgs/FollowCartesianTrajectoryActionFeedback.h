#ifndef _ROS_cartesian_control_msgs_FollowCartesianTrajectoryActionFeedback_h
#define _ROS_cartesian_control_msgs_FollowCartesianTrajectoryActionFeedback_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalStatus.h"
#include "cartesian_control_msgs/FollowCartesianTrajectoryFeedback.h"

namespace cartesian_control_msgs
{

  class FollowCartesianTrajectoryActionFeedback : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef actionlib_msgs::GoalStatus _status_type;
      _status_type status;
      typedef cartesian_control_msgs::FollowCartesianTrajectoryFeedback _feedback_type;
      _feedback_type feedback;

    FollowCartesianTrajectoryActionFeedback():
      header(),
      status(),
      feedback()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->status.serialize(outbuffer + offset);
      offset += this->feedback.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->status.deserialize(inbuffer + offset);
      offset += this->feedback.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return "cartesian_control_msgs/FollowCartesianTrajectoryActionFeedback"; };
    virtual const char * getMD5() override { return "02e831b750ab903aee0d168ae4353e9d"; };

  };

}
#endif
