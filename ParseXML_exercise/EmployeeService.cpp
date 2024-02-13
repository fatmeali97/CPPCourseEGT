#include "EmployeeService.h"


pugi::xml_document EmployeeService::doc;
std::vector <Employee*> EmployeeService::employeeList;

void EmployeeService::parseEmployeeData()
{
	//open file;
	// go to EmployeesData.Employee node;
	// loop tru all Eployee
	// read the Employee node - > parse;
	// add employee obj to vector;
	
	if (!doc.load_file("Employee.xml"))
	{
		return;
	}
	
	pugi::xml_node employees =
		doc.child("EmployeesData").child("Employees");

	//for (pugi::xml_node employee = employees.child("Employee");
	//	employee;
	//	employee = employee.next_sibling("Employee"))
	//{

	//}

	for (auto employee : employees)
	{
		Employee *ePtr = Employee::parseEmployee(employee);
		
		employeeList.push_back(ePtr);
	}

}

std::vector<Employee*> EmployeeService::getEmployeesList()
{
	return employeeList;
}
