#ifndef mbq_h
#define mbq_h


#include <Arduino.h>
#include <pins_arduino.h>
#include <stdlib.h>
#include <miniBloq.h>
#include <board.h>
#include <pitches.h>
#include <toneDelay.h>
#include <DCMotor.h>
#include <Servo.h>
#include <IRRemote.h>
#include <IRremoteRemoteControlCodes.h>
#include <HCSR0x.h>
#include <Ping.h>
#include <IRRanger.h>


extern DCMotor motor0;
extern DCMotor motor1;
extern Servo servoS0;
extern Servo servoS1;
extern Servo servoS2;
extern Servo servoS3;
extern Servo servoS4;
extern Servo servoS5;
extern IRrecv irReceiver;
extern HCSRSensor hcsr;
extern PingSensor ping;
extern IRRanger irRanger20to150;
extern IRRanger irRanger10to80;

#endif
