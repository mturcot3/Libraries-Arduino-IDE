#include "ACS712.h"

/*
  This example shows how to set zero point of your sensor
*/

// We have 30 amps version sensor connected to A1 pin of arduino
// Replace with your version if necessary
ACS712 sensor(ACS712_30A, A1);

void setup() {
  Serial.begin(9600);

  // Value obtained using sensor.calibrate() when no current flows through the sensor
  sensor.setZeroPoint(438);
}

void loop() {}
