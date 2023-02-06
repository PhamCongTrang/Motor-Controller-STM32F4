#ifndef _ROS_cartesian_control_msgs_FollowCartesianTrajectoryGoal_h
#define _ROS_cartesian_control_msgs_FollowCartesianTrajectoryGoal_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "cartesian_control_msgs/CartesianTrajectory.h"
#include "cartesian_control_msgs/CartesianTolerance.h"
#include "ros/duration.h"

namespace cartesian_control_msgs
{

  class FollowCartesianTrajectoryGoal : public ros::Msg
  {
    public:
      typedef cartesian_control_msgs::CartesianTrajectory _trajectory_type;
      _trajectory_type trajectory;
      typedef cartesian_control_msgs::CartesianTolerance _path_tolerance_type;
      _path_tolerance_type path_tolerance;
      typedef cartesian_control_msgs::CartesianTolerance _goal_tolerance_type;
      _goal_tolerance_type goal_tolerance;
      typedef ros::Duration _goal_time_tolerance_type;
      _goal_time_tolerance_type goal_time_tolerance;

    FollowCartesianTrajectoryGoal():
      trajectory(),
      path_tolerance(),
      goal_tolerance(),
      goal_time_tolerance()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->trajectory.serialize(outbuffer + offset);
      offset += this->path_tolerance.serialize(outbuffer + offset);
      offset += this->goal_tolerance.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->goal_time_tolerance.sec >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->goal_time_tolerance.sec >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->goal_time_tolerance.sec >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->goal_time_tolerance.sec >> (8 * 3)) & 0xFF;
      offset += sizeof(this->goal_time_tolerance.sec);
      *(outbuffer + offset + 0) = (this->goal_time_tolerance.nsec >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->goal_time_tolerance.nsec >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->goal_time_tolerance.nsec >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->goal_time_tolerance.nsec >> (8 * 3)) & 0xFF;
      offset += sizeof(this->goal_time_tolerance.nsec);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->trajectory.deserialize(inbuffer + offset);
      offset += this->path_tolerance.deserialize(inbuffer + offset);
      offset += this->goal_tolerance.deserialize(inbuffer + offset);
      this->goal_time_tolerance.sec =  ((uint32_t) (*(inbuffer + offset)));
      this->goal_time_tolerance.sec |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->goal_time_tolerance.sec |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->goal_time_tolerance.sec |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->goal_time_tolerance.sec);
      this->goal_time_tolerance.nsec =  ((uint32_t) (*(inbuffer + offset)));
      this->goal_time_tolerance.nsec |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->goal_time_tolerance.nsec |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->goal_time_tolerance.nsec |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->goal_time_tolerance.nsec);
     return offset;
    }

    virtual const char * getType() override { return "cartesian_control_msgs/FollowCartesianTrajectoryGoal"; };
    virtual const char * getMD5() override { return "53c6564a309cf1d1f2d2c4e0478a40b3"; };

  };

}
#endif
