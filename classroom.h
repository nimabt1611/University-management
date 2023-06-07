#pragma once
#include "iostream"
#include"date.h"
#include"student.h"
#include<string>
#include "Time.h"
using namespace std;
class classroom // Classroom class for programming classroom code.
{
	string Class_ID, lesson, teacher_name;// three variable to store the Class ID,lesson and teacher's name.
	bool video_projector = true;// A boolean variable to store the video projector.
	bool forums = false;// A boolean variable to store the forums.
	int num_of_sessions;// A variable to store the number of sessions.
	Time start, duration;// two object's form Time class.
	date d;// An object from date class.
	student st[40];//An array like object from student class.
	
	
public:
	classroom(string id = "", string l = "", string t = "", bool v_p = true, bool f = true , Time s = 0, Time du = 0, date dd = 0, int nos = 0) 
		// A constructor to set value of Class ID , lesson , teacher's name , video projector , object start ,  object duration , object d , forums and number of sessions.
	{
		Class_ID = id;
		lesson = l;
		teacher_name = t;
		video_projector = v_p;
		start = s;
		duration = du;
		d = dd;
		forums = f ;
		num_of_sessions = nos;

		
		if (forums == true)//A condition to check the class type and get the nimber of sessoins if the condition is true.
		{
			cin >> num_of_sessions;
			
		}

			
		int i, cnt = 0;//Two variabes to store student's number ID and number of stdent's .
		cin >> i;//get a student number. 
		while (i < 1000 or i > 9999)// A while loop to get the desired number of student name's and number's ID.
		{
			string name;
			cin >> name;
			st[cnt].set(name, i);
			cnt++;
			cin >> i;
		}

	} 

	string ret_ClassID() { return Class_ID; }//A function to return the Class ID.
	string ret_lesson() { return lesson; }//A function to return the lesson.
	string ret_teach_name() { return teacher_name; }//A function to return the teacher's name.
	bool ret_video_p() { return video_projector; }//A function to return the video projector.
	bool ret_forums() { return forums; }//A function to return the formus.
	int ret_num_of_s() { return num_of_sessions; }//A function to return the number of sessions.

	void set_classID (string i) { Class_ID = i; }// A function to set Class ID.
	void set_les (string les) { lesson = les; }// A function to set lesson.
	void set_teach_name (string teach_name) { teacher_name = teach_name; }// A function to set teacher's name.
	void set_vp(bool v_p) { video_projector = v_p; }// A function to set videp projector.
	void set_forums(bool f ) { forums = f; }// A function to set forums.
	int ret_num_s(int n) { num_of_sessions = n; }// A function to set number of sessions.

	bool TimeComparison(classroom c1, classroom c2)// A boolean function with two objects to compare the time of classes. 
	{
		int h1 = c1.duration.ret_h();// Save a class hour.
		int m1 = c1.duration.ret_m();// Save a class minutes.
		int h2 = c2.duration.ret_h();// Save a another class hour. 
		int m2 = c2.duration.ret_m();// Save a another class minutes.

		if (h1 > h2)//check the hour of two classes with each other.
			return true;
		else if (h2 > h1)//check the hour of two classes with each other if needed.
			return false;
		else
			return m1 > m2;//check the minutes of two classes with each other if needed.




	}
	Time timeover()// A function of time type to check the class completion time.
	{
		int hp;// A variable for save tmie the end classes.
		Time t1;// An object from Time class.

	
		t1.set(start.ret_h() + duration.ret_h(), start.ret_m() + duration.ret_m());//Calculating the end time of classes using the set function in class time.
		return t1;

	}
	


	

};

