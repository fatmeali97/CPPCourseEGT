#include "Employee.h"
#include <iostream>

Employee::Employee(std::string name,
    std::string employeeID,
    std::string position)
{
    SetName(name);
    SetEmployeeID(employeeID);
    SetPosition(position);
}

void Employee::SetName(std::string name)
{
    this->name = name;
}

std::string Employee::GetName() const
{
    return this->name;
}

void Employee::SetEmployeeID(std::string employeeID)
{
    this->employeeID = employeeID;
}

std::string Employee::GetEmployeeID()
{
    return this->employeeID;
}

void Employee::SetPosition(std::string position)
{
    this->position = position;
}

std::string Employee::GetPosition() const
{
    return   this->position;
}

void Employee::display()
{
    std::cout << " Employee data: " << GetName()
        << ", " << GetEmployeeID() << ", "
        << GetPosition() << std::endl;
}
