#pragma once
#include <string> // include string library
#include <vector> // include vector 
#include "Employee.h" // include Employee.h because we need to make vector of employees, and ading employees to our department

class Department
{
public:
	Department(std::string departmentName);

	void SetDepartmentName(std::string DepartmentName);
	std::string GetDepartmentName() const;

	void addEmployee(Employee* employee);
	void displayemployees();

private:
	std::string departmentName;
	//initializing vector of employees with pointer
	std::vector<Employee*> employees;
	int numEmployees;

}; 





