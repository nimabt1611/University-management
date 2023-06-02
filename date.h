#pragma once
#include <string>
class date
{
	int year, month, day ;
	 string c;
public:
	date(int y=0, int m=0, int d=0 , dow)
	{
		y = year;
		m = month;
		d = day;
	}
	void set(int y, int m, int d)
	{
		y = year;
		m = month;
		d = day;
	}
	int ret_y()
	{
		return year;
	}
	int ret_m()
	{
		return month;
	}
	int ret_d()
	{
		return day;
	}



};

