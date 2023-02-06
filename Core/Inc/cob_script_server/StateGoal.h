#ifndef _ROS_cob_script_server_StateGoal_h
#define _ROS_cob_script_server_StateGoal_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "cob_script_server/ScriptState.h"

namespace cob_script_server
{

  class StateGoal : public ros::Msg
  {
    public:
      typedef cob_script_server::ScriptState _state_type;
      _state_type state;

    StateGoal():
      state()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->state.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->state.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return "cob_script_server/StateGoal"; };
    virtual const char * getMD5() override { return "de9449157e3145a2ac1c44024d2d7303"; };

  };

}
#endif
