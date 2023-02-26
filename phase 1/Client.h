#pragma once
#include "Person.h"
class Client : public Person{
	double balance;
public:
	Client();
	Client(string name, string password, int id, double balance) :Person(name, password, id) {
		this->balance = balance;
	}
	void deposite(double amount);
	void withdraw(double amount);
	void transferTo(double amount, Client& reception);
	void checkBalance();
	void displayInfo();
};

