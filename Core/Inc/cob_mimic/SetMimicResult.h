#ifndef _ROS_cob_mimic_SetMimicResult_h
#define _ROS_cob_mimic_SetMimicResult_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace cob_mimic
{

  class SetMimicResult : public ros::Msg
  {
    public:

    SetMimicResult()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
     return offset;
    }

    virtual const char * getType() override { return "cob_mimic/SetMimicResult"; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

}
#endif
