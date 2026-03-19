int leftSensorPin = D3; // change the pin no. here
int rightSensorPin = D4;

// hh2212 MI549 JBC64 MM3772 SAK225 TC2308

void setup() {
  // initialise communication at 9600 baud rate
  Serial.begin(9600);

}

void loop() {

  // reading the peak values
  int leftSensor = analogRead(leftSensorPin);
  int rightSensor = analogRead(rightSensorPin);

  // calculating the difference between the two
  int sensorDifference = leftSensor - rightSensor;


  //----------------
  // SERIAL MONITOR
  //----------------

  Serial.print("Left Sensor: ");
  Serial.print(leftSensor);
  Serial.print(".        Right Sensor: ");
  Serial.print(rightSensor);
  Serial.print(".        Difference: ");
  Serial.print(sensorDifference);
  Serial.println(".");


  delay(200);   // delay by 200ms
  
}
