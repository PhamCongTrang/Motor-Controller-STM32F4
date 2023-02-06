#ifndef _ROS_cob_control_msgs_ObstacleDistances_h
#define _ROS_cob_control_msgs_ObstacleDistances_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "cob_control_msgs/ObstacleDistance.h"

namespace cob_control_msgs
{

  class ObstacleDistances : public ros::Msg
  {
    public:
      uint32_t distances_length;
      typedef cob_control_msgs::ObstacleDistance _distances_type;
      _distances_type st_distances;
      _distances_type * distances;

    ObstacleDistances():
      distances_length(0), st_distances(), distances(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->distances_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->distances_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->distances_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->distances_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->distances_length);
      for( uint32_t i = 0; i < distances_length; i++){
      offset += this->distances[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t distances_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      distances_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      distances_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      distances_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->distances_length);
      if(distances_lengthT > distances_length)
        this->distances = (cob_control_msgs::ObstacleDistance*)realloc(this->distances, distances_lengthT * sizeof(cob_control_msgs::ObstacleDistance));
      distances_length = distances_lengthT;
      for( uint32_t i = 0; i < distances_length; i++){
      offset += this->st_distances.deserialize(inbuffer + offset);
        memcpy( &(this->distances[i]), &(this->st_distances), sizeof(cob_control_msgs::ObstacleDistance));
      }
     return offset;
    }

    virtual const char * getType() override { return "cob_control_msgs/ObstacleDistances"; };
    virtual const char * getMD5() override { return "58f6b8a2511da851588441c695d51807"; };

  };

}
#endif
