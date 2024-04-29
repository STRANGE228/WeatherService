cmake_minimum_required(VERSION 3.26)
project(WeatherService)

set(CMAKE_CXX_STANDARD 17)

add_executable(WeatherService main.cpp
        Weather.cpp
        Weather.h
        Service.h
        JsonService.cpp
        JsonService.h
        XmlService.cpp
        XmlService.h
        pugixml-1.14/src/pugixml.hpp
        pugixml-1.14/src/pugixml.cpp
)

