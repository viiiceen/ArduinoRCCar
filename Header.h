
#include <Servo.h>
#include "Arduino.h"
#include "BatterySensor.h"
#include "RCSensor.h"

//pins
const int batPin = A0;

const int lightPin = A1;

const int MAIN_ENGINE = 2;
const int WHEEL_ENGINE = 3;
const int BRAKE_ENGINE = 4;

const int turnPin = 5; //ch0
const int propPin = 6; //CH1

const int FRONTLED1 = 10;
const int FRONTLED2 = 11;
const int FRONTLED3 = 12;
const int FRONTLED4 = 13;

const int BACKLED1 = 22;
const int BACKLED2 = 23;
const int BACKLED3 = 24;
const int BACKLED4 = 25;

//Classes
Servo mainEngine;
Servo brakeEngine;
Servo wheelEngine;

BatterySensor Bat1;
RCSensor Prop;
RCSensor Turn;


// turning parameters
const int turnMinData = 1100;
const int turnMaxData = 2000;
const int turnBottomAverageValue = 1470;
const int turnTopAverageValue = 1530;
const int turnMinValue = 1220;
const int turnAverageValue = 1500;
const int turnMaxValue = 1920;

float getTurn;

//propulsion parameters
const int propMinData = 1090;
const int propMaxData = 2000;
const int propBottomAverageValue = 1630;
const int propTopAverageValue = 1725;
const int propMinValue = 1150;
const int propAverageValue = 1705;
const int propMaxValue = 1970;

float getProp;


//battery parameters
const float maxVoltage = 4.20;
const float minVoltage = 3.5;

const int batTopLimit = 7;
const int batBottomLimit = 0;

float getBat;

const float r1 = 1;
const float r2 = 0.1;




//buttons
float throttle;
float getThrottle;

float wheel;
float getWheel;

float brake;
float getBrake;
bool boolBrake;

//lights
float lightSensor;
int counterLight;
int getLight;
const int MIN_LIGHT = 600;
const int MAXCOUNTERLIGHT = 50;


//Calls

float power(float readProp);

float turn(float readTurn);

float brakes(float readProp);

int lights(bool boolBrake);

void reads(float ch0Dep, float ch1Dep, float testThrottle, float testWheel, float testBrake, bool boolBrake, float testBat, int lightSensor);

void frontLightsOn();

void frontLightsOff();

void backLightsOn();

void backLightsOff();

void setLights();

void setEngines();

void setStop();

void setBattery(); 

void setPropulsion();

void setTurning();
