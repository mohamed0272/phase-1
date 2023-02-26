#pragma once
#include "Client.h"
class Employee : public Person
{
	double salary;
public:
	Employee();
	Employee(string name, string password, int id, double salary) :Person(name, password, id) {
		this->salary = salary;
	}
	void setSalary(double salary);
	double getSalary();
	void displayInfo();


};

