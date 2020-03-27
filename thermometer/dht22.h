#pragma once

class dht22
{
private:
	float temperature = {};
	float humidity = {};

public:
	dht22();

	~dht22();

	int readDHT22();
	float getTemperature();
	float getHumidity();

};

