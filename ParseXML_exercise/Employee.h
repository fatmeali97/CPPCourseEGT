#pragma once
#include <string>
#include "Workstation.h"
#include "pugixml.h"
#include "pugixml.h"
#include <ostream>

class Employee
{
public: 
	Employee(std::string name,
		std::string type,
		int age,
		Workstation*);

	//???????, ?? ?? ???? ??????? ?? ??????;

	static Employee* parseEmployee(pugi::xml_node);
	friend std::ostream& operator<<(std::ostream& os, const Employee& employee);
private:
	std::string name;
	std::string type;
	int age;
	Workstation* workstation;
};

