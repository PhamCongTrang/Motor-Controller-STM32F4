#ifndef _ROS_industrial_msgs_DebugLevel_h
#define _ROS_industrial_msgs_DebugLevel_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace industrial_msgs
{

  class DebugLevel : public ros::Msg
  {
    public:
      typedef uint8_t _val_type;
      _val_type val;
      enum { DEBUG =  5 };
      enum { INFO =  4 };
      enum { WARN =  3 };
      enum { ERROR =  2 };
      enum { FATAL =  1 };
      enum { NONE =  0 };

    DebugLevel():
      val(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->val >> (8 * 0)) & 0xFF;
      offset += sizeof(this->val);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->val =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->val);
     return offset;
    }

    virtual const char * getType() override { return "industrial_msgs/DebugLevel"; };
    virtual const char * getMD5() override { return "5bfde194fd95d83abdb02a03ee48fbe7"; };

  };

}
#endif
