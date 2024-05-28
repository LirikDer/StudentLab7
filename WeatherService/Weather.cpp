#include "Weather.h"

Weather::Weather(std::string city, double lon, double lat, double temperature, std::string weather, double windSpeed, int clouds)
{
	this->city = city;
	this->lon = lon;
	this->lat = lat;
	this->temperature = temperature;
	this->weather = weather;
	this->windSpeed = windSpeed;
	this->clouds = clouds;
}

void Weather::printWeather()
{
	std::cout << "Данные о погоде в городе " << city;
	std::cout << "\n\nШирота: " << lat << "\nДолгота: " << lon;
	std::cout << "\n\nТемпуратура: " << temperature;
	std::cout << "\nПогода: " << weather;
	std::cout << "\nСкорость ветра: " << windSpeed;
	std::cout << "\nВлажность воздуха: " << clouds << "\n";
}

Weather::~Weather()
{
}
