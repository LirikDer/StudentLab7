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
	std::cout << "������ � ������ � ������ " << city;
	std::cout << "\n\n������: " << lat << "\n�������: " << lon;
	std::cout << "\n\n�����������: " << temperature;
	std::cout << "\n������: " << weather;
	std::cout << "\n�������� �����: " << windSpeed;
	std::cout << "\n��������� �������: " << clouds << "\n";
}

Weather::~Weather()
{
}
