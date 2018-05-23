#pragma once
#include "date.h"
#define sz 10

class temperature
{
	date arr[sz];
	double arr_t[sz];
	int size;
public:
	temperature();
	void init(int size);
	void show();
	double mid_temperature(bool b);
};