#ifndef _ROS_cob_actions_DockGoal_h
#define _ROS_cob_actions_DockGoal_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "geometry_msgs/Pose.h"

namespace cob_actions
{

  class DockGoal : public ros::Msg
  {
    public:
      typedef const char* _frame_id_type;
      _frame_id_type frame_id;
      uint32_t poses_length;
      typedef geometry_msgs::Pose _poses_type;
      _poses_type st_poses;
      _poses_type * poses;
      typedef const char* _stop_topic_type;
      _stop_topic_type stop_topic;
      typedef const char* _stop_message_field_type;
      _stop_message_field_type stop_message_field;
      typedef bool _stop_compare_value_type;
      _stop_compare_value_type stop_compare_value;
      typedef float _dist_threshold_type;
      _dist_threshold_type dist_threshold;

    DockGoal():
      frame_id(""),
      poses_length(0), st_poses(), poses(nullptr),
      stop_topic(""),
      stop_message_field(""),
      stop_compare_value(0),
      dist_threshold(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      uint32_t length_frame_id = strlen(this->frame_id);
      varToArr(outbuffer + offset, length_frame_id);
      offset += 4;
      memcpy(outbuffer + offset, this->frame_id, length_frame_id);
      offset += length_frame_id;
      *(outbuffer + offset + 0) = (this->poses_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->poses_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->poses_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->poses_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->poses_length);
      for( uint32_t i = 0; i < poses_length; i++){
      offset += this->poses[i].serialize(outbuffer + offset);
      }
      uint32_t length_stop_topic = strlen(this->stop_topic);
      varToArr(outbuffer + offset, length_stop_topic);
      offset += 4;
      memcpy(outbuffer + offset, this->stop_topic, length_stop_topic);
      offset += length_stop_topic;
      uint32_t length_stop_message_field = strlen(this->stop_message_field);
      varToArr(outbuffer + offset, length_stop_message_field);
      offset += 4;
      memcpy(outbuffer + offset, this->stop_message_field, length_stop_message_field);
      offset += length_stop_message_field;
      union {
        bool real;
        uint8_t base;
      } u_stop_compare_value;
      u_stop_compare_value.real = this->stop_compare_value;
      *(outbuffer + offset + 0) = (u_stop_compare_value.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->stop_compare_value);
      union {
        float real;
        uint32_t base;
      } u_dist_threshold;
      u_dist_threshold.real = this->dist_threshold;
      *(outbuffer + offset + 0) = (u_dist_threshold.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_dist_threshold.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_dist_threshold.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_dist_threshold.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->dist_threshold);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t length_frame_id;
      arrToVar(length_frame_id, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_frame_id; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_frame_id-1]=0;
      this->frame_id = (char *)(inbuffer + offset-1);
      offset += length_frame_id;
      uint32_t poses_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      poses_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      poses_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      poses_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->poses_length);
      if(poses_lengthT > poses_length)
        this->poses = (geometry_msgs::Pose*)realloc(this->poses, poses_lengthT * sizeof(geometry_msgs::Pose));
      poses_length = poses_lengthT;
      for( uint32_t i = 0; i < poses_length; i++){
      offset += this->st_poses.deserialize(inbuffer + offset);
        memcpy( &(this->poses[i]), &(this->st_poses), sizeof(geometry_msgs::Pose));
      }
      uint32_t length_stop_topic;
      arrToVar(length_stop_topic, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_stop_topic; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_stop_topic-1]=0;
      this->stop_topic = (char *)(inbuffer + offset-1);
      offset += length_stop_topic;
      uint32_t length_stop_message_field;
      arrToVar(length_stop_message_field, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_stop_message_field; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_stop_message_field-1]=0;
      this->stop_message_field = (char *)(inbuffer + offset-1);
      offset += length_stop_message_field;
      union {
        bool real;
        uint8_t base;
      } u_stop_compare_value;
      u_stop_compare_value.base = 0;
      u_stop_compare_value.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->stop_compare_value = u_stop_compare_value.real;
      offset += sizeof(this->stop_compare_value);
      union {
        float real;
        uint32_t base;
      } u_dist_threshold;
      u_dist_threshold.base = 0;
      u_dist_threshold.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_dist_threshold.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_dist_threshold.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_dist_threshold.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->dist_threshold = u_dist_threshold.real;
      offset += sizeof(this->dist_threshold);
     return offset;
    }

    virtual const char * getType() override { return "cob_actions/DockGoal"; };
    virtual const char * getMD5() override { return "bca2ed6cdf3583c72905a8a6c651ef08"; };

  };

}
#endif
