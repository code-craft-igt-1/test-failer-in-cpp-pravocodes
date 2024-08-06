#ifndef SENSORSTUB_H
#define SENSORSTUB_H

#include "IWeatherSensor.h"

class SensorStub : public IWeatherSensor {
private:
    int temperature;
    int precipitation;
    int humidity;
    int windSpeed;

public:
    SensorStub(int temp, int precip, int humidity, int windSpeed);
    int Humidity() const override;
    int Precipitation() const override;
    double TemperatureInC() const override;
    int WindSpeedKMPH() const override;
};

#endif
