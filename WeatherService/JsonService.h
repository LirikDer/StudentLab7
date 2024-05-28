#pragma once
#include <fstream>
#include "Weather.h"
#include "Service.h"
#include "json.hpp"
class JsonService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};
