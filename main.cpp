#include <iostream>
#include <windows.h>
#include "XmlService.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);
    XmlService xs;
    Weather w = xs.getWeather("weather.xml");
    std::cout << w;
    return 0;
}
