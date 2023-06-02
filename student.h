#pragma once
#include<string>
using namespace std;
class student
{
	string name;
	int num_id;
public:
	student(string n = "", int n_id = 0){name = n;num_id = n_id;}
	void set(string n = "", int n_id = 0) {name = n; num_id = n_id;}
	string ret_n() { return name; }
	int ret_id() { return num_id; }

	
};

