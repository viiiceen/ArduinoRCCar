//includes
#include <Servo.h>
#include "Header.h"



void setup() {
  //Screen
  Serial.begin(9600);

  //RC
  pinMode(turnPin, INPUT);
  pinMode(propPin, INPUT);
  pinMode(lightPin, INPUT);
  pinMode(batPin, INPUT);

  //Lights
  setLights();        

  //engines
  setEngines();

  setBattery();

  setPropulsion();

  setTurning();

}


void loop() {
  getBat = Bat1.getBattery();

//  if (getBat < 10) {
//    setStop();
////
//  } else {

    getProp = -Prop.GetCleanData();  

    getTurn = Turn.GetCleanData();

//    //Main engine
    getThrottle = power(getProp);
    mainEngine.write(getThrottle);
//
//    //Turning
    getWheel = turn(getTurn);
    wheelEngine.write(getWheel);
//    
//    
    //Braking
    getBrake = brakes(getProp);
    brakeEngine.write(getBrake);
//  }
  //Read brake status
  if (getBrake == 110) {
    boolBrake = true;

  } else {
    boolBrake = false;
  }
  getLight = lights(boolBrake);

  //Show data
  reads(getTurn, getProp, getThrottle, getWheel, getBrake, boolBrake, getBat, getLight);

  //}
}
