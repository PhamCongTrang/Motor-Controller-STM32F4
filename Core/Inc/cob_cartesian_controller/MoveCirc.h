#ifndef _ROS_cob_cartesian_controller_MoveCirc_h
#define _ROS_cob_cartesian_controller_MoveCirc_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "geometry_msgs/Pose.h"

namespace cob_cartesian_controller
{

  class MoveCirc : public ros::Msg
  {
    public:
      typedef geometry_msgs::Pose _pose_center_type;
      _pose_center_type pose_center;
      typedef const char* _frame_id_type;
      _frame_id_type frame_id;
      typedef double _start_angle_type;
      _start_angle_type start_angle;
      typedef double _end_angle_type;
      _end_angle_type end_angle;
      typedef double _radius_type;
      _radius_type radius;

    MoveCirc():
      pose_center(),
      frame_id(""),
      start_angle(0),
      end_angle(0),
      radius(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->pose_center.serialize(outbuffer + offset);
      uint32_t length_frame_id = strlen(this->frame_id);
      varToArr(outbuffer + offset, length_frame_id);
      offset += 4;
      memcpy(outbuffer + offset, this->frame_id, length_frame_id);
      offset += length_frame_id;
      union {
        double real;
        uint64_t base;
      } u_start_angle;
      u_start_angle.real = this->start_angle;
      *(outbuffer + offset + 0) = (u_start_angle.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_start_angle.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_start_angle.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_start_angle.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_start_angle.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_start_angle.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_start_angle.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_start_angle.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->start_angle);
      union {
        double real;
        uint64_t base;
      } u_end_angle;
      u_end_angle.real = this->end_angle;
      *(outbuffer + offset + 0) = (u_end_angle.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_end_angle.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_end_angle.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_end_angle.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_end_angle.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_end_angle.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_end_angle.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_end_angle.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->end_angle);
      union {
        double real;
        uint64_t base;
      } u_radius;
      u_radius.real = this->radius;
      *(outbuffer + offset + 0) = (u_radius.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_radius.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_radius.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_radius.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_radius.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_radius.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_radius.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_radius.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->radius);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->pose_center.deserialize(inbuffer + offset);
      uint32_t length_frame_id;
      arrToVar(length_frame_id, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_frame_id; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_frame_id-1]=0;
      this->frame_id = (char *)(inbuffer + offset-1);
      offset += length_frame_id;
      union {
        double real;
        uint64_t base;
      } u_start_angle;
      u_start_angle.base = 0;
      u_start_angle.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_start_angle.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_start_angle.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_start_angle.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_start_angle.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_start_angle.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_start_angle.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_start_angle.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->start_angle = u_start_angle.real;
      offset += sizeof(this->start_angle);
      union {
        double real;
        uint64_t base;
      } u_end_angle;
      u_end_angle.base = 0;
      u_end_angle.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_end_angle.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_end_angle.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_end_angle.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_end_angle.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_end_angle.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_end_angle.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_end_angle.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->end_angle = u_end_angle.real;
      offset += sizeof(this->end_angle);
      union {
        double real;
        uint64_t base;
      } u_radius;
      u_radius.base = 0;
      u_radius.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_radius.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_radius.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_radius.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_radius.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_radius.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_radius.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_radius.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->radius = u_radius.real;
      offset += sizeof(this->radius);
     return offset;
    }

    virtual const char * getType() override { return "cob_cartesian_controller/MoveCirc"; };
    virtual const char * getMD5() override { return "803efebbec7e0afea7443ebc778555f3"; };

  };

}
#endif
