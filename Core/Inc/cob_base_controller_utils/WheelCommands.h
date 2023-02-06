#ifndef _ROS_cob_base_controller_utils_WheelCommands_h
#define _ROS_cob_base_controller_utils_WheelCommands_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace cob_base_controller_utils
{

  class WheelCommands : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      uint32_t drive_target_velocity_length;
      typedef double _drive_target_velocity_type;
      _drive_target_velocity_type st_drive_target_velocity;
      _drive_target_velocity_type * drive_target_velocity;
      uint32_t steer_target_velocity_length;
      typedef double _steer_target_velocity_type;
      _steer_target_velocity_type st_steer_target_velocity;
      _steer_target_velocity_type * steer_target_velocity;
      uint32_t steer_target_position_length;
      typedef double _steer_target_position_type;
      _steer_target_position_type st_steer_target_position;
      _steer_target_position_type * steer_target_position;
      uint32_t steer_target_error_length;
      typedef double _steer_target_error_type;
      _steer_target_error_type st_steer_target_error;
      _steer_target_error_type * steer_target_error;

    WheelCommands():
      header(),
      drive_target_velocity_length(0), st_drive_target_velocity(), drive_target_velocity(nullptr),
      steer_target_velocity_length(0), st_steer_target_velocity(), steer_target_velocity(nullptr),
      steer_target_position_length(0), st_steer_target_position(), steer_target_position(nullptr),
      steer_target_error_length(0), st_steer_target_error(), steer_target_error(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->drive_target_velocity_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->drive_target_velocity_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->drive_target_velocity_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->drive_target_velocity_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->drive_target_velocity_length);
      for( uint32_t i = 0; i < drive_target_velocity_length; i++){
      union {
        double real;
        uint64_t base;
      } u_drive_target_velocityi;
      u_drive_target_velocityi.real = this->drive_target_velocity[i];
      *(outbuffer + offset + 0) = (u_drive_target_velocityi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_drive_target_velocityi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_drive_target_velocityi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_drive_target_velocityi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_drive_target_velocityi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_drive_target_velocityi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_drive_target_velocityi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_drive_target_velocityi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->drive_target_velocity[i]);
      }
      *(outbuffer + offset + 0) = (this->steer_target_velocity_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->steer_target_velocity_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->steer_target_velocity_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->steer_target_velocity_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->steer_target_velocity_length);
      for( uint32_t i = 0; i < steer_target_velocity_length; i++){
      union {
        double real;
        uint64_t base;
      } u_steer_target_velocityi;
      u_steer_target_velocityi.real = this->steer_target_velocity[i];
      *(outbuffer + offset + 0) = (u_steer_target_velocityi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_steer_target_velocityi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_steer_target_velocityi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_steer_target_velocityi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_steer_target_velocityi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_steer_target_velocityi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_steer_target_velocityi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_steer_target_velocityi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->steer_target_velocity[i]);
      }
      *(outbuffer + offset + 0) = (this->steer_target_position_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->steer_target_position_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->steer_target_position_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->steer_target_position_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->steer_target_position_length);
      for( uint32_t i = 0; i < steer_target_position_length; i++){
      union {
        double real;
        uint64_t base;
      } u_steer_target_positioni;
      u_steer_target_positioni.real = this->steer_target_position[i];
      *(outbuffer + offset + 0) = (u_steer_target_positioni.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_steer_target_positioni.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_steer_target_positioni.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_steer_target_positioni.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_steer_target_positioni.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_steer_target_positioni.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_steer_target_positioni.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_steer_target_positioni.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->steer_target_position[i]);
      }
      *(outbuffer + offset + 0) = (this->steer_target_error_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->steer_target_error_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->steer_target_error_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->steer_target_error_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->steer_target_error_length);
      for( uint32_t i = 0; i < steer_target_error_length; i++){
      union {
        double real;
        uint64_t base;
      } u_steer_target_errori;
      u_steer_target_errori.real = this->steer_target_error[i];
      *(outbuffer + offset + 0) = (u_steer_target_errori.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_steer_target_errori.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_steer_target_errori.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_steer_target_errori.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_steer_target_errori.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_steer_target_errori.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_steer_target_errori.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_steer_target_errori.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->steer_target_error[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint32_t drive_target_velocity_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      drive_target_velocity_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      drive_target_velocity_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      drive_target_velocity_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->drive_target_velocity_length);
      if(drive_target_velocity_lengthT > drive_target_velocity_length)
        this->drive_target_velocity = (double*)realloc(this->drive_target_velocity, drive_target_velocity_lengthT * sizeof(double));
      drive_target_velocity_length = drive_target_velocity_lengthT;
      for( uint32_t i = 0; i < drive_target_velocity_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_drive_target_velocity;
      u_st_drive_target_velocity.base = 0;
      u_st_drive_target_velocity.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_drive_target_velocity.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_drive_target_velocity.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_drive_target_velocity.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_drive_target_velocity.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_drive_target_velocity.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_drive_target_velocity.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_drive_target_velocity.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_drive_target_velocity = u_st_drive_target_velocity.real;
      offset += sizeof(this->st_drive_target_velocity);
        memcpy( &(this->drive_target_velocity[i]), &(this->st_drive_target_velocity), sizeof(double));
      }
      uint32_t steer_target_velocity_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      steer_target_velocity_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      steer_target_velocity_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      steer_target_velocity_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->steer_target_velocity_length);
      if(steer_target_velocity_lengthT > steer_target_velocity_length)
        this->steer_target_velocity = (double*)realloc(this->steer_target_velocity, steer_target_velocity_lengthT * sizeof(double));
      steer_target_velocity_length = steer_target_velocity_lengthT;
      for( uint32_t i = 0; i < steer_target_velocity_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_steer_target_velocity;
      u_st_steer_target_velocity.base = 0;
      u_st_steer_target_velocity.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_steer_target_velocity.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_steer_target_velocity.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_steer_target_velocity.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_steer_target_velocity.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_steer_target_velocity.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_steer_target_velocity.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_steer_target_velocity.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_steer_target_velocity = u_st_steer_target_velocity.real;
      offset += sizeof(this->st_steer_target_velocity);
        memcpy( &(this->steer_target_velocity[i]), &(this->st_steer_target_velocity), sizeof(double));
      }
      uint32_t steer_target_position_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      steer_target_position_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      steer_target_position_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      steer_target_position_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->steer_target_position_length);
      if(steer_target_position_lengthT > steer_target_position_length)
        this->steer_target_position = (double*)realloc(this->steer_target_position, steer_target_position_lengthT * sizeof(double));
      steer_target_position_length = steer_target_position_lengthT;
      for( uint32_t i = 0; i < steer_target_position_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_steer_target_position;
      u_st_steer_target_position.base = 0;
      u_st_steer_target_position.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_steer_target_position.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_steer_target_position.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_steer_target_position.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_steer_target_position.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_steer_target_position.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_steer_target_position.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_steer_target_position.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_steer_target_position = u_st_steer_target_position.real;
      offset += sizeof(this->st_steer_target_position);
        memcpy( &(this->steer_target_position[i]), &(this->st_steer_target_position), sizeof(double));
      }
      uint32_t steer_target_error_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      steer_target_error_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      steer_target_error_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      steer_target_error_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->steer_target_error_length);
      if(steer_target_error_lengthT > steer_target_error_length)
        this->steer_target_error = (double*)realloc(this->steer_target_error, steer_target_error_lengthT * sizeof(double));
      steer_target_error_length = steer_target_error_lengthT;
      for( uint32_t i = 0; i < steer_target_error_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_steer_target_error;
      u_st_steer_target_error.base = 0;
      u_st_steer_target_error.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_steer_target_error.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_steer_target_error.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_steer_target_error.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_steer_target_error.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_steer_target_error.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_steer_target_error.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_steer_target_error.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_steer_target_error = u_st_steer_target_error.real;
      offset += sizeof(this->st_steer_target_error);
        memcpy( &(this->steer_target_error[i]), &(this->st_steer_target_error), sizeof(double));
      }
     return offset;
    }

    virtual const char * getType() override { return "cob_base_controller_utils/WheelCommands"; };
    virtual const char * getMD5() override { return "77ff79ee11678be45d9ecbc2cb9d23dd"; };

  };

}
#endif
