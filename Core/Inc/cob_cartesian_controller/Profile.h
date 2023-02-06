#ifndef _ROS_cob_cartesian_controller_Profile_h
#define _ROS_cob_cartesian_controller_Profile_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace cob_cartesian_controller
{

  class Profile : public ros::Msg
  {
    public:
      typedef uint8_t _profile_type_type;
      _profile_type_type profile_type;
      typedef double _vel_type;
      _vel_type vel;
      typedef double _accl_type;
      _accl_type accl;
      enum { RAMP = 1 };
      enum { SINOID = 2 };

    Profile():
      profile_type(0),
      vel(0),
      accl(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->profile_type >> (8 * 0)) & 0xFF;
      offset += sizeof(this->profile_type);
      union {
        double real;
        uint64_t base;
      } u_vel;
      u_vel.real = this->vel;
      *(outbuffer + offset + 0) = (u_vel.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_vel.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_vel.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_vel.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_vel.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_vel.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_vel.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_vel.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->vel);
      union {
        double real;
        uint64_t base;
      } u_accl;
      u_accl.real = this->accl;
      *(outbuffer + offset + 0) = (u_accl.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_accl.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_accl.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_accl.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_accl.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_accl.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_accl.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_accl.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->accl);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->profile_type =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->profile_type);
      union {
        double real;
        uint64_t base;
      } u_vel;
      u_vel.base = 0;
      u_vel.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_vel.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_vel.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_vel.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_vel.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_vel.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_vel.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_vel.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->vel = u_vel.real;
      offset += sizeof(this->vel);
      union {
        double real;
        uint64_t base;
      } u_accl;
      u_accl.base = 0;
      u_accl.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_accl.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_accl.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_accl.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_accl.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_accl.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_accl.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_accl.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->accl = u_accl.real;
      offset += sizeof(this->accl);
     return offset;
    }

    virtual const char * getType() override { return "cob_cartesian_controller/Profile"; };
    virtual const char * getMD5() override { return "3631ecf157bdfedf0f8cb3d5f838c11b"; };

  };

}
#endif
