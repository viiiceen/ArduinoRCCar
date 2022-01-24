void reads(float ch0Dep, float ch1Dep, float testThrottle, float testWheel, float testBrake, bool boolBrake, float testBat, int lightSensor) {
  //Screen

  //Turning
 Serial.print("Turning value =");
  Serial.print(ch0Dep);
// 
//  //Propulsion
 Serial.print("Propulsion value =");
 Serial.println(ch1Dep);

  //Throttle
  Serial.print("Throttle value =");
  Serial.println(testThrottle);

  //wheel
  Serial.print("Wheel value =");
  Serial.println(testWheel);

  //brake
  Serial.print("Brake value =");
  Serial.println(testBrake);
  if (boolBrake == true) {
    Serial.println("Brake is on");
  } else {
    Serial.println("Brake is off");
  }

  //Battery
  Serial.print("Battery level =");
  Serial.println(testBat);

  //Lights
  Serial.print("Light level =");
  Serial.println(lightSensor);

  //Space
  Serial.println(" ");
}
