#pragma once
#include "pugixml.h"
#include "Employee.h"
#include <vector>


class EmployeeService
{
public: 
	static void parseEmployeeData();
	static std::vector<Employee*> getEmployeesList();
private:
	static std::vector<Employee*> employeeList;
	static pugi::xml_document doc;
};

