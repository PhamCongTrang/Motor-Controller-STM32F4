#ifndef _ROS_franka_msgs_FrankaState_h
#define _ROS_franka_msgs_FrankaState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "franka_msgs/Errors.h"

namespace franka_msgs
{

  class FrankaState : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      double cartesian_collision[6];
      double cartesian_contact[6];
      double q[7];
      double q_d[7];
      double dq[7];
      double dq_d[7];
      double ddq_d[7];
      double theta[7];
      double dtheta[7];
      double tau_J[7];
      double dtau_J[7];
      double tau_J_d[7];
      double K_F_ext_hat_K[6];
      double elbow[2];
      double elbow_d[2];
      double elbow_c[2];
      double delbow_c[2];
      double ddelbow_c[2];
      double joint_collision[7];
      double joint_contact[7];
      double O_F_ext_hat_K[6];
      double O_dP_EE_d[6];
      double O_ddP_O[3];
      double O_dP_EE_c[6];
      double O_ddP_EE_c[6];
      double tau_ext_hat_filtered[7];
      typedef double _m_ee_type;
      _m_ee_type m_ee;
      double F_x_Cee[3];
      double I_ee[9];
      typedef double _m_load_type;
      _m_load_type m_load;
      double F_x_Cload[3];
      double I_load[9];
      typedef double _m_total_type;
      _m_total_type m_total;
      double F_x_Ctotal[3];
      double I_total[9];
      double O_T_EE[16];
      double O_T_EE_d[16];
      double O_T_EE_c[16];
      double F_T_EE[16];
      double F_T_NE[16];
      double NE_T_EE[16];
      double EE_T_K[16];
      typedef double _time_type;
      _time_type time;
      typedef double _control_command_success_rate_type;
      _control_command_success_rate_type control_command_success_rate;
      typedef uint8_t _robot_mode_type;
      _robot_mode_type robot_mode;
      typedef franka_msgs::Errors _current_errors_type;
      _current_errors_type current_errors;
      typedef franka_msgs::Errors _last_motion_errors_type;
      _last_motion_errors_type last_motion_errors;
      enum { ROBOT_MODE_OTHER = 0 };
      enum { ROBOT_MODE_IDLE = 1 };
      enum { ROBOT_MODE_MOVE = 2 };
      enum { ROBOT_MODE_GUIDING = 3 };
      enum { ROBOT_MODE_REFLEX = 4 };
      enum { ROBOT_MODE_USER_STOPPED = 5 };
      enum { ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY = 6 };

    FrankaState():
      header(),
      cartesian_collision(),
      cartesian_contact(),
      q(),
      q_d(),
      dq(),
      dq_d(),
      ddq_d(),
      theta(),
      dtheta(),
      tau_J(),
      dtau_J(),
      tau_J_d(),
      K_F_ext_hat_K(),
      elbow(),
      elbow_d(),
      elbow_c(),
      delbow_c(),
      ddelbow_c(),
      joint_collision(),
      joint_contact(),
      O_F_ext_hat_K(),
      O_dP_EE_d(),
      O_ddP_O(),
      O_dP_EE_c(),
      O_ddP_EE_c(),
      tau_ext_hat_filtered(),
      m_ee(0),
      F_x_Cee(),
      I_ee(),
      m_load(0),
      F_x_Cload(),
      I_load(),
      m_total(0),
      F_x_Ctotal(),
      I_total(),
      O_T_EE(),
      O_T_EE_d(),
      O_T_EE_c(),
      F_T_EE(),
      F_T_NE(),
      NE_T_EE(),
      EE_T_K(),
      time(0),
      control_command_success_rate(0),
      robot_mode(0),
      current_errors(),
      last_motion_errors()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      for( uint32_t i = 0; i < 6; i++){
      union {
        double real;
        uint64_t base;
      } u_cartesian_collisioni;
      u_cartesian_collisioni.real = this->cartesian_collision[i];
      *(outbuffer + offset + 0) = (u_cartesian_collisioni.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cartesian_collisioni.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cartesian_collisioni.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cartesian_collisioni.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_cartesian_collisioni.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_cartesian_collisioni.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_cartesian_collisioni.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_cartesian_collisioni.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->cartesian_collision[i]);
      }
      for( uint32_t i = 0; i < 6; i++){
      union {
        double real;
        uint64_t base;
      } u_cartesian_contacti;
      u_cartesian_contacti.real = this->cartesian_contact[i];
      *(outbuffer + offset + 0) = (u_cartesian_contacti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cartesian_contacti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cartesian_contacti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cartesian_contacti.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_cartesian_contacti.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_cartesian_contacti.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_cartesian_contacti.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_cartesian_contacti.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->cartesian_contact[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_qi;
      u_qi.real = this->q[i];
      *(outbuffer + offset + 0) = (u_qi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_qi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_qi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_qi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_qi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_qi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_qi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_qi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->q[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_q_di;
      u_q_di.real = this->q_d[i];
      *(outbuffer + offset + 0) = (u_q_di.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_q_di.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_q_di.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_q_di.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_q_di.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_q_di.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_q_di.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_q_di.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->q_d[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_dqi;
      u_dqi.real = this->dq[i];
      *(outbuffer + offset + 0) = (u_dqi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_dqi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_dqi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_dqi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_dqi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_dqi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_dqi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_dqi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->dq[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_dq_di;
      u_dq_di.real = this->dq_d[i];
      *(outbuffer + offset + 0) = (u_dq_di.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_dq_di.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_dq_di.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_dq_di.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_dq_di.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_dq_di.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_dq_di.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_dq_di.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->dq_d[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_ddq_di;
      u_ddq_di.real = this->ddq_d[i];
      *(outbuffer + offset + 0) = (u_ddq_di.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ddq_di.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ddq_di.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ddq_di.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_ddq_di.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_ddq_di.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_ddq_di.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_ddq_di.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->ddq_d[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_thetai;
      u_thetai.real = this->theta[i];
      *(outbuffer + offset + 0) = (u_thetai.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_thetai.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_thetai.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_thetai.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_thetai.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_thetai.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_thetai.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_thetai.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->theta[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_dthetai;
      u_dthetai.real = this->dtheta[i];
      *(outbuffer + offset + 0) = (u_dthetai.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_dthetai.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_dthetai.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_dthetai.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_dthetai.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_dthetai.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_dthetai.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_dthetai.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->dtheta[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_tau_Ji;
      u_tau_Ji.real = this->tau_J[i];
      *(outbuffer + offset + 0) = (u_tau_Ji.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_tau_Ji.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_tau_Ji.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_tau_Ji.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_tau_Ji.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_tau_Ji.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_tau_Ji.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_tau_Ji.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->tau_J[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_dtau_Ji;
      u_dtau_Ji.real = this->dtau_J[i];
      *(outbuffer + offset + 0) = (u_dtau_Ji.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_dtau_Ji.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_dtau_Ji.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_dtau_Ji.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_dtau_Ji.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_dtau_Ji.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_dtau_Ji.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_dtau_Ji.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->dtau_J[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_tau_J_di;
      u_tau_J_di.real = this->tau_J_d[i];
      *(outbuffer + offset + 0) = (u_tau_J_di.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_tau_J_di.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_tau_J_di.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_tau_J_di.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_tau_J_di.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_tau_J_di.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_tau_J_di.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_tau_J_di.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->tau_J_d[i]);
      }
      for( uint32_t i = 0; i < 6; i++){
      union {
        double real;
        uint64_t base;
      } u_K_F_ext_hat_Ki;
      u_K_F_ext_hat_Ki.real = this->K_F_ext_hat_K[i];
      *(outbuffer + offset + 0) = (u_K_F_ext_hat_Ki.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_K_F_ext_hat_Ki.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_K_F_ext_hat_Ki.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_K_F_ext_hat_Ki.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_K_F_ext_hat_Ki.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_K_F_ext_hat_Ki.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_K_F_ext_hat_Ki.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_K_F_ext_hat_Ki.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->K_F_ext_hat_K[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        double real;
        uint64_t base;
      } u_elbowi;
      u_elbowi.real = this->elbow[i];
      *(outbuffer + offset + 0) = (u_elbowi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_elbowi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_elbowi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_elbowi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_elbowi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_elbowi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_elbowi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_elbowi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->elbow[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        double real;
        uint64_t base;
      } u_elbow_di;
      u_elbow_di.real = this->elbow_d[i];
      *(outbuffer + offset + 0) = (u_elbow_di.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_elbow_di.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_elbow_di.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_elbow_di.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_elbow_di.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_elbow_di.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_elbow_di.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_elbow_di.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->elbow_d[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        double real;
        uint64_t base;
      } u_elbow_ci;
      u_elbow_ci.real = this->elbow_c[i];
      *(outbuffer + offset + 0) = (u_elbow_ci.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_elbow_ci.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_elbow_ci.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_elbow_ci.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_elbow_ci.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_elbow_ci.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_elbow_ci.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_elbow_ci.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->elbow_c[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        double real;
        uint64_t base;
      } u_delbow_ci;
      u_delbow_ci.real = this->delbow_c[i];
      *(outbuffer + offset + 0) = (u_delbow_ci.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_delbow_ci.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_delbow_ci.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_delbow_ci.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_delbow_ci.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_delbow_ci.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_delbow_ci.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_delbow_ci.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->delbow_c[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        double real;
        uint64_t base;
      } u_ddelbow_ci;
      u_ddelbow_ci.real = this->ddelbow_c[i];
      *(outbuffer + offset + 0) = (u_ddelbow_ci.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ddelbow_ci.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ddelbow_ci.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ddelbow_ci.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_ddelbow_ci.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_ddelbow_ci.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_ddelbow_ci.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_ddelbow_ci.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->ddelbow_c[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_joint_collisioni;
      u_joint_collisioni.real = this->joint_collision[i];
      *(outbuffer + offset + 0) = (u_joint_collisioni.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_joint_collisioni.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_joint_collisioni.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_joint_collisioni.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_joint_collisioni.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_joint_collisioni.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_joint_collisioni.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_joint_collisioni.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->joint_collision[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_joint_contacti;
      u_joint_contacti.real = this->joint_contact[i];
      *(outbuffer + offset + 0) = (u_joint_contacti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_joint_contacti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_joint_contacti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_joint_contacti.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_joint_contacti.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_joint_contacti.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_joint_contacti.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_joint_contacti.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->joint_contact[i]);
      }
      for( uint32_t i = 0; i < 6; i++){
      union {
        double real;
        uint64_t base;
      } u_O_F_ext_hat_Ki;
      u_O_F_ext_hat_Ki.real = this->O_F_ext_hat_K[i];
      *(outbuffer + offset + 0) = (u_O_F_ext_hat_Ki.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_O_F_ext_hat_Ki.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_O_F_ext_hat_Ki.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_O_F_ext_hat_Ki.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_O_F_ext_hat_Ki.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_O_F_ext_hat_Ki.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_O_F_ext_hat_Ki.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_O_F_ext_hat_Ki.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->O_F_ext_hat_K[i]);
      }
      for( uint32_t i = 0; i < 6; i++){
      union {
        double real;
        uint64_t base;
      } u_O_dP_EE_di;
      u_O_dP_EE_di.real = this->O_dP_EE_d[i];
      *(outbuffer + offset + 0) = (u_O_dP_EE_di.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_O_dP_EE_di.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_O_dP_EE_di.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_O_dP_EE_di.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_O_dP_EE_di.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_O_dP_EE_di.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_O_dP_EE_di.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_O_dP_EE_di.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->O_dP_EE_d[i]);
      }
      for( uint32_t i = 0; i < 3; i++){
      union {
        double real;
        uint64_t base;
      } u_O_ddP_Oi;
      u_O_ddP_Oi.real = this->O_ddP_O[i];
      *(outbuffer + offset + 0) = (u_O_ddP_Oi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_O_ddP_Oi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_O_ddP_Oi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_O_ddP_Oi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_O_ddP_Oi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_O_ddP_Oi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_O_ddP_Oi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_O_ddP_Oi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->O_ddP_O[i]);
      }
      for( uint32_t i = 0; i < 6; i++){
      union {
        double real;
        uint64_t base;
      } u_O_dP_EE_ci;
      u_O_dP_EE_ci.real = this->O_dP_EE_c[i];
      *(outbuffer + offset + 0) = (u_O_dP_EE_ci.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_O_dP_EE_ci.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_O_dP_EE_ci.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_O_dP_EE_ci.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_O_dP_EE_ci.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_O_dP_EE_ci.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_O_dP_EE_ci.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_O_dP_EE_ci.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->O_dP_EE_c[i]);
      }
      for( uint32_t i = 0; i < 6; i++){
      union {
        double real;
        uint64_t base;
      } u_O_ddP_EE_ci;
      u_O_ddP_EE_ci.real = this->O_ddP_EE_c[i];
      *(outbuffer + offset + 0) = (u_O_ddP_EE_ci.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_O_ddP_EE_ci.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_O_ddP_EE_ci.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_O_ddP_EE_ci.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_O_ddP_EE_ci.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_O_ddP_EE_ci.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_O_ddP_EE_ci.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_O_ddP_EE_ci.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->O_ddP_EE_c[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_tau_ext_hat_filteredi;
      u_tau_ext_hat_filteredi.real = this->tau_ext_hat_filtered[i];
      *(outbuffer + offset + 0) = (u_tau_ext_hat_filteredi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_tau_ext_hat_filteredi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_tau_ext_hat_filteredi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_tau_ext_hat_filteredi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_tau_ext_hat_filteredi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_tau_ext_hat_filteredi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_tau_ext_hat_filteredi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_tau_ext_hat_filteredi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->tau_ext_hat_filtered[i]);
      }
      union {
        double real;
        uint64_t base;
      } u_m_ee;
      u_m_ee.real = this->m_ee;
      *(outbuffer + offset + 0) = (u_m_ee.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_m_ee.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_m_ee.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_m_ee.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_m_ee.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_m_ee.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_m_ee.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_m_ee.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->m_ee);
      for( uint32_t i = 0; i < 3; i++){
      union {
        double real;
        uint64_t base;
      } u_F_x_Ceei;
      u_F_x_Ceei.real = this->F_x_Cee[i];
      *(outbuffer + offset + 0) = (u_F_x_Ceei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_F_x_Ceei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_F_x_Ceei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_F_x_Ceei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_F_x_Ceei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_F_x_Ceei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_F_x_Ceei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_F_x_Ceei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->F_x_Cee[i]);
      }
      for( uint32_t i = 0; i < 9; i++){
      union {
        double real;
        uint64_t base;
      } u_I_eei;
      u_I_eei.real = this->I_ee[i];
      *(outbuffer + offset + 0) = (u_I_eei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_I_eei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_I_eei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_I_eei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_I_eei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_I_eei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_I_eei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_I_eei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->I_ee[i]);
      }
      union {
        double real;
        uint64_t base;
      } u_m_load;
      u_m_load.real = this->m_load;
      *(outbuffer + offset + 0) = (u_m_load.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_m_load.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_m_load.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_m_load.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_m_load.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_m_load.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_m_load.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_m_load.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->m_load);
      for( uint32_t i = 0; i < 3; i++){
      union {
        double real;
        uint64_t base;
      } u_F_x_Cloadi;
      u_F_x_Cloadi.real = this->F_x_Cload[i];
      *(outbuffer + offset + 0) = (u_F_x_Cloadi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_F_x_Cloadi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_F_x_Cloadi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_F_x_Cloadi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_F_x_Cloadi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_F_x_Cloadi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_F_x_Cloadi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_F_x_Cloadi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->F_x_Cload[i]);
      }
      for( uint32_t i = 0; i < 9; i++){
      union {
        double real;
        uint64_t base;
      } u_I_loadi;
      u_I_loadi.real = this->I_load[i];
      *(outbuffer + offset + 0) = (u_I_loadi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_I_loadi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_I_loadi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_I_loadi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_I_loadi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_I_loadi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_I_loadi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_I_loadi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->I_load[i]);
      }
      union {
        double real;
        uint64_t base;
      } u_m_total;
      u_m_total.real = this->m_total;
      *(outbuffer + offset + 0) = (u_m_total.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_m_total.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_m_total.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_m_total.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_m_total.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_m_total.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_m_total.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_m_total.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->m_total);
      for( uint32_t i = 0; i < 3; i++){
      union {
        double real;
        uint64_t base;
      } u_F_x_Ctotali;
      u_F_x_Ctotali.real = this->F_x_Ctotal[i];
      *(outbuffer + offset + 0) = (u_F_x_Ctotali.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_F_x_Ctotali.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_F_x_Ctotali.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_F_x_Ctotali.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_F_x_Ctotali.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_F_x_Ctotali.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_F_x_Ctotali.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_F_x_Ctotali.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->F_x_Ctotal[i]);
      }
      for( uint32_t i = 0; i < 9; i++){
      union {
        double real;
        uint64_t base;
      } u_I_totali;
      u_I_totali.real = this->I_total[i];
      *(outbuffer + offset + 0) = (u_I_totali.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_I_totali.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_I_totali.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_I_totali.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_I_totali.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_I_totali.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_I_totali.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_I_totali.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->I_total[i]);
      }
      for( uint32_t i = 0; i < 16; i++){
      union {
        double real;
        uint64_t base;
      } u_O_T_EEi;
      u_O_T_EEi.real = this->O_T_EE[i];
      *(outbuffer + offset + 0) = (u_O_T_EEi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_O_T_EEi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_O_T_EEi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_O_T_EEi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_O_T_EEi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_O_T_EEi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_O_T_EEi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_O_T_EEi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->O_T_EE[i]);
      }
      for( uint32_t i = 0; i < 16; i++){
      union {
        double real;
        uint64_t base;
      } u_O_T_EE_di;
      u_O_T_EE_di.real = this->O_T_EE_d[i];
      *(outbuffer + offset + 0) = (u_O_T_EE_di.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_O_T_EE_di.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_O_T_EE_di.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_O_T_EE_di.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_O_T_EE_di.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_O_T_EE_di.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_O_T_EE_di.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_O_T_EE_di.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->O_T_EE_d[i]);
      }
      for( uint32_t i = 0; i < 16; i++){
      union {
        double real;
        uint64_t base;
      } u_O_T_EE_ci;
      u_O_T_EE_ci.real = this->O_T_EE_c[i];
      *(outbuffer + offset + 0) = (u_O_T_EE_ci.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_O_T_EE_ci.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_O_T_EE_ci.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_O_T_EE_ci.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_O_T_EE_ci.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_O_T_EE_ci.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_O_T_EE_ci.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_O_T_EE_ci.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->O_T_EE_c[i]);
      }
      for( uint32_t i = 0; i < 16; i++){
      union {
        double real;
        uint64_t base;
      } u_F_T_EEi;
      u_F_T_EEi.real = this->F_T_EE[i];
      *(outbuffer + offset + 0) = (u_F_T_EEi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_F_T_EEi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_F_T_EEi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_F_T_EEi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_F_T_EEi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_F_T_EEi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_F_T_EEi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_F_T_EEi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->F_T_EE[i]);
      }
      for( uint32_t i = 0; i < 16; i++){
      union {
        double real;
        uint64_t base;
      } u_F_T_NEi;
      u_F_T_NEi.real = this->F_T_NE[i];
      *(outbuffer + offset + 0) = (u_F_T_NEi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_F_T_NEi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_F_T_NEi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_F_T_NEi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_F_T_NEi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_F_T_NEi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_F_T_NEi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_F_T_NEi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->F_T_NE[i]);
      }
      for( uint32_t i = 0; i < 16; i++){
      union {
        double real;
        uint64_t base;
      } u_NE_T_EEi;
      u_NE_T_EEi.real = this->NE_T_EE[i];
      *(outbuffer + offset + 0) = (u_NE_T_EEi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_NE_T_EEi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_NE_T_EEi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_NE_T_EEi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_NE_T_EEi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_NE_T_EEi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_NE_T_EEi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_NE_T_EEi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->NE_T_EE[i]);
      }
      for( uint32_t i = 0; i < 16; i++){
      union {
        double real;
        uint64_t base;
      } u_EE_T_Ki;
      u_EE_T_Ki.real = this->EE_T_K[i];
      *(outbuffer + offset + 0) = (u_EE_T_Ki.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_EE_T_Ki.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_EE_T_Ki.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_EE_T_Ki.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_EE_T_Ki.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_EE_T_Ki.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_EE_T_Ki.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_EE_T_Ki.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->EE_T_K[i]);
      }
      union {
        double real;
        uint64_t base;
      } u_time;
      u_time.real = this->time;
      *(outbuffer + offset + 0) = (u_time.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_time.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_time.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_time.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_time.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_time.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_time.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_time.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->time);
      union {
        double real;
        uint64_t base;
      } u_control_command_success_rate;
      u_control_command_success_rate.real = this->control_command_success_rate;
      *(outbuffer + offset + 0) = (u_control_command_success_rate.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_control_command_success_rate.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_control_command_success_rate.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_control_command_success_rate.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_control_command_success_rate.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_control_command_success_rate.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_control_command_success_rate.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_control_command_success_rate.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->control_command_success_rate);
      *(outbuffer + offset + 0) = (this->robot_mode >> (8 * 0)) & 0xFF;
      offset += sizeof(this->robot_mode);
      offset += this->current_errors.serialize(outbuffer + offset);
      offset += this->last_motion_errors.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      for( uint32_t i = 0; i < 6; i++){
      union {
        double real;
        uint64_t base;
      } u_cartesian_collisioni;
      u_cartesian_collisioni.base = 0;
      u_cartesian_collisioni.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cartesian_collisioni.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cartesian_collisioni.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cartesian_collisioni.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_cartesian_collisioni.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_cartesian_collisioni.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_cartesian_collisioni.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_cartesian_collisioni.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->cartesian_collision[i] = u_cartesian_collisioni.real;
      offset += sizeof(this->cartesian_collision[i]);
      }
      for( uint32_t i = 0; i < 6; i++){
      union {
        double real;
        uint64_t base;
      } u_cartesian_contacti;
      u_cartesian_contacti.base = 0;
      u_cartesian_contacti.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cartesian_contacti.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cartesian_contacti.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cartesian_contacti.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_cartesian_contacti.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_cartesian_contacti.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_cartesian_contacti.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_cartesian_contacti.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->cartesian_contact[i] = u_cartesian_contacti.real;
      offset += sizeof(this->cartesian_contact[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_qi;
      u_qi.base = 0;
      u_qi.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_qi.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_qi.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_qi.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_qi.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_qi.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_qi.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_qi.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->q[i] = u_qi.real;
      offset += sizeof(this->q[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_q_di;
      u_q_di.base = 0;
      u_q_di.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_q_di.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_q_di.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_q_di.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_q_di.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_q_di.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_q_di.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_q_di.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->q_d[i] = u_q_di.real;
      offset += sizeof(this->q_d[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_dqi;
      u_dqi.base = 0;
      u_dqi.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_dqi.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_dqi.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_dqi.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_dqi.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_dqi.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_dqi.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_dqi.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->dq[i] = u_dqi.real;
      offset += sizeof(this->dq[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_dq_di;
      u_dq_di.base = 0;
      u_dq_di.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_dq_di.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_dq_di.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_dq_di.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_dq_di.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_dq_di.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_dq_di.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_dq_di.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->dq_d[i] = u_dq_di.real;
      offset += sizeof(this->dq_d[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_ddq_di;
      u_ddq_di.base = 0;
      u_ddq_di.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ddq_di.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ddq_di.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ddq_di.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_ddq_di.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_ddq_di.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_ddq_di.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_ddq_di.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->ddq_d[i] = u_ddq_di.real;
      offset += sizeof(this->ddq_d[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_thetai;
      u_thetai.base = 0;
      u_thetai.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_thetai.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_thetai.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_thetai.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_thetai.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_thetai.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_thetai.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_thetai.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->theta[i] = u_thetai.real;
      offset += sizeof(this->theta[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_dthetai;
      u_dthetai.base = 0;
      u_dthetai.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_dthetai.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_dthetai.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_dthetai.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_dthetai.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_dthetai.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_dthetai.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_dthetai.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->dtheta[i] = u_dthetai.real;
      offset += sizeof(this->dtheta[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_tau_Ji;
      u_tau_Ji.base = 0;
      u_tau_Ji.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_tau_Ji.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_tau_Ji.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_tau_Ji.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_tau_Ji.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_tau_Ji.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_tau_Ji.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_tau_Ji.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->tau_J[i] = u_tau_Ji.real;
      offset += sizeof(this->tau_J[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_dtau_Ji;
      u_dtau_Ji.base = 0;
      u_dtau_Ji.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_dtau_Ji.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_dtau_Ji.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_dtau_Ji.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_dtau_Ji.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_dtau_Ji.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_dtau_Ji.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_dtau_Ji.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->dtau_J[i] = u_dtau_Ji.real;
      offset += sizeof(this->dtau_J[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_tau_J_di;
      u_tau_J_di.base = 0;
      u_tau_J_di.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_tau_J_di.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_tau_J_di.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_tau_J_di.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_tau_J_di.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_tau_J_di.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_tau_J_di.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_tau_J_di.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->tau_J_d[i] = u_tau_J_di.real;
      offset += sizeof(this->tau_J_d[i]);
      }
      for( uint32_t i = 0; i < 6; i++){
      union {
        double real;
        uint64_t base;
      } u_K_F_ext_hat_Ki;
      u_K_F_ext_hat_Ki.base = 0;
      u_K_F_ext_hat_Ki.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_K_F_ext_hat_Ki.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_K_F_ext_hat_Ki.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_K_F_ext_hat_Ki.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_K_F_ext_hat_Ki.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_K_F_ext_hat_Ki.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_K_F_ext_hat_Ki.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_K_F_ext_hat_Ki.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->K_F_ext_hat_K[i] = u_K_F_ext_hat_Ki.real;
      offset += sizeof(this->K_F_ext_hat_K[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        double real;
        uint64_t base;
      } u_elbowi;
      u_elbowi.base = 0;
      u_elbowi.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_elbowi.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_elbowi.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_elbowi.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_elbowi.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_elbowi.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_elbowi.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_elbowi.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->elbow[i] = u_elbowi.real;
      offset += sizeof(this->elbow[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        double real;
        uint64_t base;
      } u_elbow_di;
      u_elbow_di.base = 0;
      u_elbow_di.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_elbow_di.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_elbow_di.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_elbow_di.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_elbow_di.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_elbow_di.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_elbow_di.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_elbow_di.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->elbow_d[i] = u_elbow_di.real;
      offset += sizeof(this->elbow_d[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        double real;
        uint64_t base;
      } u_elbow_ci;
      u_elbow_ci.base = 0;
      u_elbow_ci.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_elbow_ci.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_elbow_ci.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_elbow_ci.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_elbow_ci.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_elbow_ci.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_elbow_ci.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_elbow_ci.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->elbow_c[i] = u_elbow_ci.real;
      offset += sizeof(this->elbow_c[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        double real;
        uint64_t base;
      } u_delbow_ci;
      u_delbow_ci.base = 0;
      u_delbow_ci.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_delbow_ci.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_delbow_ci.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_delbow_ci.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_delbow_ci.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_delbow_ci.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_delbow_ci.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_delbow_ci.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->delbow_c[i] = u_delbow_ci.real;
      offset += sizeof(this->delbow_c[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        double real;
        uint64_t base;
      } u_ddelbow_ci;
      u_ddelbow_ci.base = 0;
      u_ddelbow_ci.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ddelbow_ci.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ddelbow_ci.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ddelbow_ci.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_ddelbow_ci.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_ddelbow_ci.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_ddelbow_ci.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_ddelbow_ci.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->ddelbow_c[i] = u_ddelbow_ci.real;
      offset += sizeof(this->ddelbow_c[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_joint_collisioni;
      u_joint_collisioni.base = 0;
      u_joint_collisioni.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_joint_collisioni.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_joint_collisioni.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_joint_collisioni.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_joint_collisioni.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_joint_collisioni.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_joint_collisioni.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_joint_collisioni.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->joint_collision[i] = u_joint_collisioni.real;
      offset += sizeof(this->joint_collision[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_joint_contacti;
      u_joint_contacti.base = 0;
      u_joint_contacti.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_joint_contacti.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_joint_contacti.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_joint_contacti.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_joint_contacti.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_joint_contacti.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_joint_contacti.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_joint_contacti.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->joint_contact[i] = u_joint_contacti.real;
      offset += sizeof(this->joint_contact[i]);
      }
      for( uint32_t i = 0; i < 6; i++){
      union {
        double real;
        uint64_t base;
      } u_O_F_ext_hat_Ki;
      u_O_F_ext_hat_Ki.base = 0;
      u_O_F_ext_hat_Ki.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_O_F_ext_hat_Ki.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_O_F_ext_hat_Ki.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_O_F_ext_hat_Ki.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_O_F_ext_hat_Ki.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_O_F_ext_hat_Ki.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_O_F_ext_hat_Ki.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_O_F_ext_hat_Ki.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->O_F_ext_hat_K[i] = u_O_F_ext_hat_Ki.real;
      offset += sizeof(this->O_F_ext_hat_K[i]);
      }
      for( uint32_t i = 0; i < 6; i++){
      union {
        double real;
        uint64_t base;
      } u_O_dP_EE_di;
      u_O_dP_EE_di.base = 0;
      u_O_dP_EE_di.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_O_dP_EE_di.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_O_dP_EE_di.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_O_dP_EE_di.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_O_dP_EE_di.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_O_dP_EE_di.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_O_dP_EE_di.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_O_dP_EE_di.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->O_dP_EE_d[i] = u_O_dP_EE_di.real;
      offset += sizeof(this->O_dP_EE_d[i]);
      }
      for( uint32_t i = 0; i < 3; i++){
      union {
        double real;
        uint64_t base;
      } u_O_ddP_Oi;
      u_O_ddP_Oi.base = 0;
      u_O_ddP_Oi.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_O_ddP_Oi.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_O_ddP_Oi.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_O_ddP_Oi.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_O_ddP_Oi.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_O_ddP_Oi.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_O_ddP_Oi.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_O_ddP_Oi.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->O_ddP_O[i] = u_O_ddP_Oi.real;
      offset += sizeof(this->O_ddP_O[i]);
      }
      for( uint32_t i = 0; i < 6; i++){
      union {
        double real;
        uint64_t base;
      } u_O_dP_EE_ci;
      u_O_dP_EE_ci.base = 0;
      u_O_dP_EE_ci.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_O_dP_EE_ci.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_O_dP_EE_ci.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_O_dP_EE_ci.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_O_dP_EE_ci.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_O_dP_EE_ci.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_O_dP_EE_ci.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_O_dP_EE_ci.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->O_dP_EE_c[i] = u_O_dP_EE_ci.real;
      offset += sizeof(this->O_dP_EE_c[i]);
      }
      for( uint32_t i = 0; i < 6; i++){
      union {
        double real;
        uint64_t base;
      } u_O_ddP_EE_ci;
      u_O_ddP_EE_ci.base = 0;
      u_O_ddP_EE_ci.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_O_ddP_EE_ci.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_O_ddP_EE_ci.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_O_ddP_EE_ci.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_O_ddP_EE_ci.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_O_ddP_EE_ci.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_O_ddP_EE_ci.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_O_ddP_EE_ci.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->O_ddP_EE_c[i] = u_O_ddP_EE_ci.real;
      offset += sizeof(this->O_ddP_EE_c[i]);
      }
      for( uint32_t i = 0; i < 7; i++){
      union {
        double real;
        uint64_t base;
      } u_tau_ext_hat_filteredi;
      u_tau_ext_hat_filteredi.base = 0;
      u_tau_ext_hat_filteredi.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_tau_ext_hat_filteredi.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_tau_ext_hat_filteredi.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_tau_ext_hat_filteredi.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_tau_ext_hat_filteredi.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_tau_ext_hat_filteredi.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_tau_ext_hat_filteredi.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_tau_ext_hat_filteredi.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->tau_ext_hat_filtered[i] = u_tau_ext_hat_filteredi.real;
      offset += sizeof(this->tau_ext_hat_filtered[i]);
      }
      union {
        double real;
        uint64_t base;
      } u_m_ee;
      u_m_ee.base = 0;
      u_m_ee.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_m_ee.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_m_ee.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_m_ee.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_m_ee.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_m_ee.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_m_ee.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_m_ee.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->m_ee = u_m_ee.real;
      offset += sizeof(this->m_ee);
      for( uint32_t i = 0; i < 3; i++){
      union {
        double real;
        uint64_t base;
      } u_F_x_Ceei;
      u_F_x_Ceei.base = 0;
      u_F_x_Ceei.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_F_x_Ceei.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_F_x_Ceei.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_F_x_Ceei.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_F_x_Ceei.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_F_x_Ceei.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_F_x_Ceei.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_F_x_Ceei.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->F_x_Cee[i] = u_F_x_Ceei.real;
      offset += sizeof(this->F_x_Cee[i]);
      }
      for( uint32_t i = 0; i < 9; i++){
      union {
        double real;
        uint64_t base;
      } u_I_eei;
      u_I_eei.base = 0;
      u_I_eei.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_I_eei.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_I_eei.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_I_eei.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_I_eei.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_I_eei.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_I_eei.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_I_eei.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->I_ee[i] = u_I_eei.real;
      offset += sizeof(this->I_ee[i]);
      }
      union {
        double real;
        uint64_t base;
      } u_m_load;
      u_m_load.base = 0;
      u_m_load.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_m_load.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_m_load.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_m_load.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_m_load.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_m_load.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_m_load.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_m_load.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->m_load = u_m_load.real;
      offset += sizeof(this->m_load);
      for( uint32_t i = 0; i < 3; i++){
      union {
        double real;
        uint64_t base;
      } u_F_x_Cloadi;
      u_F_x_Cloadi.base = 0;
      u_F_x_Cloadi.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_F_x_Cloadi.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_F_x_Cloadi.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_F_x_Cloadi.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_F_x_Cloadi.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_F_x_Cloadi.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_F_x_Cloadi.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_F_x_Cloadi.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->F_x_Cload[i] = u_F_x_Cloadi.real;
      offset += sizeof(this->F_x_Cload[i]);
      }
      for( uint32_t i = 0; i < 9; i++){
      union {
        double real;
        uint64_t base;
      } u_I_loadi;
      u_I_loadi.base = 0;
      u_I_loadi.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_I_loadi.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_I_loadi.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_I_loadi.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_I_loadi.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_I_loadi.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_I_loadi.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_I_loadi.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->I_load[i] = u_I_loadi.real;
      offset += sizeof(this->I_load[i]);
      }
      union {
        double real;
        uint64_t base;
      } u_m_total;
      u_m_total.base = 0;
      u_m_total.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_m_total.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_m_total.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_m_total.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_m_total.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_m_total.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_m_total.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_m_total.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->m_total = u_m_total.real;
      offset += sizeof(this->m_total);
      for( uint32_t i = 0; i < 3; i++){
      union {
        double real;
        uint64_t base;
      } u_F_x_Ctotali;
      u_F_x_Ctotali.base = 0;
      u_F_x_Ctotali.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_F_x_Ctotali.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_F_x_Ctotali.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_F_x_Ctotali.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_F_x_Ctotali.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_F_x_Ctotali.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_F_x_Ctotali.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_F_x_Ctotali.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->F_x_Ctotal[i] = u_F_x_Ctotali.real;
      offset += sizeof(this->F_x_Ctotal[i]);
      }
      for( uint32_t i = 0; i < 9; i++){
      union {
        double real;
        uint64_t base;
      } u_I_totali;
      u_I_totali.base = 0;
      u_I_totali.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_I_totali.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_I_totali.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_I_totali.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_I_totali.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_I_totali.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_I_totali.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_I_totali.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->I_total[i] = u_I_totali.real;
      offset += sizeof(this->I_total[i]);
      }
      for( uint32_t i = 0; i < 16; i++){
      union {
        double real;
        uint64_t base;
      } u_O_T_EEi;
      u_O_T_EEi.base = 0;
      u_O_T_EEi.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_O_T_EEi.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_O_T_EEi.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_O_T_EEi.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_O_T_EEi.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_O_T_EEi.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_O_T_EEi.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_O_T_EEi.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->O_T_EE[i] = u_O_T_EEi.real;
      offset += sizeof(this->O_T_EE[i]);
      }
      for( uint32_t i = 0; i < 16; i++){
      union {
        double real;
        uint64_t base;
      } u_O_T_EE_di;
      u_O_T_EE_di.base = 0;
      u_O_T_EE_di.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_O_T_EE_di.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_O_T_EE_di.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_O_T_EE_di.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_O_T_EE_di.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_O_T_EE_di.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_O_T_EE_di.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_O_T_EE_di.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->O_T_EE_d[i] = u_O_T_EE_di.real;
      offset += sizeof(this->O_T_EE_d[i]);
      }
      for( uint32_t i = 0; i < 16; i++){
      union {
        double real;
        uint64_t base;
      } u_O_T_EE_ci;
      u_O_T_EE_ci.base = 0;
      u_O_T_EE_ci.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_O_T_EE_ci.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_O_T_EE_ci.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_O_T_EE_ci.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_O_T_EE_ci.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_O_T_EE_ci.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_O_T_EE_ci.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_O_T_EE_ci.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->O_T_EE_c[i] = u_O_T_EE_ci.real;
      offset += sizeof(this->O_T_EE_c[i]);
      }
      for( uint32_t i = 0; i < 16; i++){
      union {
        double real;
        uint64_t base;
      } u_F_T_EEi;
      u_F_T_EEi.base = 0;
      u_F_T_EEi.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_F_T_EEi.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_F_T_EEi.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_F_T_EEi.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_F_T_EEi.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_F_T_EEi.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_F_T_EEi.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_F_T_EEi.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->F_T_EE[i] = u_F_T_EEi.real;
      offset += sizeof(this->F_T_EE[i]);
      }
      for( uint32_t i = 0; i < 16; i++){
      union {
        double real;
        uint64_t base;
      } u_F_T_NEi;
      u_F_T_NEi.base = 0;
      u_F_T_NEi.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_F_T_NEi.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_F_T_NEi.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_F_T_NEi.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_F_T_NEi.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_F_T_NEi.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_F_T_NEi.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_F_T_NEi.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->F_T_NE[i] = u_F_T_NEi.real;
      offset += sizeof(this->F_T_NE[i]);
      }
      for( uint32_t i = 0; i < 16; i++){
      union {
        double real;
        uint64_t base;
      } u_NE_T_EEi;
      u_NE_T_EEi.base = 0;
      u_NE_T_EEi.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_NE_T_EEi.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_NE_T_EEi.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_NE_T_EEi.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_NE_T_EEi.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_NE_T_EEi.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_NE_T_EEi.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_NE_T_EEi.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->NE_T_EE[i] = u_NE_T_EEi.real;
      offset += sizeof(this->NE_T_EE[i]);
      }
      for( uint32_t i = 0; i < 16; i++){
      union {
        double real;
        uint64_t base;
      } u_EE_T_Ki;
      u_EE_T_Ki.base = 0;
      u_EE_T_Ki.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_EE_T_Ki.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_EE_T_Ki.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_EE_T_Ki.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_EE_T_Ki.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_EE_T_Ki.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_EE_T_Ki.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_EE_T_Ki.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->EE_T_K[i] = u_EE_T_Ki.real;
      offset += sizeof(this->EE_T_K[i]);
      }
      union {
        double real;
        uint64_t base;
      } u_time;
      u_time.base = 0;
      u_time.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_time.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_time.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_time.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_time.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_time.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_time.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_time.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->time = u_time.real;
      offset += sizeof(this->time);
      union {
        double real;
        uint64_t base;
      } u_control_command_success_rate;
      u_control_command_success_rate.base = 0;
      u_control_command_success_rate.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_control_command_success_rate.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_control_command_success_rate.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_control_command_success_rate.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_control_command_success_rate.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_control_command_success_rate.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_control_command_success_rate.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_control_command_success_rate.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->control_command_success_rate = u_control_command_success_rate.real;
      offset += sizeof(this->control_command_success_rate);
      this->robot_mode =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->robot_mode);
      offset += this->current_errors.deserialize(inbuffer + offset);
      offset += this->last_motion_errors.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return "franka_msgs/FrankaState"; };
    virtual const char * getMD5() override { return "431567d5df6caf4e4dd7385f25cb71ee"; };

  };

}
#endif
