// pin setup, inductors
const int INDUCTOR_LEFT_PIN  = A0;
const int INDUCTOR_RIGHT_PIN = A1;

// pin setup, button
const int BUTTON_PIN = 2;

// variables to store readings
int inductorLeftValue  = 0;
int inductorRightValue = 0;

void setup() {

  Serial.begin(115200);

  // set analogue pins as inputs
  pinMode(INDUCTOR_LEFT_PIN, INPUT);
  pinMode(INDUCTOR_RIGHT_PIN, INPUT);

  // button sits at 1, when pressed becomes 0
  pinMode(BUTTON_PIN, INPUT_PULLUP);



void loop() {

  // reading the left and right pin
  inductorLeftValue  = analogRead(INDUCTOR_LEFT_PIN);
  inductorRightValue = analogRead(INDUCTOR_RIGHT_PIN);

  // printing the inductor pins
  Serial.print("Left: ");
  Serial.print(inductorLeftValue);

  Serial.print("  Right: ");
  Serial.println(inductorRightValue);

  delay(10);

}