#include <Wire.h>

// MMA8451 I2C address
#define MMA8451_ADDR 0x1D   // could also be 0x1C depending on wiring

// MMA8451 registers
#define REG_CTRL1 0x2A
#define REG_X_MSB 0x01




// pin setup, inductors
const int INDUCTOR_LEFT_PIN  = A0;
const int INDUCTOR_RIGHT_PIN = A1;

// pin setup, button
const int BUTTON_PIN = 2;

// pin setup, accelerometer
const int ACCELEROMETER_SDA_PIN = A4; // data
const int ACCELEROMETER_SCL_PIN = A5; // clock



// variables to store readings
int inductorLeftValue  = 0;
int inductorRightValue = 0;

void initAccelerometer() {

  // put device in standby (required before changing settings)
  Wire.beginTransmission(MMA8451_ADDR);
  Wire.write(REG_CTRL1); // control mode
  Wire.write(0x00); // standby mode
  Wire.endTransmission();

  // activate sensor (100 Hz default)
  Wire.beginTransmission(MMA8451_ADDR);
  Wire.write(REG_CTRL1);
  Wire.write(0x01); // active mode
  Wire.endTransmission();
}

void setup() {

  Serial.begin(115200);

  // set analogue pins as inputs
  pinMode(INDUCTOR_LEFT_PIN, INPUT);
  pinMode(INDUCTOR_RIGHT_PIN, INPUT);

  // button sits at 1, when pressed becomes 0
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  // initialize the accelerometer
  Wire.begin();        // start I2C
  initAccelerometer(); // initialise MMA8451

}


void loop() {

  // reading the left and right pin
  inductorLeftValue  = analogRead(INDUCTOR_LEFT_PIN);
  inductorRightValue = analogRead(INDUCTOR_RIGHT_PIN);


}