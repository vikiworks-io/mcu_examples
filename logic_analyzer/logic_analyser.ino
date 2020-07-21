int sda_pin = 6;    
int scl_pin = 7;    
#define INTERVAL 1

int sda_val = 0;      
int scl_val = 0;
void setup() {
  Serial.begin(9600);
  pinMode(sda_pin, INPUT);   
  pinMode(scl_pin, INPUT); 
}

void loop() {
  sda_val = digitalRead(sda_pin); 
  scl_val = digitalRead(scl_pin);   

  Serial.print(scl_val + 10);
  Serial.print(",");
  Serial.print(sda_val + 5);
  Serial.println("");
  delay(INTERVAL);
}
