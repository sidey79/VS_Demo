/*
    Name:       VS_Demo.ino
    Created:	11.10.2019 21:16:58
    Author:     Sidey
 */

#if defined(ESP32)

#include <RunningAverage.h>

RunningAverage avgCounter(5);
void setup()
{
	Serial.begin(115200);
	while (!Serial) {
		delay(50);
	}
	delay(5000);
	avgCounter.addValue(3);
	avgCounter.addValue(4);
	Serial.println("ESP32");
	Serial.println(avgCounter.getAverage());
	Serial.println(avgCounter.getVersion());
}

void loop()
{
	yield();
}
#endif