#include "Person.h"


Person::Person() {
	id = 0;
}
Person::Person(string name, string password, int id) {
	setName(name);
	setPassword(password);
	setId(id);
}
void Person::setName(string name) {
	if (Validation::validateName(name) == false)
		cout << "invalid name"<<endl;
	else
		this->name = name;
}

void Person::setPassword(string password) {
	if (Validation::validatePassword(password) == false)
		cout << "invalid password"<<endl;
	else
		this->password = password;
}

void Person::setId(int id) {
	this->id = id;
}



int Person::getId() {
	return id;
}
string Person::getName() {
	return name;
 }

string Person::getPassword() {
	return password;
}
void Person::displayInfo() {
	cout << "name : " << getName() << endl;
	cout << "ID : " << getId() << endl;
	cout << "password : " << getPassword() << endl;
}


