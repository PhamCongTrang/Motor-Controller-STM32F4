#ifndef _ROS_cob_actions_SetStringGoal_h
#define _ROS_cob_actions_SetStringGoal_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace cob_actions
{

  class SetStringGoal : public ros::Msg
  {
    public:
      typedef const char* _data_type;
      _data_type data;

    SetStringGoal():
      data("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      uint32_t length_data = strlen(this->data);
      varToArr(outbuffer + offset, length_data);
      offset += 4;
      memcpy(outbuffer + offset, this->data, length_data);
      offset += length_data;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t length_data;
      arrToVar(length_data, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_data; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_data-1]=0;
      this->data = (char *)(inbuffer + offset-1);
      offset += length_data;
     return offset;
    }

    virtual const char * getType() override { return "cob_actions/SetStringGoal"; };
    virtual const char * getMD5() override { return "992ce8a1687cec8c8bd883ec73ca41d1"; };

  };

}
#endif
