#pragma once
#include "iostream"
#include"date.h"
#include"student.h"
#include<string>
#include "Time.h"
using namespace std;
class classroom 
{
	string ID, lesson, teacher_name;
	bool video_projector = true;
	Time start, duration;
	date d;
	student st[40];
public:
	classroom(string id, string l, string t , bool v_p, Time s, Time du, date dd)
	{
		ID = id;
		lesson = l;
		teacher_name = t;
		video_projector = v_p;
		start = s;
		duration = du;
		d = dd;
		int i, cnt = 0;
		cin >> i;
		while (i < 1000 or i > 9999)
		{
			string name;
			cin >> name;
			st[cnt].set(name, i);
			cnt++;
			cin >> i;
		}
	}
	

};

