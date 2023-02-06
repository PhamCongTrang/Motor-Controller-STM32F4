#ifndef _ROS_SERVICE_SetWaveform_h
#define _ROS_SERVICE_SetWaveform_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace ethercat_trigger_controllers
{

static const char SETWAVEFORM[] = "ethercat_trigger_controllers/SetWaveform";

  class SetWaveformRequest : public ros::Msg
  {
    public:
      typedef double _rep_rate_type;
      _rep_rate_type rep_rate;
      typedef double _phase_type;
      _phase_type phase;
      typedef double _duty_cycle_type;
      _duty_cycle_type duty_cycle;
      typedef int32_t _running_type;
      _running_type running;
      typedef int32_t _active_low_type;
      _active_low_type active_low;
      typedef int32_t _pulsed_type;
      _pulsed_type pulsed;

    SetWaveformRequest():
      rep_rate(0),
      phase(0),
      duty_cycle(0),
      running(0),
      active_low(0),
      pulsed(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_rep_rate;
      u_rep_rate.real = this->rep_rate;
      *(outbuffer + offset + 0) = (u_rep_rate.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rep_rate.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rep_rate.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rep_rate.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_rep_rate.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_rep_rate.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_rep_rate.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_rep_rate.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->rep_rate);
      union {
        double real;
        uint64_t base;
      } u_phase;
      u_phase.real = this->phase;
      *(outbuffer + offset + 0) = (u_phase.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_phase.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_phase.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_phase.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_phase.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_phase.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_phase.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_phase.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->phase);
      union {
        double real;
        uint64_t base;
      } u_duty_cycle;
      u_duty_cycle.real = this->duty_cycle;
      *(outbuffer + offset + 0) = (u_duty_cycle.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_duty_cycle.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_duty_cycle.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_duty_cycle.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_duty_cycle.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_duty_cycle.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_duty_cycle.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_duty_cycle.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->duty_cycle);
      union {
        int32_t real;
        uint32_t base;
      } u_running;
      u_running.real = this->running;
      *(outbuffer + offset + 0) = (u_running.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_running.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_running.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_running.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->running);
      union {
        int32_t real;
        uint32_t base;
      } u_active_low;
      u_active_low.real = this->active_low;
      *(outbuffer + offset + 0) = (u_active_low.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_active_low.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_active_low.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_active_low.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->active_low);
      union {
        int32_t real;
        uint32_t base;
      } u_pulsed;
      u_pulsed.real = this->pulsed;
      *(outbuffer + offset + 0) = (u_pulsed.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pulsed.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pulsed.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pulsed.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pulsed);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_rep_rate;
      u_rep_rate.base = 0;
      u_rep_rate.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_rep_rate.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_rep_rate.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_rep_rate.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_rep_rate.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_rep_rate.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_rep_rate.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_rep_rate.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->rep_rate = u_rep_rate.real;
      offset += sizeof(this->rep_rate);
      union {
        double real;
        uint64_t base;
      } u_phase;
      u_phase.base = 0;
      u_phase.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_phase.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_phase.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_phase.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_phase.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_phase.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_phase.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_phase.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->phase = u_phase.real;
      offset += sizeof(this->phase);
      union {
        double real;
        uint64_t base;
      } u_duty_cycle;
      u_duty_cycle.base = 0;
      u_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->duty_cycle = u_duty_cycle.real;
      offset += sizeof(this->duty_cycle);
      union {
        int32_t real;
        uint32_t base;
      } u_running;
      u_running.base = 0;
      u_running.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_running.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_running.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_running.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->running = u_running.real;
      offset += sizeof(this->running);
      union {
        int32_t real;
        uint32_t base;
      } u_active_low;
      u_active_low.base = 0;
      u_active_low.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_active_low.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_active_low.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_active_low.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->active_low = u_active_low.real;
      offset += sizeof(this->active_low);
      union {
        int32_t real;
        uint32_t base;
      } u_pulsed;
      u_pulsed.base = 0;
      u_pulsed.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pulsed.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pulsed.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pulsed.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pulsed = u_pulsed.real;
      offset += sizeof(this->pulsed);
     return offset;
    }

    virtual const char * getType() override { return SETWAVEFORM; };
    virtual const char * getMD5() override { return "988450e1ddd386f3967c381c19b2330c"; };

  };

  class SetWaveformResponse : public ros::Msg
  {
    public:

    SetWaveformResponse()
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

    virtual const char * getType() override { return SETWAVEFORM; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class SetWaveform {
    public:
    typedef SetWaveformRequest Request;
    typedef SetWaveformResponse Response;
  };

}
#endif
