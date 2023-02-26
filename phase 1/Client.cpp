#include "Client.h"

Client::Client() {
	balance = 1500;
}


void Client::deposite(double amount) {
	balance += amount;
}

void Client::withdraw(double amount) {
	if (amount <= balance && amount > 0) {
		balance -= amount;
	}
}

void Client::transferTo(double amount, Client &reception) {
	
	if (amount <= balance && amount > 0) {
	}withdraw(amount);
	reception.balance += amount;
}

void Client::checkBalance() {
	cout << "Balance : " << balance << endl;
}

void Client::displayInfo() {
	Person::displayInfo();
	cout << "Balance : " <<balance << endl;
}


