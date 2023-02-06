#ifndef _ROS_joint_qualification_controllers_ActuatorData_h
#define _ROS_joint_qualification_controllers_ActuatorData_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace joint_qualification_controllers
{

  class ActuatorData : public ros::Msg
  {
    public:
      typedef int16_t _index_type;
      _index_type index;
      typedef const char* _name_type;
      _name_type name;
      typedef int16_t _id_type;
      _id_type id;

    ActuatorData():
      index(0),
      name(""),
      id(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_index;
      u_index.real = this->index;
      *(outbuffer + offset + 0) = (u_index.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_index.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->index);
      uint32_t length_name = strlen(this->name);
      varToArr(outbuffer + offset, length_name);
      offset += 4;
      memcpy(outbuffer + offset, this->name, length_name);
      offset += length_name;
      union {
        int16_t real;
        uint16_t base;
      } u_id;
      u_id.real = this->id;
      *(outbuffer + offset + 0) = (u_id.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_id.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->id);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_index;
      u_index.base = 0;
      u_index.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_index.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->index = u_index.real;
      offset += sizeof(this->index);
      uint32_t length_name;
      arrToVar(length_name, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_name-1]=0;
      this->name = (char *)(inbuffer + offset-1);
      offset += length_name;
      union {
        int16_t real;
        uint16_t base;
      } u_id;
      u_id.base = 0;
      u_id.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_id.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->id = u_id.real;
      offset += sizeof(this->id);
     return offset;
    }

    virtual const char * getType() override { return "joint_qualification_controllers/ActuatorData"; };
    virtual const char * getMD5() override { return "2c56db35f7889a677f83b66883afdaf4"; };

  };

}
#endif
