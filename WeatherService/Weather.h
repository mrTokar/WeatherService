#pragma once
#include <string>
using namespace std;

class Weather
{
	string city; //  �����
	double lon; // 49.6601
	double lat; // 58.5966
	double temperature; // 5.69
	string weather; // �����
	double windSpeed; // 4.27
	int clouds; // 100
public:
	Weather(string const& city, double lon, double lat, double temperature, \
		string weather, double windSpeed, int clouds);
	void print_weather() const;
};

