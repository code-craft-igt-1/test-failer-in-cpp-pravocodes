#include "SensorStub.h"

SensorStub::SensorStub(int temperature, int precip, int humidity, int windSpeed)
: temperature(temperature), precipitation(precip), humidity(humidity), windSpeed(windSpeed) {
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
