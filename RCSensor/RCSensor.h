#ifndef RCSensor_h
#define RCSensor_h

#include "Arduino.h"

class RCSensor {
  private:
    int data, minData, maxData, validData, averageValue, bottomAverageValue, topAverageValue,
          bottomMinValue, topMinValue, bottomMaxValue, topMaxValue, cleanData, minValue, maxValue;

    int RCPin;
  public:

    void SetRCPin(int value);

    void SetMinData(int value);

    void SetMaxData(int value);

     void SetMinValue(int value);

    void SetMaxValue(int value);

    void SetAverageValue(int value);

    void SetTopAverageValue(int value);

    void SetBottomAverageValue(int value);

    void SetBottomMinValue(int value);

    void SetTopMinValue(int value);

    void SetBottomMaxValue(int value);

    void SetTopMaxValue(int value);

    float GetCleanData();

};
#endif
