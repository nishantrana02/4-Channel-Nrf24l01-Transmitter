//Nishant Rana 4 Channel Rover Test
#include <SPI.h>
#include <nRF24L01.h>                 
#include <RF24.h>
RF24 radio(9, 10);                      
const uint64_t pipe = 0xE8E8F0F0E1LL;   
  int j1xPin = A0;                      
  int j1yPin = A1;
  int j2xPin = A2;
  int j2yPin = A3;                   
  int data[8];                        
  
void setup() {
  Serial.begin(9600);                  // start serial monitor for debugging
  radio.begin();                       // start radio
  radio.openWritingPipe(pipe);         // this is the controller
  radio.setPALevel(RF24_PA_HIGH);      // High power
  radio.setDataRate(RF24_250KBPS);     // data rate 250 kb/s
  radio.stopListening();               // stops listening to transmit

  }
void loop() {                     
  j1xPin = analogRead(A1);                     // read x pin from joystick 
  j1yPin = analogRead(A0);                    //  read y pin from joystick 
  j2xPin = analogRead(A2);                     // read x pin from joystick 
  j2yPin = analogRead(A3);                    //  read y pin from joystick 
  data[0] = j1xPin;                
  data[1] = j1yPin;               
  data[2] = j2xPin;
  data[3] = j2yPin;
  radio.write(&data, sizeof(data));                                
  Serial.print("x:");       
  Serial.print(data[0]);   
  Serial.print(" y:");     
  Serial.print(data[1]);   
  Serial.print(" x2:");
  Serial.print(data[2]);
  Serial.print(" y2:");
  Serial.print(data[3]); 
  Serial.println(); 
}
