//
// Created by STRANGE on 29.04.2024.
//

#ifndef WEATHERSERVICE_SERVICE_H
#define WEATHERSERVICE_SERVICE_H

#include <string>
#include "Weather.h"

class Service {
public:
    virtual Weather getWeather(std::string s) = 0;
    virtual ~Service() = 0;
};

#endif //WEATHERSERVICE_SERVICE_H
