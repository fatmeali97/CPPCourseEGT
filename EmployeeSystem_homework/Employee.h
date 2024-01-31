#pragma once
#include <string> // include string library


class Employee
{
public:
	// A constructor to initialize employee details.
	Employee(std::string name,
		std::string employeeID,
		std::string position);

	// set and get methods
	void SetName(std::string name); // to set variable;
	std::string GetName() const; // to get the variable;


	void SetEmployeeID(std::string employeeID);
	std::string GetEmployeeID();

	void SetPosition(std::string position);
	std::string GetPosition() const;

	//display() to output employee details to the console.
	void display();

private: // hidden part
	
	std::string name;
	std::string employeeID;
	std::string position;
};

