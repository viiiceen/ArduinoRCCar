#include "Arduino.h"

#include "RCSensor.h"

void RCSensor::SetRCPin(int value) {
  RCPin = value;
}

void RCSensor::SetMinData(int value) {
  minData = value;
}

void RCSensor::SetMaxData(int value) {
  maxData = value;
}

void RCSensor::SetMinValue(int value) {
  minValue = value;
}

void RCSensor::SetMaxValue(int value) {
  maxValue = value;
}

void RCSensor::SetAverageValue(int value) {
  averageValue = value;
}

void RCSensor::SetTopAverageValue(int value) {
  topAverageValue = value;
}

void RCSensor::SetBottomAverageValue(int value) {
  bottomAverageValue = value;
}

void RCSensor::SetBottomMinValue(int value) {
  bottomMinValue = value;
}

void RCSensor::SetTopMinValue(int value) {
  topMinValue = value;
}

void RCSensor::SetBottomMaxValue(int value) {
  bottomMaxValue = value;
}

void RCSensor::SetTopMaxValue(int value) {
  topMaxValue = value;
}


float RCSensor::GetCleanData() {

  data = pulseIn(RCPin, HIGH);

  if (data >= minData && data <= maxData) {
    cleanData = data;
  }

  if (cleanData >= bottomAverageValue && cleanData <= topAverageValue) {
    cleanData = averageValue;
  } else if (cleanData >= bottomMinValue && cleanData <= topMinValue) {
    cleanData = minValue;
  } else if (cleanData >= bottomMaxValue && cleanData <= topMaxValue) {
    cleanData = maxValue;
  }

  if (cleanData >= averageValue && cleanData <= maxValue) {

    cleanData = ((cleanData - averageValue) / (maxValue - averageValue)) * 100;

  } else if ( cleanData <= averageValue && cleanData >= minValue) {

    cleanData = ((cleanData - averageValue) / (averageValue - minValue)) * 100;
  }
  return cleanData;
}
