#include <BleKeyboard.h>

BleKeyboard bleKeyboard("Wak-tech keyboard");

void setup() {
  Serial.begin(115200);
  Serial.println("Starting BLE work!");
  bleKeyboard.begin();

  pinMode(32,INPUT);    
  pinMode(33,INPUT);   
}



void loop() {
  if(bleKeyboard.isConnected()) {    
    if(digitalRead(32) == HIGH){    
     
      bleKeyboard.write(KEY_ESC);   
      delay(200);
    }
    if(digitalRead(33) == HIGH){   
      bleKeyboard.write(KEY_RETURN);    
      delay(200);
    }
  }
}