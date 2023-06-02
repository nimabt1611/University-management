#pragma once
#include <string>
using namespace std;
class date
{
	int year, month, day ;
	string week_day;
public:
	date(int y=0, int m=0, int d=0 ,string w_d = "")
	{
		year = y;
		month = m;
		day = d;
		week_day = w_d;
	}
	void set(int y, int m, int d , string w_d)
	{
		year = y;
		month = m;
		day = d;
		week_day = w_d;
	}
	int ret_y(){return year;}
	int ret_m(){return month;}
	int ret_d(){return day;}
	string ret_w_d() { return week_day;}



};

