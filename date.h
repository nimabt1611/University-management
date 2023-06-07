#pragma once
#include <string>
using namespace std;
class date // date class for programming date code.
{
	int year, month, day ;// three variable to store the year,month and day.
	string week_day;// A variable to store the day of week.
public:
	date(int y=0, int m=0, int d=0 ,string w_d = "")// A constructor to set value of year , month , day and day of week.
	{
		year = y;
		month = m;
		day = d;
		week_day = w_d;
	}
	void set(int y, int m, int d , string w_d)// A function to set year , month , day and day of week.
	{
		year = y;
		month = m;
		day = d;
		week_day = w_d;
	}
	int ret_y(){return year;}//A function to return the year.
	int ret_m(){return month;}//A function to return the month.
	int ret_d(){return day;}//A function to return the day.
	string ret_w_d() { return week_day;}//A function to return the day of week.



};

