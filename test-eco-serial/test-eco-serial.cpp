#include <mbq.h>
#include <PingIRReceiver.h>
#include <Arduino_FreeRTOS.h>

void setup()
{
	initBoard();
		float var = 0;
		while(true)
		{
			var = pingMeasureCM(D15);
			if((var<10))
			{
				USB.println("Close!");
			}
			else
			{
			}
			delay(1000);
		}
}

void loop()
{
}
