
#include <iostream>
#include "Employee.h"
#include "Department.h"

int main()
{
	// Making object ot Deparment
	Department department1("IT Support");

	// Making objects of Employee pointer; becouse our vector is required pointers;
	Employee* emp1 = new Employee ("Berenn", "457-1", "front-end");
	Employee* emp2 = new Employee("Beray", "457-2", "c++ developer");
	Employee* emp3 = new Employee("Dimityr", "457-3", "c++ support");
	Employee* emp4 = new Employee("Alisiya", "457-4", "php dev");
	
	//adding employees to departmen
	department1.addEmployee(emp1);
	department1.addEmployee(emp2);
	department1.addEmployee(emp3);
	//department1.addEmployee(emp4);

	//display them;
	department1.displayemployees();
	//ading space
	std::cout << std::endl;

	//adding one more employee to departmen to check if everything is okay
	department1.addEmployee(emp4);
	department1.displayemployees();


	return 0;
}
