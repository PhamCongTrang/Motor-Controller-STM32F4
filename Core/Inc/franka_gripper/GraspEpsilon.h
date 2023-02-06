#ifndef _ROS_franka_gripper_GraspEpsilon_h
#define _ROS_franka_gripper_GraspEpsilon_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace franka_gripper
{

  class GraspEpsilon : public ros::Msg
  {
    public:
      typedef double _inner_type;
      _inner_type inner;
      typedef double _outer_type;
      _outer_type outer;

    GraspEpsilon():
      inner(0),
      outer(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_inner;
      u_inner.real = this->inner;
      *(outbuffer + offset + 0) = (u_inner.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_inner.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_inner.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_inner.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_inner.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_inner.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_inner.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_inner.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->inner);
      union {
        double real;
        uint64_t base;
      } u_outer;
      u_outer.real = this->outer;
      *(outbuffer + offset + 0) = (u_outer.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_outer.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_outer.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_outer.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_outer.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_outer.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_outer.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_outer.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->outer);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_inner;
      u_inner.base = 0;
      u_inner.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_inner.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_inner.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_inner.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_inner.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_inner.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_inner.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_inner.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->inner = u_inner.real;
      offset += sizeof(this->inner);
      union {
        double real;
        uint64_t base;
      } u_outer;
      u_outer.base = 0;
      u_outer.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_outer.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_outer.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_outer.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_outer.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_outer.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_outer.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_outer.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->outer = u_outer.real;
      offset += sizeof(this->outer);
     return offset;
    }

    virtual const char * getType() override { return "franka_gripper/GraspEpsilon"; };
    virtual const char * getMD5() override { return "95b2c5464a6f679bd1dacaf86414f095"; };

  };

}
#endif
