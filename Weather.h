//
// Created by STRANGE on 29.04.2024.
//

#ifndef WEATHERSERVICE_WEATHER_H
#define WEATHERSERVICE_WEATHER_H


#include <string>

class Weather {
private:
    std::string city;
    double lon;
    double lat;
    double temperature;
    std::string weather;
    double windSpeed;
    int clouds;
public:
    Weather(std::string city, double lon, double lat, double temperature,
            std::string weather, double windSpeed, int clouds);
    ~Weather(){};

    std::string to_string();
    friend std::ostream &operator<<(std::ostream &os, Weather w) {
        return os << w.to_string();
    }
};





#endif //WEATHERSERVICE_WEATHER_H
