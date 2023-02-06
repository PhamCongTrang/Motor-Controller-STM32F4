#ifndef _ROS_cob_cartesian_controller_CartesianControllerFeedback_h
#define _ROS_cob_cartesian_controller_CartesianControllerFeedback_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace cob_cartesian_controller
{

  class CartesianControllerFeedback : public ros::Msg
  {
    public:
      typedef uint8_t _state_type;
      _state_type state;
      typedef const char* _message_type;
      _message_type message;

    CartesianControllerFeedback():
      state(0),
      message("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->state >> (8 * 0)) & 0xFF;
      offset += sizeof(this->state);
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
      this->state =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->state);
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

    virtual const char * getType() override { return "cob_cartesian_controller/CartesianControllerFeedback"; };
    virtual const char * getMD5() override { return "7ae2c26d6cd43624ca68107440b53b96"; };

  };

}
#endif
