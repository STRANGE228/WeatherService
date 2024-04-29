#include <iostream>
#include "JsonService.h"
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
//    setlocale(LC_ALL, "Russian");
    JsonService js;
    Weather w = js.getWeather("weather.json");
    std::cout << w;
    return 0;
}
