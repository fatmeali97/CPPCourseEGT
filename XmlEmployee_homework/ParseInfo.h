#pragma once
#include "EmployeeData.h"
#include <iostream>
#include <vector>


class ParseInfo
{
public:
	void ExtractInfo(const char* fileName);
	void PrintInfo();

private:
	std::vector<EmployeeData*> employee;
};