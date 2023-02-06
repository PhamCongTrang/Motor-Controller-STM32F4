#ifndef _ROS_cartesian_control_msgs_CartesianTrajectory_h
#define _ROS_cartesian_control_msgs_CartesianTrajectory_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "cartesian_control_msgs/CartesianTrajectoryPoint.h"

namespace cartesian_control_msgs
{

  class CartesianTrajectory : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      uint32_t points_length;
      typedef cartesian_control_msgs::CartesianTrajectoryPoint _points_type;
      _points_type st_points;
      _points_type * points;
      typedef const char* _controlled_frame_type;
      _controlled_frame_type controlled_frame;

    CartesianTrajectory():
      header(),
      points_length(0), st_points(), points(nullptr),
      controlled_frame("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->points_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->points_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->points_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->points_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->points_length);
      for( uint32_t i = 0; i < points_length; i++){
      offset += this->points[i].serialize(outbuffer + offset);
      }
      uint32_t length_controlled_frame = strlen(this->controlled_frame);
      varToArr(outbuffer + offset, length_controlled_frame);
      offset += 4;
      memcpy(outbuffer + offset, this->controlled_frame, length_controlled_frame);
      offset += length_controlled_frame;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint32_t points_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      points_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      points_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      points_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->points_length);
      if(points_lengthT > points_length)
        this->points = (cartesian_control_msgs::CartesianTrajectoryPoint*)realloc(this->points, points_lengthT * sizeof(cartesian_control_msgs::CartesianTrajectoryPoint));
      points_length = points_lengthT;
      for( uint32_t i = 0; i < points_length; i++){
      offset += this->st_points.deserialize(inbuffer + offset);
        memcpy( &(this->points[i]), &(this->st_points), sizeof(cartesian_control_msgs::CartesianTrajectoryPoint));
      }
      uint32_t length_controlled_frame;
      arrToVar(length_controlled_frame, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_controlled_frame; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_controlled_frame-1]=0;
      this->controlled_frame = (char *)(inbuffer + offset-1);
      offset += length_controlled_frame;
     return offset;
    }

    virtual const char * getType() override { return "cartesian_control_msgs/CartesianTrajectory"; };
    virtual const char * getMD5() override { return "fe1b5791fdbc25aca5939664297d26be"; };

  };

}
#endif
