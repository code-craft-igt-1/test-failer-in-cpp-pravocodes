#ifndef TESTTSHIRT_H
#define TESTTSHIRT_H


#include <string>

namespace WeatherSpace {

class IWeatherSensor {
 public:
    virtual double TemperatureInC() const = 0;
    virtual int Precipitation() const = 0;
    virtual int Humidity() const = 0;
    virtual int WindSpeedKMPH() const = 0;
};
}
void TestRainy();
void TestHighPrecipitationAndLowWindspeed();

#endif