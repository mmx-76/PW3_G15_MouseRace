int leftSensorPin = A0; // change the pin no. here
int rightSensorPin = A1;

void setup() {
  // jap200
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

  
  //----------------
  // SERIAL PLOTTER
  // (you have to comment out the serial monitor code if you wish to use the serial plotter)
  //----------------

  // Serial.println(leftSensor);
  // Serial.println(rightSensor);
  // Serial.println(sensorDifference);


  delay(200);   // delay by 200ms
  
}
