#include "Employee.h"

Employee::Employee() {
	salary = 5000;
}

void Employee::setSalary(double salary) {
	if (Validation::validateSalary(salary) == false)
		cout << "invalid salary " << endl;
	this->salary = salary;
}

double Employee::getSalary() {
	return salary;
}

void Employee::displayInfo() {
	Person::displayInfo();
	cout << "salary : " << salary<<endl;
}
