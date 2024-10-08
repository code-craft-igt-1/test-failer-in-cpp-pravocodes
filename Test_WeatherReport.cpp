#include <cassert>
#include <string>
#include <iostream>
#include "Test_WeatherReport.h"
#include "WeatherReportGenerator.h"

using std::string;


class SensorStub : public WeatherSpace::IWeatherSensor {
 public:
    int Humidity() const override {
        return 72;
    }

    int Precipitation() const override {
        return 70;
    }

    double TemperatureInC() const override {
        return 26;
    }

    int WindSpeedKMPH() const override {
        return 52;
    }
};


class HighPrecipitationLowWindStub : public WeatherSpace::IWeatherSensor {
 public:
    double TemperatureInC() const override {
        return 26;
    }

    int Precipitation() const override {
        return 70;  // High precipitation
    }

    int Humidity() const override {
        return 72;
    }

    int WindSpeedKMPH() const override {
        return 40;  // Low wind speed
    }
};

void TestRainy() {
    SensorStub sensor;
    string report = Report(sensor);
    std::cout << "TestRainy: " << report << std::endl;
    assert(report == "Heavy rain");
}


void TestHighPrecipitationAndLowWindspeed() {
    HighPrecipitationLowWindStub sensor;
    string report = Report(sensor);
    std::cout << "TestHighPrecipitationAndLowWindspeed: " << report << std::endl;
    assert(report == "Heavy rain");
}

