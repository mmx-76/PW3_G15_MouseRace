int motorPin = 8; //change the pin here

void setup() {
  // jap200
  // initialise communication at 9600 baud rate
  // Initialises serial communication and configures motor control pin before test execution
  // Starts serial monitor output for debugging and observing motor behaviour
  Serial.begin(9600);
  // Sets motor pin as output so voltage can be driven to the motor interface
  pinMode(motorPin, OUTPUT);

}

void loop() {

  //----------------
  // SET TEST
  //----------------
// Drives motor pin high to apply voltage and test motor activation
  digitalWrite(motorPin, HIGH);


  //----------------
  // DUTY CYCLE TEST
  // (remove or comment the 'set test' section before running this)
  //----------------

  // analogWrite(motorPin, 50);
  // delay(1000);

  // analogWrite(motorPin, 100);
  // delay(1000);

  // analogWrite(motorPin, 150);
  // delay(1000);

  // analogWrite(motorPin, 200);
  // delay(1000);

  // analogWrite(motorPin, 250);
  // delay(1000);

}
