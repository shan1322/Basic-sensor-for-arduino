#include<SoftwareSerial.h>


int sensorValue = 0; // variable to store the value coming from the sensor
 // Output pin for LED



void setup() {

// declare the ledPin and buzzer as an OUTPUT:

pinMode(9, OUTPUT);


Serial.begin(9600);

}

void loop()

{

sensorValue = analogRead(A0);

Serial.println(sensorValue);

if (sensorValue < 100)

{

Serial.println("Fire Detected");

Serial.println("LED on");

digitalWrite(9,HIGH);

delay(1000);

}

digitalWrite(9,LOW);


delay(sensorValue);

}
