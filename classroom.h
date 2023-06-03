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
	int num_of_sessions;
	bool forums = false;
public:
	classroom(string id, string l, string t , bool v_p, bool f ,Time s, Time du, date dd , int nos = 0)
	{
		ID = id;
		lesson = l;
		teacher_name = t;
		video_projector = v_p;
		start = s;
		duration = du;
		d = dd;
		forums = f ;
		num_of_sessions = nos;

		
		if (forums == true)
		{
			cin >> num_of_sessions;
			
		}

			
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

