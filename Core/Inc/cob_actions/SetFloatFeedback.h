#ifndef _ROS_cob_actions_SetFloatFeedback_h
#define _ROS_cob_actions_SetFloatFeedback_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace cob_actions
{

  class SetFloatFeedback : public ros::Msg
  {
    public:
      typedef const char* _message_type;
      _message_type message;

    SetFloatFeedback():
      message("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      uint32_t length_message = strlen(this->message);
      varToArr(outbuffer + offset, length_message);
      offset += 4;
      memcpy(outbuffer + offset, this->message, length_message);
      offset += length_message;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t length_message;
      arrToVar(length_message, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_message; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_message-1]=0;
      this->message = (char *)(inbuffer + offset-1);
      offset += length_message;
     return offset;
    }

    virtual const char * getType() override { return "cob_actions/SetFloatFeedback"; };
    virtual const char * getMD5() override { return "5f003d6bcc824cbd51361d66d8e4f76c"; };

  };

}
#endif
