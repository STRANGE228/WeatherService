//
// Created by STRANGE on 29.04.2024.
//

#ifndef WEATHERSERVICE_JSONSERVICE_H
#define WEATHERSERVICE_JSONSERVICE_H


#include "Service.h"

class JsonService : public Service {
    virtual Weather getWeather(std::string s) override;
    virtual ~JsonService() {};
};


#endif //WEATHERSERVICE_JSONSERVICE_H
