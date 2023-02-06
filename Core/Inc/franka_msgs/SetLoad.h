#ifndef _ROS_SERVICE_SetLoad_h
#define _ROS_SERVICE_SetLoad_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace franka_msgs
{

static const char SETLOAD[] = "franka_msgs/SetLoad";

  class SetLoadRequest : public ros::Msg
  {
    public:
      typedef double _mass_type;
      _mass_type mass;
      double F_x_center_load[3];
      double load_inertia[9];

    SetLoadRequest():
      mass(0),
      F_x_center_load(),
      load_inertia()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_mass;
      u_mass.real = this->mass;
      *(outbuffer + offset + 0) = (u_mass.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_mass.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_mass.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_mass.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_mass.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_mass.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_mass.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_mass.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->mass);
      for( uint32_t i = 0; i < 3; i++){
      union {
        double real;
        uint64_t base;
      } u_F_x_center_loadi;
      u_F_x_center_loadi.real = this->F_x_center_load[i];
      *(outbuffer + offset + 0) = (u_F_x_center_loadi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_F_x_center_loadi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_F_x_center_loadi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_F_x_center_loadi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_F_x_center_loadi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_F_x_center_loadi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_F_x_center_loadi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_F_x_center_loadi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->F_x_center_load[i]);
      }
      for( uint32_t i = 0; i < 9; i++){
      union {
        double real;
        uint64_t base;
      } u_load_inertiai;
      u_load_inertiai.real = this->load_inertia[i];
      *(outbuffer + offset + 0) = (u_load_inertiai.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_load_inertiai.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_load_inertiai.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_load_inertiai.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_load_inertiai.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_load_inertiai.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_load_inertiai.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_load_inertiai.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->load_inertia[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_mass;
      u_mass.base = 0;
      u_mass.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_mass.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_mass.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_mass.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_mass.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_mass.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_mass.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_mass.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->mass = u_mass.real;
      offset += sizeof(this->mass);
      for( uint32_t i = 0; i < 3; i++){
      union {
        double real;
        uint64_t base;
      } u_F_x_center_loadi;
      u_F_x_center_loadi.base = 0;
      u_F_x_center_loadi.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_F_x_center_loadi.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_F_x_center_loadi.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_F_x_center_loadi.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_F_x_center_loadi.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_F_x_center_loadi.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_F_x_center_loadi.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_F_x_center_loadi.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->F_x_center_load[i] = u_F_x_center_loadi.real;
      offset += sizeof(this->F_x_center_load[i]);
      }
      for( uint32_t i = 0; i < 9; i++){
      union {
        double real;
        uint64_t base;
      } u_load_inertiai;
      u_load_inertiai.base = 0;
      u_load_inertiai.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_load_inertiai.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_load_inertiai.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_load_inertiai.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_load_inertiai.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_load_inertiai.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_load_inertiai.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_load_inertiai.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->load_inertia[i] = u_load_inertiai.real;
      offset += sizeof(this->load_inertia[i]);
      }
     return offset;
    }

    virtual const char * getType() override { return SETLOAD; };
    virtual const char * getMD5() override { return "0bcbb33b081d0f0b2611ae00474a91d6"; };

  };

  class SetLoadResponse : public ros::Msg
  {
    public:
      typedef bool _success_type;
      _success_type success;
      typedef const char* _error_type;
      _error_type error;

    SetLoadResponse():
      success(0),
      error("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_success;
      u_success.real = this->success;
      *(outbuffer + offset + 0) = (u_success.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->success);
      uint32_t length_error = strlen(this->error);
      varToArr(outbuffer + offset, length_error);
      offset += 4;
      memcpy(outbuffer + offset, this->error, length_error);
      offset += length_error;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_success;
      u_success.base = 0;
      u_success.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->success = u_success.real;
      offset += sizeof(this->success);
      uint32_t length_error;
      arrToVar(length_error, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_error; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_error-1]=0;
      this->error = (char *)(inbuffer + offset-1);
      offset += length_error;
     return offset;
    }

    virtual const char * getType() override { return SETLOAD; };
    virtual const char * getMD5() override { return "45872d25d65c97743cc71afc6d4e884d"; };

  };

  class SetLoad {
    public:
    typedef SetLoadRequest Request;
    typedef SetLoadResponse Response;
  };

}
#endif
