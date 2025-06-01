#include <SoftwareSerial.h>

SoftwareSerial mySerial(3, 2); // RX, TX
#define led1 10
#define led2 11
#define led3 12
#define led4 13

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  
  mySerial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() { // run over and over
  if (mySerial.available()) {
    char x= mySerial.read();
     if(x=='a') digitalWrite(led1, 1);
    else if(x=='b') digitalWrite(led1, 0);
    else if(x=='c') digitalWrite(led2, 1);
    else if(x=='d') digitalWrite(led2, 0);
    else if(x=='e') digitalWrite(led3, 1);
    else if(x=='f') digitalWrite(led3, 0);
    else if(x=='g') digitalWrite(led4, 1);
    else if(x=='h') digitalWrite(led4, 0);
    Serial.write(mySerial.read());
  }
  if (Serial.available()) {
    mySerial.write(Serial.read());
  }
}
