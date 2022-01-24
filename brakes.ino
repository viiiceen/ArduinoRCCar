
float brakes(float getProp) {
  //brakes of the car
  if (getProp >= 0) {
    getProp = 0;
  }
  brake = map(getProp, 0, -100, 160, 110);
  return brake;
}
