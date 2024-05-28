#include <iostream>
#include "Weather.h"
#include "Service.h"
#include "JsonService.h"
#include "XmlService.h"
#include "pugixml.hpp"
#include "pugiconfig.hpp"
#include "pugixml.cpp"

int main()
{
    setlocale(LC_ALL, "ru");
    JsonService js;
    Weather w1 = js.getWeather("weather.json");
    w1.printWeather();

    XmlService xs;
    Weather w2 = xs.getWeather("weather.xml");
    w2.printWeather();

    return 0;
}