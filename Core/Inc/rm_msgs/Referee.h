#ifndef _ROS_rm_msgs_Referee_h
#define _ROS_rm_msgs_Referee_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "ros/time.h"

namespace rm_msgs
{

  class Referee : public ros::Msg
  {
    public:
      typedef uint16_t _chassis_volt_type;
      _chassis_volt_type chassis_volt;
      typedef uint16_t _chassis_current_type;
      _chassis_current_type chassis_current;
      typedef float _chassis_power_type;
      _chassis_power_type chassis_power;
      typedef uint16_t _chassis_power_buffer_type;
      _chassis_power_buffer_type chassis_power_buffer;
      typedef uint16_t _shooter_heat_cooling_limit_type;
      _shooter_heat_cooling_limit_type shooter_heat_cooling_limit;
      typedef uint16_t _shooter_heat_type;
      _shooter_heat_type shooter_heat;
      typedef uint16_t _robot_hp_type;
      _robot_hp_type robot_hp;
      typedef float _bullet_speed_type;
      _bullet_speed_type bullet_speed;
      typedef uint16_t _hurt_armor_id_type;
      _hurt_armor_id_type hurt_armor_id;
      typedef uint16_t _hurt_type_type;
      _hurt_type_type hurt_type;
      typedef ros::Time _stamp_type;
      _stamp_type stamp;

    Referee():
      chassis_volt(0),
      chassis_current(0),
      chassis_power(0),
      chassis_power_buffer(0),
      shooter_heat_cooling_limit(0),
      shooter_heat(0),
      robot_hp(0),
      bullet_speed(0),
      hurt_armor_id(0),
      hurt_type(0),
      stamp()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->chassis_volt >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->chassis_volt >> (8 * 1)) & 0xFF;
      offset += sizeof(this->chassis_volt);
      *(outbuffer + offset + 0) = (this->chassis_current >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->chassis_current >> (8 * 1)) & 0xFF;
      offset += sizeof(this->chassis_current);
      union {
        float real;
        uint32_t base;
      } u_chassis_power;
      u_chassis_power.real = this->chassis_power;
      *(outbuffer + offset + 0) = (u_chassis_power.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_chassis_power.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_chassis_power.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_chassis_power.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->chassis_power);
      *(outbuffer + offset + 0) = (this->chassis_power_buffer >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->chassis_power_buffer >> (8 * 1)) & 0xFF;
      offset += sizeof(this->chassis_power_buffer);
      *(outbuffer + offset + 0) = (this->shooter_heat_cooling_limit >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->shooter_heat_cooling_limit >> (8 * 1)) & 0xFF;
      offset += sizeof(this->shooter_heat_cooling_limit);
      *(outbuffer + offset + 0) = (this->shooter_heat >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->shooter_heat >> (8 * 1)) & 0xFF;
      offset += sizeof(this->shooter_heat);
      *(outbuffer + offset + 0) = (this->robot_hp >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->robot_hp >> (8 * 1)) & 0xFF;
      offset += sizeof(this->robot_hp);
      union {
        float real;
        uint32_t base;
      } u_bullet_speed;
      u_bullet_speed.real = this->bullet_speed;
      *(outbuffer + offset + 0) = (u_bullet_speed.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_bullet_speed.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_bullet_speed.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_bullet_speed.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->bullet_speed);
      *(outbuffer + offset + 0) = (this->hurt_armor_id >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->hurt_armor_id >> (8 * 1)) & 0xFF;
      offset += sizeof(this->hurt_armor_id);
      *(outbuffer + offset + 0) = (this->hurt_type >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->hurt_type >> (8 * 1)) & 0xFF;
      offset += sizeof(this->hurt_type);
      *(outbuffer + offset + 0) = (this->stamp.sec >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->stamp.sec >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->stamp.sec >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->stamp.sec >> (8 * 3)) & 0xFF;
      offset += sizeof(this->stamp.sec);
      *(outbuffer + offset + 0) = (this->stamp.nsec >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->stamp.nsec >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->stamp.nsec >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->stamp.nsec >> (8 * 3)) & 0xFF;
      offset += sizeof(this->stamp.nsec);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->chassis_volt =  ((uint16_t) (*(inbuffer + offset)));
      this->chassis_volt |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->chassis_volt);
      this->chassis_current =  ((uint16_t) (*(inbuffer + offset)));
      this->chassis_current |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->chassis_current);
      union {
        float real;
        uint32_t base;
      } u_chassis_power;
      u_chassis_power.base = 0;
      u_chassis_power.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_chassis_power.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_chassis_power.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_chassis_power.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->chassis_power = u_chassis_power.real;
      offset += sizeof(this->chassis_power);
      this->chassis_power_buffer =  ((uint16_t) (*(inbuffer + offset)));
      this->chassis_power_buffer |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->chassis_power_buffer);
      this->shooter_heat_cooling_limit =  ((uint16_t) (*(inbuffer + offset)));
      this->shooter_heat_cooling_limit |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->shooter_heat_cooling_limit);
      this->shooter_heat =  ((uint16_t) (*(inbuffer + offset)));
      this->shooter_heat |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->shooter_heat);
      this->robot_hp =  ((uint16_t) (*(inbuffer + offset)));
      this->robot_hp |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->robot_hp);
      union {
        float real;
        uint32_t base;
      } u_bullet_speed;
      u_bullet_speed.base = 0;
      u_bullet_speed.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_bullet_speed.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_bullet_speed.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_bullet_speed.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->bullet_speed = u_bullet_speed.real;
      offset += sizeof(this->bullet_speed);
      this->hurt_armor_id =  ((uint16_t) (*(inbuffer + offset)));
      this->hurt_armor_id |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->hurt_armor_id);
      this->hurt_type =  ((uint16_t) (*(inbuffer + offset)));
      this->hurt_type |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->hurt_type);
      this->stamp.sec =  ((uint32_t) (*(inbuffer + offset)));
      this->stamp.sec |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->stamp.sec |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->stamp.sec |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->stamp.sec);
      this->stamp.nsec =  ((uint32_t) (*(inbuffer + offset)));
      this->stamp.nsec |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->stamp.nsec |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->stamp.nsec |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->stamp.nsec);
     return offset;
    }

    virtual const char * getType() override { return "rm_msgs/Referee"; };
    virtual const char * getMD5() override { return "1af1a47d1b88da00ae128f4f1c85abdf"; };

  };

}
#endif
