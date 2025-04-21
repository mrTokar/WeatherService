#include "Weather.h"

Weather::Weather(string const& city, double lon, double lat, double temperature, string weather, double windSpeed, int clouds):
	city(city), weather(weather)
{
	this->lon = lon;
	this->lat = lat;
	this->temperature = temperature;
	this->windSpeed = windSpeed;
	this->clouds = clouds;
}
