#include "SensorStub.h"

SensorStub::SensorStub(int temp, int precip, int humidity, int windSpeed) {
    this->temperature = temp;
    this->precipitation = precip;
    this->humidity = humidity;
    this->windSpeed = windSpeed;
}

int SensorStub::Humidity() const {
    return humidity;
}

int SensorStub::Precipitation() const {
    return precipitation;
}

double SensorStub::TemperatureInC() const {
    return temperature;
}

int SensorStub::WindSpeedKMPH() const {
    return windSpeed;
}
