#pragma once
#include "iostream"
#include"date.h"
#include"student.h"
#include<string>
#include "Time.h"
using namespace std;
class classroom // Classroom class for programming classroom code.
{
	friend bool interference(classroom t1, classroom t2);
	string Class_ID, lesson, teacher_name;// three variable to store the Class ID,lesson and teacher's name.
	bool video_projector = false;// A boolean variable to store the video projector.
	bool forums = false;// A boolean variable to store the forums.
	int num_of_sessions;// A variable to store the number of sessions.
	Time start, duration;// two object's form Time class.
	date d;// An object from date class.
	student st[40];//An array like object from student class.
	static int count;
	
	
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
		count++;
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
	void set_num_s(int n) { num_of_sessions = n; }// A function to set number of sessions.
	void set_d(date dt) { d = dt; }
	void set_ST(Time st) { start = st; }
	void set_DT(Time dt) { duration = dt; }
	void set_stu(student s, int i) { st[i] = s; }

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
	void saveClass()
	{
		ofstream classFile("classes.txt", ios::app);
		if (!classFile.is_open())
			cout << "Class File not found!\n";
		string videoPerojector,forumsStr;
		if (video_projector == true)
			videoPerojector = "yes";
		else
			videoPerojector = "no";
		if (forums == true)
			forumsStr = "yes";
		else
			forumsStr = "no";
		classFile << "class Name: " << lesson << " / ID: " << Class_ID << " / start: " << start.ret_h() << ":" << start.ret_m() << " / Forum: " << forumsStr << endl << " / Teacher: " << teacher_name << endl;
		classFile.close();
	}
	int ret_count()
	{
		return count;
	}
};

int classroom::count = 0;


