#ifndef _ROS_cob_cartesian_controller_CartesianControllerActionGoal_h
#define _ROS_cob_cartesian_controller_CartesianControllerActionGoal_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalID.h"
#include "cob_cartesian_controller/CartesianControllerGoal.h"

namespace cob_cartesian_controller
{

  class CartesianControllerActionGoal : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef actionlib_msgs::GoalID _goal_id_type;
      _goal_id_type goal_id;
      typedef cob_cartesian_controller::CartesianControllerGoal _goal_type;
      _goal_type goal;

    CartesianControllerActionGoal():
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

    virtual const char * getType() override { return "cob_cartesian_controller/CartesianControllerActionGoal"; };
    virtual const char * getMD5() override { return "597ade9616cc064408cdf2a43da886c9"; };

  };

}
#endif
