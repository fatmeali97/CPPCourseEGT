#include "Employee.h"

Employee::Employee(std::string name,
	std::string type,
	int age,
	Workstation *workSt) : workstation(workSt)
{
	this->name = name;
	this->type = type;
	this->age = age;

}

Employee* Employee::parseEmployee(pugi::xml_node emplNode)
{
	std::string name = emplNode.attribute("Name").value();
	std::string type = emplNode.attribute("Type").value();
	int age = emplNode.attribute("Age").as_int();

	Workstation *wPtr =  Workstation::parseWorkstation(emplNode.child("Workstation"));

	return new Employee(name, type, age, wPtr);
}

std::ostream& operator<<(std::ostream& os, const Employee& employee) {
	os << "Name: " << employee.name << " Type: " << employee.type << " Age: " << employee.age << " Workstation: "
		<< *employee.workstation;
	return os;
}