#include <Wire.h>

#define I2C_ADDRESS 0x29
void setup()
{
  Serial.begin(9600);     
  delay(1000);
      
  Serial.println(" SETUP BEGIN ");      
  Wire.begin(I2C_ADDRESS);          
  Serial.println(" SETUP END "); 
  Wire.onReceive(receiveEvent); 
     

}

void loop()
{
  delay(500);
}

void receiveEvent(int howMany)
{
  while(1 < Wire.available()) 
  {
    char c = Wire.read(); 
    Serial.print(c);        
  }
  int x = Wire.read();    
  Serial.println(x);        
}
