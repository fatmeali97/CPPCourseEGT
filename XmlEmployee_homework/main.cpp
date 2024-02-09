#include "ParseInfo.h"
#include <iostream>

int main()
{
	ParseInfo info;
	info.ExtractInfo("Employee.xml");
	info.PrintInfo();

	return 0;
}
