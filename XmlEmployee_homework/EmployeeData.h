#pragma once
#include <string>
class EmployeeData
{
public:
	EmployeeData();
	~EmployeeData();
	EmployeeData(std::string name,
		std::string type,
		int age);

	void SetName(std::string name);
	void SetType(std::string type);
	void SetAge(int age);
	std::string GetName();
	std::string GetType();
	int GetAge();
	void PrintInfo();

private:

	std::string m_name;
	std::string m_type;
	int m_age;
};

