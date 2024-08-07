#ifndef WEATHERREPORTGENERATOR_h
#define WEATHERREPORTGENERATOR_h
#include <string>
#include "IWeatherSensor.h"

std::string Report(const IWeatherSensor& sensor);

#endif 
