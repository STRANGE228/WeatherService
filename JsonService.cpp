//
// Created by STRANGE on 29.04.2024.
//

#include <fstream>
#include "JsonService.h"
#include "json.hpp"

using nlohmann::json;


Weather JsonService::getWeather(std::string s) {
    std::ifstream fin(s);
    if (!fin)
        throw std::runtime_error(std::string("Failed: ") + s);

    json j = json::parse(fin);
    std::string city = j["name"];
    double lon = j["coord"]["lon"];
    double lat = j["coord"]["lat"];
    double temperature = j["main"]["temp"];
    std::string weather = j["weather"][0]["description"];
    double windSpeed = j["wind"]["speed"];
    int clouds = j["clouds"]["all"];
    Weather w = Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
    return w;
}