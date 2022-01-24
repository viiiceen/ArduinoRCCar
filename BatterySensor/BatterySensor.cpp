#include "Arduino.h"

#include "BatterySensor.h"


void BatterySensor::SetMinBattery(float minimum) {
  minVoltage = minimum;
}

void BatterySensor::SetMaxBattery(float maximum) {
  maxVoltage = maximum;
}

void BatterySensor::SetTopLimit(float limit) {
  topLimit = limit;
}

void BatterySensor::SetBottomLimit(float limit) {
  bottomLimit = limit;
}

void BatterySensor::SetResistances(float res1, float res2) {
  r1 = res1;
  r2 = res2;
}

void BatterySensor::SetPin(int userPin) {
  pin = userPin;
}

float BatterySensor::getBattery() {
  Vout = (analogRead(pin) * 4.98) / 1023.0;
  Vin = Vout / (r2 / (r1 + r2));

  if (Vin >= (bottomLimit) && Vin <= topLimit) {
    batLevel = ((Vin - minVoltage) / (maxVoltage - minVoltage)) * 100;
  }
  if (batLevel < 0) {
    batLevel = 0;
  } else if (batLevel > 100) {
    batLevel = 100;
  }
  return batLevel;
}
