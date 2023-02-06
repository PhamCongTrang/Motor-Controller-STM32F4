#ifndef _ROS_cob_actions_SetBoolGoal_h
#define _ROS_cob_actions_SetBoolGoal_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace cob_actions
{

  class SetBoolGoal : public ros::Msg
  {
    public:
      typedef bool _data_type;
      _data_type data;

    SetBoolGoal():
      data(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_data;
      u_data.real = this->data;
      *(outbuffer + offset + 0) = (u_data.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->data);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_data;
      u_data.base = 0;
      u_data.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->data = u_data.real;
      offset += sizeof(this->data);
     return offset;
    }

    virtual const char * getType() override { return "cob_actions/SetBoolGoal"; };
    virtual const char * getMD5() override { return "8b94c1b53db61fb6aed406028ad6332a"; };

  };

}
#endif
