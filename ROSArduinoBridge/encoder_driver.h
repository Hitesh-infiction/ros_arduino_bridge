/* *************************************************************
   Encoder driver function definitions - by James Nugen
   ************************************************************ */
   
   
#ifdef ARDUINO_ENC_COUNTER
  //below can be changed, but should be PORTE pins; 
  //otherwise additional changes in the code are required
  #define LEFT_ENC_PIN_A PE4  //pin 2
  #define LEFT_ENC_PIN_B PE5  //pin 3
  
  //below can be changed, but should be PORTD
  #define RIGHT_ENC_PIN_A PD3  //pin 18
  #define RIGHT_ENC_PIN_B PD2   //pin 19
#endif
   
long readEncoder(int i);
void resetEncoder(int i);
void resetEncoders();
