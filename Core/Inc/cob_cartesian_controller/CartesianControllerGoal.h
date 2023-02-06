#ifndef _ROS_cob_cartesian_controller_CartesianControllerGoal_h
#define _ROS_cob_cartesian_controller_CartesianControllerGoal_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "cob_cartesian_controller/MoveLin.h"
#include "cob_cartesian_controller/MoveCirc.h"
#include "cob_cartesian_controller/Profile.h"

namespace cob_cartesian_controller
{

  class CartesianControllerGoal : public ros::Msg
  {
    public:
      typedef uint8_t _move_type_type;
      _move_type_type move_type;
      typedef cob_cartesian_controller::MoveLin _move_lin_type;
      _move_lin_type move_lin;
      typedef cob_cartesian_controller::MoveCirc _move_circ_type;
      _move_circ_type move_circ;
      typedef cob_cartesian_controller::Profile _profile_type;
      _profile_type profile;
      enum { LIN = 1 };
      enum { CIRC = 2 };

    CartesianControllerGoal():
      move_type(0),
      move_lin(),
      move_circ(),
      profile()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->move_type >> (8 * 0)) & 0xFF;
      offset += sizeof(this->move_type);
      offset += this->move_lin.serialize(outbuffer + offset);
      offset += this->move_circ.serialize(outbuffer + offset);
      offset += this->profile.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->move_type =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->move_type);
      offset += this->move_lin.deserialize(inbuffer + offset);
      offset += this->move_circ.deserialize(inbuffer + offset);
      offset += this->profile.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return "cob_cartesian_controller/CartesianControllerGoal"; };
    virtual const char * getMD5() override { return "4991c8597bfb03ca23473e74f0163c3e"; };

  };

}
#endif
