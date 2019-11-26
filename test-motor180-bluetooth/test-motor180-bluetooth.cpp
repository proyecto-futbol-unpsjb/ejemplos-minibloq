#include <mbq.h>
#include <PingIRReceiver.h>
#include <Arduino_FreeRTOS.h>

void setup()
{
	initBoard();
		float var = 0;
		while(true)
		{
			var = Bluetooth.read();
			if(((int)(var)==(int)(97)))
			{
				motor0.setPower(30);
				motor1.setPower(30);
			}
			else
			{
			}
			if(((int)(var)==(int)(98)))
			{
				motor0.setPower(-(30));
				motor1.setPower(-(30));
			}
			else
			{
			}
			if(((int)(var)==(int)(99)))
			{
				motor0.setPower(0);
				motor1.setPower(10);
			}
			else
			{
			}
			if(((int)(var)==(int)(100)))
			{
				motor0.setPower(10);
				motor1.setPower(0);
			}
			else
			{
			}
			if(((int)(var)==(int)(101)))
			{
				motor0.setPower(0);
				motor1.setPower(0);
			}
			else
			{
			}
			if(((int)(var)==(int)(102)))
			{
				servo1.attachAndWrite(180);
				delay(100);
				servo1.attachAndWrite(60);
				delay(1000);
				servo1.attachAndWrite(0);
			}
			else
			{
			}
		}
}

void loop()
{
}
