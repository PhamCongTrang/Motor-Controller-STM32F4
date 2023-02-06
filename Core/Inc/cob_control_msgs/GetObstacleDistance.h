#ifndef _ROS_SERVICE_GetObstacleDistance_h
#define _ROS_SERVICE_GetObstacleDistance_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace cob_control_msgs
{

static const char GETOBSTACLEDISTANCE[] = "cob_control_msgs/GetObstacleDistance";

  class GetObstacleDistanceRequest : public ros::Msg
  {
    public:
      uint32_t links_length;
      typedef char* _links_type;
      _links_type st_links;
      _links_type * links;
      uint32_t objects_length;
      typedef char* _objects_type;
      _objects_type st_objects;
      _objects_type * objects;

    GetObstacleDistanceRequest():
      links_length(0), st_links(), links(nullptr),
      objects_length(0), st_objects(), objects(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->links_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->links_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->links_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->links_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->links_length);
      for( uint32_t i = 0; i < links_length; i++){
      uint32_t length_linksi = strlen(this->links[i]);
      varToArr(outbuffer + offset, length_linksi);
      offset += 4;
      memcpy(outbuffer + offset, this->links[i], length_linksi);
      offset += length_linksi;
      }
      *(outbuffer + offset + 0) = (this->objects_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->objects_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->objects_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->objects_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->objects_length);
      for( uint32_t i = 0; i < objects_length; i++){
      uint32_t length_objectsi = strlen(this->objects[i]);
      varToArr(outbuffer + offset, length_objectsi);
      offset += 4;
      memcpy(outbuffer + offset, this->objects[i], length_objectsi);
      offset += length_objectsi;
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t links_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      links_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      links_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      links_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->links_length);
      if(links_lengthT > links_length)
        this->links = (char**)realloc(this->links, links_lengthT * sizeof(char*));
      links_length = links_lengthT;
      for( uint32_t i = 0; i < links_length; i++){
      uint32_t length_st_links;
      arrToVar(length_st_links, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_links; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_links-1]=0;
      this->st_links = (char *)(inbuffer + offset-1);
      offset += length_st_links;
        memcpy( &(this->links[i]), &(this->st_links), sizeof(char*));
      }
      uint32_t objects_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      objects_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      objects_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      objects_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->objects_length);
      if(objects_lengthT > objects_length)
        this->objects = (char**)realloc(this->objects, objects_lengthT * sizeof(char*));
      objects_length = objects_lengthT;
      for( uint32_t i = 0; i < objects_length; i++){
      uint32_t length_st_objects;
      arrToVar(length_st_objects, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_objects; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_objects-1]=0;
      this->st_objects = (char *)(inbuffer + offset-1);
      offset += length_st_objects;
        memcpy( &(this->objects[i]), &(this->st_objects), sizeof(char*));
      }
     return offset;
    }

    virtual const char * getType() override { return GETOBSTACLEDISTANCE; };
    virtual const char * getMD5() override { return "26a63930cc171dbad7ae747d5d9efb00"; };

  };

  class GetObstacleDistanceResponse : public ros::Msg
  {
    public:
      uint32_t link_to_object_length;
      typedef char* _link_to_object_type;
      _link_to_object_type st_link_to_object;
      _link_to_object_type * link_to_object;
      uint32_t distances_length;
      typedef double _distances_type;
      _distances_type st_distances;
      _distances_type * distances;

    GetObstacleDistanceResponse():
      link_to_object_length(0), st_link_to_object(), link_to_object(nullptr),
      distances_length(0), st_distances(), distances(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->link_to_object_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->link_to_object_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->link_to_object_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->link_to_object_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->link_to_object_length);
      for( uint32_t i = 0; i < link_to_object_length; i++){
      uint32_t length_link_to_objecti = strlen(this->link_to_object[i]);
      varToArr(outbuffer + offset, length_link_to_objecti);
      offset += 4;
      memcpy(outbuffer + offset, this->link_to_object[i], length_link_to_objecti);
      offset += length_link_to_objecti;
      }
      *(outbuffer + offset + 0) = (this->distances_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->distances_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->distances_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->distances_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->distances_length);
      for( uint32_t i = 0; i < distances_length; i++){
      union {
        double real;
        uint64_t base;
      } u_distancesi;
      u_distancesi.real = this->distances[i];
      *(outbuffer + offset + 0) = (u_distancesi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_distancesi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_distancesi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_distancesi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_distancesi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_distancesi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_distancesi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_distancesi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->distances[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t link_to_object_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      link_to_object_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      link_to_object_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      link_to_object_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->link_to_object_length);
      if(link_to_object_lengthT > link_to_object_length)
        this->link_to_object = (char**)realloc(this->link_to_object, link_to_object_lengthT * sizeof(char*));
      link_to_object_length = link_to_object_lengthT;
      for( uint32_t i = 0; i < link_to_object_length; i++){
      uint32_t length_st_link_to_object;
      arrToVar(length_st_link_to_object, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_link_to_object; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_link_to_object-1]=0;
      this->st_link_to_object = (char *)(inbuffer + offset-1);
      offset += length_st_link_to_object;
        memcpy( &(this->link_to_object[i]), &(this->st_link_to_object), sizeof(char*));
      }
      uint32_t distances_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      distances_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      distances_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      distances_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->distances_length);
      if(distances_lengthT > distances_length)
        this->distances = (double*)realloc(this->distances, distances_lengthT * sizeof(double));
      distances_length = distances_lengthT;
      for( uint32_t i = 0; i < distances_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_distances;
      u_st_distances.base = 0;
      u_st_distances.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_distances.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_distances.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_distances.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_distances.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_distances.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_distances.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_distances.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_distances = u_st_distances.real;
      offset += sizeof(this->st_distances);
        memcpy( &(this->distances[i]), &(this->st_distances), sizeof(double));
      }
     return offset;
    }

    virtual const char * getType() override { return GETOBSTACLEDISTANCE; };
    virtual const char * getMD5() override { return "0f350045e25a569fa591e752a415419b"; };

  };

  class GetObstacleDistance {
    public:
    typedef GetObstacleDistanceRequest Request;
    typedef GetObstacleDistanceResponse Response;
  };

}
#endif
