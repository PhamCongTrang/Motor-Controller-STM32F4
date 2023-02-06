#ifndef _ROS_ethercat_trigger_controllers_MultiWaveform_h
#define _ROS_ethercat_trigger_controllers_MultiWaveform_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "ethercat_trigger_controllers/MultiWaveformTransition.h"

namespace ethercat_trigger_controllers
{

  class MultiWaveform : public ros::Msg
  {
    public:
      typedef double _period_type;
      _period_type period;
      typedef double _zero_offset_type;
      _zero_offset_type zero_offset;
      uint32_t transitions_length;
      typedef ethercat_trigger_controllers::MultiWaveformTransition _transitions_type;
      _transitions_type st_transitions;
      _transitions_type * transitions;

    MultiWaveform():
      period(0),
      zero_offset(0),
      transitions_length(0), st_transitions(), transitions(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_period;
      u_period.real = this->period;
      *(outbuffer + offset + 0) = (u_period.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_period.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_period.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_period.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_period.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_period.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_period.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_period.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->period);
      union {
        double real;
        uint64_t base;
      } u_zero_offset;
      u_zero_offset.real = this->zero_offset;
      *(outbuffer + offset + 0) = (u_zero_offset.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_zero_offset.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_zero_offset.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_zero_offset.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_zero_offset.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_zero_offset.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_zero_offset.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_zero_offset.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->zero_offset);
      *(outbuffer + offset + 0) = (this->transitions_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->transitions_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->transitions_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->transitions_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->transitions_length);
      for( uint32_t i = 0; i < transitions_length; i++){
      offset += this->transitions[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_period;
      u_period.base = 0;
      u_period.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_period.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_period.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_period.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_period.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_period.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_period.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_period.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->period = u_period.real;
      offset += sizeof(this->period);
      union {
        double real;
        uint64_t base;
      } u_zero_offset;
      u_zero_offset.base = 0;
      u_zero_offset.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_zero_offset.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_zero_offset.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_zero_offset.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_zero_offset.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_zero_offset.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_zero_offset.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_zero_offset.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->zero_offset = u_zero_offset.real;
      offset += sizeof(this->zero_offset);
      uint32_t transitions_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      transitions_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      transitions_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      transitions_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->transitions_length);
      if(transitions_lengthT > transitions_length)
        this->transitions = (ethercat_trigger_controllers::MultiWaveformTransition*)realloc(this->transitions, transitions_lengthT * sizeof(ethercat_trigger_controllers::MultiWaveformTransition));
      transitions_length = transitions_lengthT;
      for( uint32_t i = 0; i < transitions_length; i++){
      offset += this->st_transitions.deserialize(inbuffer + offset);
        memcpy( &(this->transitions[i]), &(this->st_transitions), sizeof(ethercat_trigger_controllers::MultiWaveformTransition));
      }
     return offset;
    }

    virtual const char * getType() override { return "ethercat_trigger_controllers/MultiWaveform"; };
    virtual const char * getMD5() override { return "6a8e166563c159e73f391a302e7b37f6"; };

  };

}
#endif
