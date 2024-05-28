#include "XmlService.h"

Weather XmlService::getWeather(std::string s)
{
    pugi::xml_document doc;
    pugi::xml_parse_result result = doc.load_file(s.c_str());
    if (!result)
        throw std::exception("error");
    pugi::xml_node node = doc.child("current");
    std::string city = node.child("city").attribute("name").as_string();
    double lon = node.child("city").child("coord").attribute("lon").as_double();
    double lat = node.child("city").child("coord").attribute("lat").as_double();
    double temperature = node.child("temperature").attribute("value").as_double();
    std::string weather = node.child("weather").attribute("value").as_string();
    double windSpeed = node.child("wind").attribute("speed").as_double();
    int clouds = node.child("clouds").attribute("all").as_int();
    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}
