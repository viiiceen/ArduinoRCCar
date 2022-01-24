float power(float getProp) {
  //move the engine
  if (getProp <= 0) {
    getProp = 0;
  }

  throttle = map(getProp, 0, 100, 90, 10);
  return throttle;
}

float turn(float getTurn) {
  //turn the wheels
  wheel = map(getTurn, -100, 100, 70, 180);
  return wheel;

}

void setEngines() {
  mainEngine.attach(MAIN_ENGINE);
  wheelEngine.attach(WHEEL_ENGINE);
  brakeEngine.attach(BRAKE_ENGINE);
}
