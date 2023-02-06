#ifndef _ROS_cob_control_msgs_ObstacleDistance_h
#define _ROS_cob_control_msgs_ObstacleDistance_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "geometry_msgs/Vector3.h"

namespace cob_control_msgs
{

  class ObstacleDistance : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef const char* _link_of_interest_type;
      _link_of_interest_type link_of_interest;
      typedef const char* _obstacle_id_type;
      _obstacle_id_type obstacle_id;
      typedef double _distance_type;
      _distance_type distance;
      typedef geometry_msgs::Vector3 _frame_vector_type;
      _frame_vector_type frame_vector;
      typedef geometry_msgs::Vector3 _nearest_point_frame_vector_type;
      _nearest_point_frame_vector_type nearest_point_frame_vector;
      typedef geometry_msgs::Vector3 _nearest_point_obstacle_vector_type;
      _nearest_point_obstacle_vector_type nearest_point_obstacle_vector;

    ObstacleDistance():
      header(),
      link_of_interest(""),
      obstacle_id(""),
      distance(0),
      frame_vector(),
      nearest_point_frame_vector(),
      nearest_point_obstacle_vector()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      uint32_t length_link_of_interest = strlen(this->link_of_interest);
      varToArr(outbuffer + offset, length_link_of_interest);
      offset += 4;
      memcpy(outbuffer + offset, this->link_of_interest, length_link_of_interest);
      offset += length_link_of_interest;
      uint32_t length_obstacle_id = strlen(this->obstacle_id);
      varToArr(outbuffer + offset, length_obstacle_id);
      offset += 4;
      memcpy(outbuffer + offset, this->obstacle_id, length_obstacle_id);
      offset += length_obstacle_id;
      union {
        double real;
        uint64_t base;
      } u_distance;
      u_distance.real = this->distance;
      *(outbuffer + offset + 0) = (u_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_distance.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_distance.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_distance.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_distance.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_distance.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->distance);
      offset += this->frame_vector.serialize(outbuffer + offset);
      offset += this->nearest_point_frame_vector.serialize(outbuffer + offset);
      offset += this->nearest_point_obstacle_vector.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint32_t length_link_of_interest;
      arrToVar(length_link_of_interest, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_link_of_interest; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_link_of_interest-1]=0;
      this->link_of_interest = (char *)(inbuffer + offset-1);
      offset += length_link_of_interest;
      uint32_t length_obstacle_id;
      arrToVar(length_obstacle_id, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_obstacle_id; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_obstacle_id-1]=0;
      this->obstacle_id = (char *)(inbuffer + offset-1);
      offset += length_obstacle_id;
      union {
        double real;
        uint64_t base;
      } u_distance;
      u_distance.base = 0;
      u_distance.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_distance.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_distance.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_distance.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_distance.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_distance.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_distance.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_distance.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->distance = u_distance.real;
      offset += sizeof(this->distance);
      offset += this->frame_vector.deserialize(inbuffer + offset);
      offset += this->nearest_point_frame_vector.deserialize(inbuffer + offset);
      offset += this->nearest_point_obstacle_vector.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return "cob_control_msgs/ObstacleDistance"; };
    virtual const char * getMD5() override { return "fbbcad171002ad96c1fc44941d7a1bf1"; };

  };

}
#endif
