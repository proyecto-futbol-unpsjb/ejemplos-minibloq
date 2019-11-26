#include <mbq.h>
#include <PingIRReceiver.h>
#include <Arduino_FreeRTOS.h>

void setup()
{
	initBoard();
		while(true)
		{
			delay(3000);
			servoS0.attachAndWrite(0);
			delay(1000);
			servoS0.attachAndWrite(160);
			delay(1000);
			servoS0.attachAndWrite(180);
			delay(1000);
		}
}

void loop()
{
}
