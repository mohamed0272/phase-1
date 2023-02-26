#pragma once
#include<iostream>
#include "Validation.h"
using namespace std;
class Person
{
	int id;
	string name, password;
public:
	Person();
	Person(string name, string password, int id);
	void setName(string name);
	void setPassword(string password);
	void setId(int id);
	int getId();
	string getName();
	string getPassword();
	void displayInfo();
};

