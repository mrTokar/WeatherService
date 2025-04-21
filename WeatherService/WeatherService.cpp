#include <iostream>
#include "XmlService.h"
using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");
	XmlService xs;
	Weather w = xs.getWeather("weather.xml");
	w.print_weather();
	return 0;
}