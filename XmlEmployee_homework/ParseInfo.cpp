#include "ParseInfo.h"
#include <vector>
#include "pugixml.h"


using namespace pugi;

void ParseInfo::ExtractInfo(const char* fileName)
{

    xml_document doc;

    if (!doc.load_file(fileName))
    {
        std::cout << "Erorr" << std::endl;
    }

    xml_node empls = doc.child("EmployeesData").child("Employees");


    for (xml_node_iterator it = empls.begin(); it != empls.end(); ++it)
    {
        int i = 1;
        EmployeeData* empl;
        std::string name = "";
        std::string type = "";
        int age = 0;

        for (xml_attribute_iterator ait = it->attributes_begin();
            ait != it->attributes_end();
            ++ait)
        {
            
            if (i == 1) 
            {
                name = ait->value();
            }
            if (i == 2)
            {
                type = ait->value();
            }
            if (i == 3)
            {
                age = std::stoi(ait->value());
            }
            i++;
        }
        empl = new EmployeeData(name, type, age);
        employee.push_back(empl);
    }

}

void ParseInfo::PrintInfo()
{ 
    for (auto &empl : employee)
    {
        empl->PrintInfo();
        delete empl;
    }    

}
