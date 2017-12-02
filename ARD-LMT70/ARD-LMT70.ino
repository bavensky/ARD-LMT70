/*
  LMT70 Analog Temperature Sensor Example Code
  ClosedCube LMT70[Analog] Humidity and Temperature Sensor Breakout 

  This is standalone Arduino example (no external library is required)

  Initial Date: 02-Dec-2017

  CMMC License

  Hardware connections for Arduino Uno:
   VDD to 5V DC
   T to A0
   GND to common groud

*/

int sensorPin = A0;  
int sensorValue = 0;
float t  = 0.0;
float calmV;
float calT;

void setup() {
  // declare the ledPin as an OUTPUT:
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  calmV = (sensorValue * 0.0049) * 1000;  //  convert analog to mV
  calT = map(calV, 1373.576, 304.756, -55, 150);  // map value mV to Celsius 

  Serial.print("analog : ");
  Serial.print(sensorValue);
  Serial.print(" mV : ");
  Serial.print(calmV);
  Serial.print(" T : ");
  Serial.println(calT);
  delay(200);
}
