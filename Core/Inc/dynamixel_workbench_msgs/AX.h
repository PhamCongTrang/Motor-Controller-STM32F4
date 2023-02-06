#ifndef _ROS_dynamixel_workbench_msgs_AX_h
#define _ROS_dynamixel_workbench_msgs_AX_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace dynamixel_workbench_msgs
{

  class AX : public ros::Msg
  {
    public:
      typedef uint16_t _Model_Number_type;
      _Model_Number_type Model_Number;
      typedef uint8_t _Firmware_Version_type;
      _Firmware_Version_type Firmware_Version;
      typedef uint8_t _ID_type;
      _ID_type ID;
      typedef uint8_t _Baud_Rate_type;
      _Baud_Rate_type Baud_Rate;
      typedef uint8_t _Return_Delay_Time_type;
      _Return_Delay_Time_type Return_Delay_Time;
      typedef uint16_t _CW_Angle_Limit_type;
      _CW_Angle_Limit_type CW_Angle_Limit;
      typedef uint16_t _CCW_Angle_Limit_type;
      _CCW_Angle_Limit_type CCW_Angle_Limit;
      typedef uint8_t _Temperature_Limit_type;
      _Temperature_Limit_type Temperature_Limit;
      typedef uint8_t _Min_Voltage_Limit_type;
      _Min_Voltage_Limit_type Min_Voltage_Limit;
      typedef uint8_t _Max_Voltage_Limit_type;
      _Max_Voltage_Limit_type Max_Voltage_Limit;
      typedef uint16_t _Max_Torque_type;
      _Max_Torque_type Max_Torque;
      typedef uint8_t _Status_Return_Level_type;
      _Status_Return_Level_type Status_Return_Level;
      typedef uint8_t _Alarm_LED_type;
      _Alarm_LED_type Alarm_LED;
      typedef uint8_t _Shutdown_type;
      _Shutdown_type Shutdown;
      typedef uint8_t _Torque_Enable_type;
      _Torque_Enable_type Torque_Enable;
      typedef uint8_t _LED_type;
      _LED_type LED;
      typedef uint8_t _CW_Compliance_Margin_type;
      _CW_Compliance_Margin_type CW_Compliance_Margin;
      typedef uint8_t _CCW_Compliance_Margin_type;
      _CCW_Compliance_Margin_type CCW_Compliance_Margin;
      typedef uint8_t _CW_Compliance_Slope_type;
      _CW_Compliance_Slope_type CW_Compliance_Slope;
      typedef uint8_t _CCW_Compliance_Slope_type;
      _CCW_Compliance_Slope_type CCW_Compliance_Slope;
      typedef uint16_t _Goal_Position_type;
      _Goal_Position_type Goal_Position;
      typedef uint16_t _Moving_Speed_type;
      _Moving_Speed_type Moving_Speed;
      typedef uint16_t _Torque_Limit_type;
      _Torque_Limit_type Torque_Limit;
      typedef uint16_t _Present_Position_type;
      _Present_Position_type Present_Position;
      typedef uint16_t _Present_Speed_type;
      _Present_Speed_type Present_Speed;
      typedef uint16_t _Present_Load_type;
      _Present_Load_type Present_Load;
      typedef uint8_t _Present_Voltage_type;
      _Present_Voltage_type Present_Voltage;
      typedef uint8_t _Present_Temperature_type;
      _Present_Temperature_type Present_Temperature;
      typedef uint8_t _Registered_type;
      _Registered_type Registered;
      typedef uint8_t _Moving_type;
      _Moving_type Moving;
      typedef uint8_t _Lock_type;
      _Lock_type Lock;
      typedef uint16_t _Punch_type;
      _Punch_type Punch;

    AX():
      Model_Number(0),
      Firmware_Version(0),
      ID(0),
      Baud_Rate(0),
      Return_Delay_Time(0),
      CW_Angle_Limit(0),
      CCW_Angle_Limit(0),
      Temperature_Limit(0),
      Min_Voltage_Limit(0),
      Max_Voltage_Limit(0),
      Max_Torque(0),
      Status_Return_Level(0),
      Alarm_LED(0),
      Shutdown(0),
      Torque_Enable(0),
      LED(0),
      CW_Compliance_Margin(0),
      CCW_Compliance_Margin(0),
      CW_Compliance_Slope(0),
      CCW_Compliance_Slope(0),
      Goal_Position(0),
      Moving_Speed(0),
      Torque_Limit(0),
      Present_Position(0),
      Present_Speed(0),
      Present_Load(0),
      Present_Voltage(0),
      Present_Temperature(0),
      Registered(0),
      Moving(0),
      Lock(0),
      Punch(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->Model_Number >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->Model_Number >> (8 * 1)) & 0xFF;
      offset += sizeof(this->Model_Number);
      *(outbuffer + offset + 0) = (this->Firmware_Version >> (8 * 0)) & 0xFF;
      offset += sizeof(this->Firmware_Version);
      *(outbuffer + offset + 0) = (this->ID >> (8 * 0)) & 0xFF;
      offset += sizeof(this->ID);
      *(outbuffer + offset + 0) = (this->Baud_Rate >> (8 * 0)) & 0xFF;
      offset += sizeof(this->Baud_Rate);
      *(outbuffer + offset + 0) = (this->Return_Delay_Time >> (8 * 0)) & 0xFF;
      offset += sizeof(this->Return_Delay_Time);
      *(outbuffer + offset + 0) = (this->CW_Angle_Limit >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->CW_Angle_Limit >> (8 * 1)) & 0xFF;
      offset += sizeof(this->CW_Angle_Limit);
      *(outbuffer + offset + 0) = (this->CCW_Angle_Limit >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->CCW_Angle_Limit >> (8 * 1)) & 0xFF;
      offset += sizeof(this->CCW_Angle_Limit);
      *(outbuffer + offset + 0) = (this->Temperature_Limit >> (8 * 0)) & 0xFF;
      offset += sizeof(this->Temperature_Limit);
      *(outbuffer + offset + 0) = (this->Min_Voltage_Limit >> (8 * 0)) & 0xFF;
      offset += sizeof(this->Min_Voltage_Limit);
      *(outbuffer + offset + 0) = (this->Max_Voltage_Limit >> (8 * 0)) & 0xFF;
      offset += sizeof(this->Max_Voltage_Limit);
      *(outbuffer + offset + 0) = (this->Max_Torque >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->Max_Torque >> (8 * 1)) & 0xFF;
      offset += sizeof(this->Max_Torque);
      *(outbuffer + offset + 0) = (this->Status_Return_Level >> (8 * 0)) & 0xFF;
      offset += sizeof(this->Status_Return_Level);
      *(outbuffer + offset + 0) = (this->Alarm_LED >> (8 * 0)) & 0xFF;
      offset += sizeof(this->Alarm_LED);
      *(outbuffer + offset + 0) = (this->Shutdown >> (8 * 0)) & 0xFF;
      offset += sizeof(this->Shutdown);
      *(outbuffer + offset + 0) = (this->Torque_Enable >> (8 * 0)) & 0xFF;
      offset += sizeof(this->Torque_Enable);
      *(outbuffer + offset + 0) = (this->LED >> (8 * 0)) & 0xFF;
      offset += sizeof(this->LED);
      *(outbuffer + offset + 0) = (this->CW_Compliance_Margin >> (8 * 0)) & 0xFF;
      offset += sizeof(this->CW_Compliance_Margin);
      *(outbuffer + offset + 0) = (this->CCW_Compliance_Margin >> (8 * 0)) & 0xFF;
      offset += sizeof(this->CCW_Compliance_Margin);
      *(outbuffer + offset + 0) = (this->CW_Compliance_Slope >> (8 * 0)) & 0xFF;
      offset += sizeof(this->CW_Compliance_Slope);
      *(outbuffer + offset + 0) = (this->CCW_Compliance_Slope >> (8 * 0)) & 0xFF;
      offset += sizeof(this->CCW_Compliance_Slope);
      *(outbuffer + offset + 0) = (this->Goal_Position >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->Goal_Position >> (8 * 1)) & 0xFF;
      offset += sizeof(this->Goal_Position);
      *(outbuffer + offset + 0) = (this->Moving_Speed >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->Moving_Speed >> (8 * 1)) & 0xFF;
      offset += sizeof(this->Moving_Speed);
      *(outbuffer + offset + 0) = (this->Torque_Limit >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->Torque_Limit >> (8 * 1)) & 0xFF;
      offset += sizeof(this->Torque_Limit);
      *(outbuffer + offset + 0) = (this->Present_Position >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->Present_Position >> (8 * 1)) & 0xFF;
      offset += sizeof(this->Present_Position);
      *(outbuffer + offset + 0) = (this->Present_Speed >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->Present_Speed >> (8 * 1)) & 0xFF;
      offset += sizeof(this->Present_Speed);
      *(outbuffer + offset + 0) = (this->Present_Load >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->Present_Load >> (8 * 1)) & 0xFF;
      offset += sizeof(this->Present_Load);
      *(outbuffer + offset + 0) = (this->Present_Voltage >> (8 * 0)) & 0xFF;
      offset += sizeof(this->Present_Voltage);
      *(outbuffer + offset + 0) = (this->Present_Temperature >> (8 * 0)) & 0xFF;
      offset += sizeof(this->Present_Temperature);
      *(outbuffer + offset + 0) = (this->Registered >> (8 * 0)) & 0xFF;
      offset += sizeof(this->Registered);
      *(outbuffer + offset + 0) = (this->Moving >> (8 * 0)) & 0xFF;
      offset += sizeof(this->Moving);
      *(outbuffer + offset + 0) = (this->Lock >> (8 * 0)) & 0xFF;
      offset += sizeof(this->Lock);
      *(outbuffer + offset + 0) = (this->Punch >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->Punch >> (8 * 1)) & 0xFF;
      offset += sizeof(this->Punch);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->Model_Number =  ((uint16_t) (*(inbuffer + offset)));
      this->Model_Number |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->Model_Number);
      this->Firmware_Version =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->Firmware_Version);
      this->ID =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->ID);
      this->Baud_Rate =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->Baud_Rate);
      this->Return_Delay_Time =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->Return_Delay_Time);
      this->CW_Angle_Limit =  ((uint16_t) (*(inbuffer + offset)));
      this->CW_Angle_Limit |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->CW_Angle_Limit);
      this->CCW_Angle_Limit =  ((uint16_t) (*(inbuffer + offset)));
      this->CCW_Angle_Limit |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->CCW_Angle_Limit);
      this->Temperature_Limit =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->Temperature_Limit);
      this->Min_Voltage_Limit =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->Min_Voltage_Limit);
      this->Max_Voltage_Limit =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->Max_Voltage_Limit);
      this->Max_Torque =  ((uint16_t) (*(inbuffer + offset)));
      this->Max_Torque |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->Max_Torque);
      this->Status_Return_Level =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->Status_Return_Level);
      this->Alarm_LED =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->Alarm_LED);
      this->Shutdown =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->Shutdown);
      this->Torque_Enable =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->Torque_Enable);
      this->LED =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->LED);
      this->CW_Compliance_Margin =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->CW_Compliance_Margin);
      this->CCW_Compliance_Margin =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->CCW_Compliance_Margin);
      this->CW_Compliance_Slope =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->CW_Compliance_Slope);
      this->CCW_Compliance_Slope =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->CCW_Compliance_Slope);
      this->Goal_Position =  ((uint16_t) (*(inbuffer + offset)));
      this->Goal_Position |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->Goal_Position);
      this->Moving_Speed =  ((uint16_t) (*(inbuffer + offset)));
      this->Moving_Speed |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->Moving_Speed);
      this->Torque_Limit =  ((uint16_t) (*(inbuffer + offset)));
      this->Torque_Limit |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->Torque_Limit);
      this->Present_Position =  ((uint16_t) (*(inbuffer + offset)));
      this->Present_Position |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->Present_Position);
      this->Present_Speed =  ((uint16_t) (*(inbuffer + offset)));
      this->Present_Speed |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->Present_Speed);
      this->Present_Load =  ((uint16_t) (*(inbuffer + offset)));
      this->Present_Load |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->Present_Load);
      this->Present_Voltage =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->Present_Voltage);
      this->Present_Temperature =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->Present_Temperature);
      this->Registered =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->Registered);
      this->Moving =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->Moving);
      this->Lock =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->Lock);
      this->Punch =  ((uint16_t) (*(inbuffer + offset)));
      this->Punch |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->Punch);
     return offset;
    }

    virtual const char * getType() override { return "dynamixel_workbench_msgs/AX"; };
    virtual const char * getMD5() override { return "2995886198dd0136a45c431a45ec13b2"; };

  };

}
#endif
