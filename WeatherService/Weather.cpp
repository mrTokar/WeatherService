#include "Weather.h"
#include <iostream>

Weather::Weather(string const& city, double lon, double lat, double temperature, string weather, double windSpeed, int clouds):
	city(city), weather(weather)
{
	this->lon = lon;
	this->lat = lat;
	this->temperature = temperature;
	this->windSpeed = windSpeed;
	this->clouds = clouds;
}

void Weather::print_weather() const
{
	cout << "Сегодня в " << city;
	cout << "(" << lon << "°, " << lat << "°) ";
	cout << weather;
	cout << ". Температура на улице " << temperature << "°C, ";
	cout << "а тажке небольшой ветер - всего " << windSpeed << "м/с. ";
	cout << "На небе " << clouds << " облаков." << endl;
}
