#include "EmployeeData.h"
#include <iostream>

EmployeeData::EmployeeData()
{}

EmployeeData::~EmployeeData()
{
	//std::cout << "Destructor called" << std::endl;
}

EmployeeData::EmployeeData(std::string name, std::string type, int age)
{
	SetName(name);
	SetAge(age);
	SetType(type);
}

void EmployeeData::SetName(std::string name)
{
	m_name = name;
}

void EmployeeData::SetType(std::string type)
{
	m_type = type;
}

void EmployeeData::SetAge(int age)
{
	m_age = age;
}

std::string EmployeeData::GetName()
{
	return m_name;
}

std::string EmployeeData::GetType()
{
	return m_type;
}

int EmployeeData::GetAge()
{
	return m_age;
}

void EmployeeData::PrintInfo()
{
	std::cout << GetName() << ", " <<
	GetAge() << " at position " <<
	GetType() << std::endl;
}
