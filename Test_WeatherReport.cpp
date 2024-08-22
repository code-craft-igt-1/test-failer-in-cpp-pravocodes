#include <cassert>
#include <string>
#include <iostream>
#include "SensorStub.h"
#include "WeatherReportGenerator.h"
#include "Test_WeatherReport.h"

void TestRainy() {
    SensorStub sensor(26, 70, 72, 52);
    std::string report = Report(sensor);
    std::cout << report << std::endl;
    assert(report.find("rain") != std::string::npos)
}

void TestHighPrecipitationAndLowWindspeed() {
    // This instance of stub needs to be different-
    // to give high precipitation (>60) and low wind-speed (<50)
    SensorStub sensor(65, 70, 28.5, 45);

    // strengthen the assert to expose the bug
    // (function returns Sunny day, it should predict rain)
    std::string report = Report(sensor);
    assert(report == "Partly cloudy");
}