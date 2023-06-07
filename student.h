#pragma once
#include<string>
using namespace std;
class student // Student class for programming Student information code.
{
	string name;// A variable to store the name of the student.
	int num_id;// A variable to store the number ID 
public:
	student(string n = "", int n_id = 0){name = n;num_id = n_id;}// A constructor to set value of student's name and student's number ID.
	void set(string n = "", int n_id = 0) {name = n; num_id = n_id;}// A function to set value of student's name and student's number ID.
	string ret_n() { return name; }//A function to return the student's name.
	int ret_id() { return num_id; }//A function to return the student's number ID.

	
};

