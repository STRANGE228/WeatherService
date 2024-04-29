//
// Created by STRANGE on 29.04.2024.
//

#include "Weather.h"

Weather::Weather(std::string city, double lon, double lat, double temperature,
        std::string weather, double windSpeed, int clouds){
    this->city= city;
    this->lon = lon;
    this->lat= lat;
    this->temperature = temperature;
    this->weather = weather;
    this->windSpeed = windSpeed;
    this->clouds = clouds;
}

std::string Weather::to_string() {
    std::string text = "Weather in " + city + "(" + std::to_string(lon) + " " + std::to_string(lat) + "):\n"
                       + "temperature: " + std::to_string(temperature) + "\nweather: " + weather + "\nwind speed: "
                       + std::to_string(windSpeed) + "\nclouds: " + std::to_string(clouds) + "\n";
    return text;
}