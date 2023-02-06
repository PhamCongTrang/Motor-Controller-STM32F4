#ifndef _ROS_rm_msgs_BalanceState_h
#define _ROS_rm_msgs_BalanceState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace rm_msgs
{

  class BalanceState : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef double _alpha_type;
      _alpha_type alpha;
      typedef double _alpha_dot_type;
      _alpha_dot_type alpha_dot;
      typedef double _vel_type;
      _vel_type vel;
      typedef double _theta_dot_type;
      _theta_dot_type theta_dot;
      typedef double _control_1_type;
      _control_1_type control_1;
      typedef double _control_2_type;
      _control_2_type control_2;

    BalanceState():
      header(),
      alpha(0),
      alpha_dot(0),
      vel(0),
      theta_dot(0),
      control_1(0),
      control_2(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_alpha;
      u_alpha.real = this->alpha;
      *(outbuffer + offset + 0) = (u_alpha.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_alpha.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_alpha.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_alpha.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_alpha.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_alpha.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_alpha.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_alpha.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->alpha);
      union {
        double real;
        uint64_t base;
      } u_alpha_dot;
      u_alpha_dot.real = this->alpha_dot;
      *(outbuffer + offset + 0) = (u_alpha_dot.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_alpha_dot.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_alpha_dot.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_alpha_dot.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_alpha_dot.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_alpha_dot.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_alpha_dot.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_alpha_dot.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->alpha_dot);
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
      } u_theta_dot;
      u_theta_dot.real = this->theta_dot;
      *(outbuffer + offset + 0) = (u_theta_dot.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_theta_dot.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_theta_dot.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_theta_dot.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_theta_dot.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_theta_dot.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_theta_dot.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_theta_dot.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->theta_dot);
      union {
        double real;
        uint64_t base;
      } u_control_1;
      u_control_1.real = this->control_1;
      *(outbuffer + offset + 0) = (u_control_1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_control_1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_control_1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_control_1.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_control_1.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_control_1.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_control_1.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_control_1.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->control_1);
      union {
        double real;
        uint64_t base;
      } u_control_2;
      u_control_2.real = this->control_2;
      *(outbuffer + offset + 0) = (u_control_2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_control_2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_control_2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_control_2.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_control_2.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_control_2.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_control_2.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_control_2.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->control_2);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_alpha;
      u_alpha.base = 0;
      u_alpha.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_alpha.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_alpha.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_alpha.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_alpha.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_alpha.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_alpha.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_alpha.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->alpha = u_alpha.real;
      offset += sizeof(this->alpha);
      union {
        double real;
        uint64_t base;
      } u_alpha_dot;
      u_alpha_dot.base = 0;
      u_alpha_dot.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_alpha_dot.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_alpha_dot.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_alpha_dot.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_alpha_dot.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_alpha_dot.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_alpha_dot.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_alpha_dot.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->alpha_dot = u_alpha_dot.real;
      offset += sizeof(this->alpha_dot);
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
      } u_theta_dot;
      u_theta_dot.base = 0;
      u_theta_dot.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_theta_dot.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_theta_dot.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_theta_dot.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_theta_dot.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_theta_dot.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_theta_dot.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_theta_dot.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->theta_dot = u_theta_dot.real;
      offset += sizeof(this->theta_dot);
      union {
        double real;
        uint64_t base;
      } u_control_1;
      u_control_1.base = 0;
      u_control_1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_control_1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_control_1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_control_1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_control_1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_control_1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_control_1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_control_1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->control_1 = u_control_1.real;
      offset += sizeof(this->control_1);
      union {
        double real;
        uint64_t base;
      } u_control_2;
      u_control_2.base = 0;
      u_control_2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_control_2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_control_2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_control_2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_control_2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_control_2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_control_2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_control_2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->control_2 = u_control_2.real;
      offset += sizeof(this->control_2);
     return offset;
    }

    virtual const char * getType() override { return "rm_msgs/BalanceState"; };
    virtual const char * getMD5() override { return "54fad2a9c502654a43a195c5bf42346b"; };

  };

}
#endif
