#ifndef _ROS_franka_example_controllers_JointTorqueComparison_h
#define _ROS_franka_example_controllers_JointTorqueComparison_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace franka_example_controllers
{

  class JointTorqueComparison : public ros::Msg
  {
    public:
      double tau_error[7];
      double tau_commanded[7];
      double tau_measured[7];
      typedef double _root_mean_square_error_type;
      _root_mean_square_error_type root_mean_square_error;

    JointTorqueComparison():
      tau_error(),
      tau_commanded(),
      tau_measured(),
      root_mean_square_error(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_tau_errori;
      u_tau_errori.real = this->tau_error[i];
      *(outbuffer + offset + 0) = (u_tau_errori.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_tau_errori.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_tau_errori.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_tau_errori.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_tau_errori.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_tau_errori.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_tau_errori.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_tau_errori.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->tau_error[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_tau_commandedi;
      u_tau_commandedi.real = this->tau_commanded[i];
      *(outbuffer + offset + 0) = (u_tau_commandedi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_tau_commandedi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_tau_commandedi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_tau_commandedi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_tau_commandedi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_tau_commandedi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_tau_commandedi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_tau_commandedi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->tau_commanded[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_tau_measuredi;
      u_tau_measuredi.real = this->tau_measured[i];
      *(outbuffer + offset + 0) = (u_tau_measuredi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_tau_measuredi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_tau_measuredi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_tau_measuredi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_tau_measuredi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_tau_measuredi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_tau_measuredi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_tau_measuredi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->tau_measured[i]);
      }
      union {
        double real;
        uint64_t base;
      } u_root_mean_square_error;
      u_root_mean_square_error.real = this->root_mean_square_error;
      *(outbuffer + offset + 0) = (u_root_mean_square_error.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_root_mean_square_error.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_root_mean_square_error.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_root_mean_square_error.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_root_mean_square_error.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_root_mean_square_error.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_root_mean_square_error.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_root_mean_square_error.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->root_mean_square_error);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_tau_errori;
      u_tau_errori.base = 0;
      u_tau_errori.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_tau_errori.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_tau_errori.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_tau_errori.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_tau_errori.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_tau_errori.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_tau_errori.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_tau_errori.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->tau_error[i] = u_tau_errori.real;
      offset += sizeof(this->tau_error[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_tau_commandedi;
      u_tau_commandedi.base = 0;
      u_tau_commandedi.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_tau_commandedi.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_tau_commandedi.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_tau_commandedi.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_tau_commandedi.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_tau_commandedi.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_tau_commandedi.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_tau_commandedi.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->tau_commanded[i] = u_tau_commandedi.real;
      offset += sizeof(this->tau_commanded[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_tau_measuredi;
      u_tau_measuredi.base = 0;
      u_tau_measuredi.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_tau_measuredi.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_tau_measuredi.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_tau_measuredi.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_tau_measuredi.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_tau_measuredi.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_tau_measuredi.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_tau_measuredi.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->tau_measured[i] = u_tau_measuredi.real;
      offset += sizeof(this->tau_measured[i]);
      }
      union {
        double real;
        uint64_t base;
      } u_root_mean_square_error;
      u_root_mean_square_error.base = 0;
      u_root_mean_square_error.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_root_mean_square_error.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_root_mean_square_error.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_root_mean_square_error.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_root_mean_square_error.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_root_mean_square_error.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_root_mean_square_error.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_root_mean_square_error.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->root_mean_square_error = u_root_mean_square_error.real;
      offset += sizeof(this->root_mean_square_error);
     return offset;
    }

    virtual const char * getType() override { return "franka_example_controllers/JointTorqueComparison"; };
    virtual const char * getMD5() override { return "6c09db90263c92a2e4e4d736f67bc033"; };

  };

}
#endif
