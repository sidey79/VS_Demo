/*
    Name:       VS_Demo.ino
    Created:	11.10.2019 21:16:58
    Author:     Sidey
*/


#include <RunningAverage.h>

RunningAverage avgCounter(5);
void setup()
{
	avgCounter.addValue(1);
	avgCounter.addValue(2);
	Serial.println(avgCounter.getAverage());
	Serial.println(avgCounter.getVersion());

}

void loop()
{
	yield();
}
