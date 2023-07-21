﻿# Motor-Controller-STM32F4
# 1. Rosserial
1. Subscribe from topic /cmd_vel is set speed from ROS
2. Take that velocity as v_setpoint, move to part 2 use PID to control motor speed.
3. Publish to topic /velocity_publisher returns ROS.
# 2. Control motor speed by PID algorithm
1. Read the number of pulses from the encoder, calculate the current speed of the robot: v_measure
2. Calculate v_error = v_measure - v_setpoint
3. Programming a digital PID controller including 3 components P, I, D
4. Adjust Kp, Ki, Kd parameters for shortest transient time, minimize overshoot and eliminate static bias
