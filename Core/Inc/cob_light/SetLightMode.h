#ifndef _ROS_SERVICE_SetLightMode_h
#define _ROS_SERVICE_SetLightMode_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "cob_light/LightMode.h"

namespace cob_light
{

static const char SETLIGHTMODE[] = "cob_light/SetLightMode";

  class SetLightModeRequest : public ros::Msg
  {
    public:
      typedef cob_light::LightMode _mode_type;
      _mode_type mode;

    SetLightModeRequest():
      mode()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->mode.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->mode.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return SETLIGHTMODE; };
    virtual const char * getMD5() override { return "cf64533ba011e7f531cecce5a35c9b83"; };

  };

  class SetLightModeResponse : public ros::Msg
  {
    public:
      typedef uint8_t _active_mode_type;
      _active_mode_type active_mode;
      typedef uint8_t _active_priority_type;
      _active_priority_type active_priority;
      typedef uint64_t _track_id_type;
      _track_id_type track_id;

    SetLightModeResponse():
      active_mode(0),
      active_priority(0),
      track_id(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->active_mode >> (8 * 0)) & 0xFF;
      offset += sizeof(this->active_mode);
      *(outbuffer + offset + 0) = (this->active_priority >> (8 * 0)) & 0xFF;
      offset += sizeof(this->active_priority);
      *(outbuffer + offset + 0) = (this->track_id >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->track_id >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->track_id >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->track_id >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (this->track_id >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (this->track_id >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (this->track_id >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (this->track_id >> (8 * 7)) & 0xFF;
      offset += sizeof(this->track_id);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->active_mode =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->active_mode);
      this->active_priority =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->active_priority);
      this->track_id =  ((uint64_t) (*(inbuffer + offset)));
      this->track_id |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->track_id |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->track_id |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->track_id |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      this->track_id |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      this->track_id |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      this->track_id |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      offset += sizeof(this->track_id);
     return offset;
    }

    virtual const char * getType() override { return SETLIGHTMODE; };
    virtual const char * getMD5() override { return "44b6bbe013cafd2810aef2660066a5b8"; };

  };

  class SetLightMode {
    public:
    typedef SetLightModeRequest Request;
    typedef SetLightModeResponse Response;
  };

}
#endif
