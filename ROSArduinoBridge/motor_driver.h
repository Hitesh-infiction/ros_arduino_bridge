/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
  #define RIGHT_MOTOR_BACKWARD 25
  #define LEFT_MOTOR_BACKWARD  4
  #define RIGHT_MOTOR_FORWARD  13
  #define LEFT_MOTOR_FORWARD   5
  #define RIGHT_MOTOR_ENABLE 12
  #define LEFT_MOTOR_ENABLE 10
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
