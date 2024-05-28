#include <iostream>
#include "Weather.h"
#include "Service.h"
#include "JsonService.h"

int main()
{
    setlocale(LC_ALL, "ru");
    JsonService js;
    Weather w = js.getWeather("weather.json");
    w.printWeather();
    return 0;
}