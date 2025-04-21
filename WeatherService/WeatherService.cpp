#include "JsonService.h"
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");
	JsonService js;
	Weather w = js.getWeather("weather.json");
	w.print_weather();
	return 0;
}