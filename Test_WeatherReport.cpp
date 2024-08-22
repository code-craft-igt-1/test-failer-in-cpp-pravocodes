#include <cassert>
#include <string>
#include <iostream>
#include "SensorStub.h"
#include "WeatherReportGenerator.h"
#include "Test_WeatherReport.h"

void TestRainy() {
    SensorStub sensor;
    string report = Report(sensor);
    std::cout << report << std::endl;
    assert(report.find("rain") != string::npos);
}

void TestHighPrecipitationAndLowWindspeed() {
    // This instance of stub needs to be different-
    // to give high precipitation (>60) and low wind-speed (<50)
    SensorStubHighPrecipitationLowWindSpeed sensor;

    // strengthen the assert to expose the bug
    // (function returns Sunny day, it should predict rain)
    string report = Report(sensor);
    assert(report.find("rain") != string::npos);
}
