void setBattery() {
  Bat1.SetMinBattery(minVoltage);
  Bat1.SetMaxBattery(maxVoltage);
  Bat1.SetTopLimit(batTopLimit);
  Bat1.SetBottomLimit(batBottomLimit);
  Bat1.SetResistances(r1, r2);
  Bat1.SetPin(batPin);

}

void setPropulsion() {
  Prop.SetRCPin(propPin);
  Prop.SetMinData(propMinData);
  Prop.SetMaxData(propMaxData);
  Prop.SetMinValue(propMinValue);
  Prop.SetMaxValue(propMaxValue);
  Prop.SetAverageValue(propAverageValue);
  Prop.SetTopAverageValue(propTopAverageValue);
  Prop.SetBottomAverageValue(propBottomAverageValue);
  Prop.SetBottomMinValue(propMinData);
  Prop.SetTopMinValue(propMinValue);
  Prop.SetBottomMaxValue(propMaxValue);
  Prop.SetTopMaxValue(propMaxData);


}

void setTurning() {
  Turn.SetRCPin(turnPin);
  Turn.SetMinData(turnMinData);
  Turn.SetMaxData(turnMaxData);
  Turn.SetMinValue(turnMinValue);
  Turn.SetMaxValue(turnMaxValue);
  Turn.SetAverageValue(turnAverageValue);
  Turn.SetTopAverageValue(turnTopAverageValue);
  Turn.SetBottomAverageValue(turnBottomAverageValue);
  Turn.SetBottomMinValue(turnMinData);
  Turn.SetTopMinValue(turnMinValue);
  Turn.SetBottomMaxValue(turnMaxValue);
  Turn.SetTopMaxValue(turnMaxData);

}
