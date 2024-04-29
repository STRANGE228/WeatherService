#include <iostream>
#include "JsonService.h"
#include "XmlService.h"
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
//    setlocale(LC_ALL, "Russian");
    JsonService js;
    Weather w = js.getWeather("weather.json");
    std::cout << w;
    XmlService xs;
    Weather w1 = xs.getWeather("weather.xml");
    std::cout << w1;
    return 0;
}
