//
// Created by STRANGE on 29.04.2024.
//

#ifndef WEATHERSERVICE_XMLSERVICE_H
#define WEATHERSERVICE_XMLSERVICE_H


#include "Service.h"
#include "pugixml-1.14/src/pugixml.hpp"


class XmlService : public Service{
public:
    virtual Weather getWeather(std::string s) override;
    virtual ~XmlService(){};
};


#endif //WEATHERSERVICE_XMLSERVICE_H
