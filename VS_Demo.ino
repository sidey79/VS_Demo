/*
    Name:       VS_Demo.ino
    Created:	11.10.2019 21:16:58
    Author:     Sidey
 */
#include <RunningAverage.h>

#if defined(ESP8266)


RunningAverage avgCounter(5);
void setup()
{
	Serial.begin(115200);
	while (!Serial) {
		delay(50);
	}
	delay(5000);
	avgCounter.addValue(1);
	avgCounter.addValue(2);
	Serial.println("ESP8266");
	Serial.println(avgCounter.getAverage());
	Serial.println(avgCounter.getVersion());
}

#endif
void loop()
{
	yield();
}
