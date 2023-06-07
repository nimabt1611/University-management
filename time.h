
#pragma once
using namespace std;

class Time // Time class for programming time code. 
{
	int hour, min;//Two variabes to store hours and minutes.
public:
	Time(int h = 0, int m = 0) { hour = h; min = m; }// A constructorr for set value of hours and minutes.
	void set(int h, int m) { hour = h; min = m; }// A function to set hours and minutes.
	int ret_h() { return hour; }//A function to return the hours.
	int ret_m() { return min; }//A function to return the minutes.
};

