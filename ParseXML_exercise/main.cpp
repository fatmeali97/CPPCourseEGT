#include <iostream>
#include "pugixml.h"
#include "EmployeeService.h"

int main()
{
	EmployeeService::parseEmployeeData();

	for (auto employee : EmployeeService::getEmployeesList())
	{
		std::cout << *employee;
		std::cout << std::endl;
	}
	return 0;
};
