#pragma once

class date
{
	int day, month, hour;
public:
	date();
	void init(int d, int m, int h);
	void show();
	bool day_or_night();
	bool operator< (const date &ob);
};