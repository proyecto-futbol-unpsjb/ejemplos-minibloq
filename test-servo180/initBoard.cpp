#include <mbq.h>


DCMotor motor0(27, 23, 24);
DCMotor motor1(28, 25, 26);
Servo servoS0;
Servo servoS1;
Servo servoS2;
Servo servoS3;
Servo servoS4;
Servo servoS5;
IRrecv irReceiver(D14);
HCSRSensor hcsr(0);
PingSensor ping(0);
IRRanger irRanger20to150(1, IRRanger::range20to150cm);
IRRanger irRanger10to80(1, IRRanger::range10to80cm);


void initBoard()
{
	Serial.begin(115200);
	Serial1.begin(9600);

	randomSeed(analogRead(0));

	//This is for the Multiplo robots:
	//setPin() does not attach the servo (so the pin can be used by other library if the servo is not used).
 servoS0.setPin(14);
 servoS1.setPin(15);
 servoS2.setPin(16);
 servoS3.setPin(17);
 servoS4.setPin(18);
 servoS5.setPin(19);
}
