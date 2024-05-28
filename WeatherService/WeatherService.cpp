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
    XmlService xs;
    Weather w = xs.getWeather("weather.xml");
    w.printWeather();
    return 0;
}