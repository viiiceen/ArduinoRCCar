#ifndef BatterySensor_h
#define BatterySensor_h

#include "Arduino.h"

class BatterySensor {
  private:
    float minVoltage, maxVoltage, Vin, Vout, batLevel,r1,r2;
    int pin, topLimit, bottomLimit;

  public:
    void SetMinBattery(float minimum);

    void SetMaxBattery(float maximum);

    void SetTopLimit(float limit);

    void SetBottomLimit(float limit);

    void SetResistances(float res1, float res2);

    void SetPin(int userPin) ;

    float getBattery();

};
#endif
