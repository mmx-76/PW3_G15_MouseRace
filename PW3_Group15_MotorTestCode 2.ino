int motorPin = 8; //change the pin here

void setup() {
  // jap200
  // initialise communication at 9600 baud rate
  Serial.begin(9600);
  
  pinMode(motorPin, OUTPUT);

}

void loop() {

  //----------------
  // SET TEST
  //----------------

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
