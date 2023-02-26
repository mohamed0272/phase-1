#include "Person.h"
#include "Employee.h"
#include "Admin.h"
#include<iostream>
#include "Validation.h"

int main() {
	Client c1("mohamed amer", "123456789", 1234, 345);
	Client c2("amma fars", "bvcqwdwefrg", 9876, 500);
	/*Employee e1("ahmed asda", "asdfg", 12345, 7000);
	Admin a1("omar ahmed sd ", "zxcv", 987, 8000);*/
	c1.withdraw(45);
	c1.transferTo(50, c2);
	c1.displayInfo();
	c2.displayInfo();
	/*e1.displayInfo();
	a1.displayInfo();*/

}