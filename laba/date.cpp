#include "date.h"
#include <iostream>

date::date()
{
	day = month = hour = 0;
}
void date::init(int d, int m, int h)
{
	if ((d <0 )|| (d > 31))
	{
		throw "Invalid date:day";
	}
	if ((m < 1) ||( m > 12))
	{
		throw "Invalid date:month";
	}
	if ((h < 0) ||( h > 23))
	{
		throw "Invalid date:hour";
	}
	day = d;
	hour = h;
	month = m;
}
void date::show()
{
	if (day == 0)
	{
		throw "Date isn't initalised";
	}
	std::cout << "Day: " << day << " " << "month: " << month << " " << "hour: " << hour << std::endl;
}
bool date::day_or_night()
{

	if (hour >= 6 && hour <= 18) return true;
	else return false;
}
bool date::operator< (const date &ob)
{
	if (month <= ob.month)
	{
		if (day <= ob.day)
		{
			if (hour < ob.hour)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}


	//true - day false - night