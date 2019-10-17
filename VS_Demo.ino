/*
    Name:       VS_Demo.ino
    Created:	17.10.2019 21:12:58 
    Author:     Sidey
*/

// #include <Arduino.h>		// meistens in VScode und PlatformIO nötig
#include <RunningAverage.h>

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
	Serial.println(avgCounter.getAverage());
	Serial.println(avgCounter.getVersion());

}

void loop()
{
	yield();
}
