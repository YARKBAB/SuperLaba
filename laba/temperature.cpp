#include <iostream>
#include "temperature.h"
#include "date.h"

temperature::temperature()
{
	size = 0;
	for (int i = 0; i < sz; i++)
	{
		arr_t[i] = 0.0;
	}
}
void temperature::init(int size)
{
	int d, m, h;
	double t;
	this->size = size;
	if (size > sz)
	{
		throw "Invalid size";
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << "Enter day, month, hour and temp" << std::endl;
		std::cin >> d >> m >> h>>t;
		arr[i].init(d, m, h);
		arr_t[i] = t;
		if ((i > 0) && (arr[i] < arr[i - 1]))
		{
			throw "Initialisation failed";
		}
	}
}
double temperature:: mid_temperature(bool b){
	double suma;
	int k = 0;

	for(int i = 0; i < sz; i ++)
		if(arr[i].day_or_night()==b)
		{
			suma = arr_t[i];
			k++;
		}
	return suma / k; 
}