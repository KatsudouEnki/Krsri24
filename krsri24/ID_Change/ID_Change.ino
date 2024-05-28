#include <DynamixelSerial.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Dynamixel.setSerial(&Serial3);
  Dynamixel.begin(1000000, 2);
  Serial.println("test");
  delay(2000);

  pinMode(LED_BUILTIN,OUTPUT);
  digitalWrite(LED_BUILTIN,LOW);
  delay(500);
//  Dynamixel.setID(ID_lama, ID_baru);
   Dynamixel.setID(22,6);
  
  digitalWrite(LED_BUILTIN,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int id =6;
//  for(id=0; id<30;id++){
    Serial.println(id);
  Dynamixel.moveSpeed(id, 100,1000);
  delay(1000);
  Dynamixel.moveSpeed(id,900,1000);
  delay(1000);
//  }
}
