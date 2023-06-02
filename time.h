
#pragma once
using namespace std;

class Time
{
	int hour, min;
public:
	Time(int h = 0, int m = 0) { hour = h; min = m; }
	void set(int h, int m) { hour = h; min = m; }
	int ret_h() { return hour; }
	int ret_m() { return min; }
};

