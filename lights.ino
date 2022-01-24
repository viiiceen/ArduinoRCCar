int lights(bool boolBrake) {
  //control of the lights
  lightSensor = analogRead(lightPin);

  if (lightSensor >= MIN_LIGHT) {
    counterLight++;
  } else {
    counterLight--;
  }

  if (counterLight > MAXCOUNTERLIGHT) {
    counterLight = MAXCOUNTERLIGHT;
  } else if (counterLight < -MAXCOUNTERLIGHT) {
    counterLight = (-MAXCOUNTERLIGHT);
  }

  if (counterLight == 50) {
    frontLightsOn();
    backLightsOn();
  } else if (counterLight == (-50)) {
    frontLightsOff();
    backLightsOff();
  }

  if (boolBrake) {
    backLightsOn();
  }
  return lightSensor;
}


void frontLightsOn() {
  digitalWrite(FRONTLED1, HIGH);
  digitalWrite(FRONTLED2, HIGH);
  digitalWrite(FRONTLED3, HIGH);
  digitalWrite(FRONTLED4, HIGH);
}
void frontLightsOff() {
  digitalWrite(FRONTLED1, LOW);
  digitalWrite(FRONTLED2, LOW);
  digitalWrite(FRONTLED3, LOW);
  digitalWrite(FRONTLED4, LOW);
}
void backLightsOn() {
  digitalWrite(BACKLED1, HIGH);
  digitalWrite(BACKLED2, HIGH);
  digitalWrite(BACKLED3, HIGH);
  digitalWrite(BACKLED4, HIGH);
}
void backLightsOff() {
  digitalWrite(BACKLED1, LOW);
  digitalWrite(BACKLED2, LOW);
  digitalWrite(BACKLED3, LOW);
  digitalWrite(BACKLED4, LOW);
}

void setLights() {
  pinMode(FRONTLED1, OUTPUT);
  pinMode(FRONTLED2, OUTPUT);
  pinMode(FRONTLED3, OUTPUT);
  pinMode(FRONTLED4, OUTPUT);

  pinMode(BACKLED1, OUTPUT);
  pinMode(BACKLED2, OUTPUT);
  pinMode(BACKLED3, OUTPUT);
  pinMode(BACKLED4, OUTPUT);

}
