#include "Department.h"
#include <iostream>

// the variables declared with this, are in private section, the next one is the one typed when the cosntuctor is called;
Department::Department(std::string departmentName)
{
	SetDepartmentName(departmentName);
	numEmployees++;
}

void Department::SetDepartmentName(std::string DepartmentName)
{

	this->departmentName = departmentName;
}

std::string Department::GetDepartmentName() const
{
	return this->departmentName;
}

void Department::addEmployee(Employee* employee)
{
	//in vector of employees (in our private section) .pushback(the employee we write in main)
	this->employees.push_back(employee);
}

void Department::displayemployees()
{
	std::cout << "In department: " << GetDepartmentName() <<
		"The employees are: " << std::endl;
	// fot pointe in employee new variable emp go throug employees
	for (Employee* emp : employees) {
		emp->display();
	}
}
