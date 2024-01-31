#pragma once
#include <string>

class Adress
{
public:
	Adress(std::string name, std::string city, std::string street);

	void SetName(std::string name);
	std::string GetName();

	//void SetAddress(std::string address);
	//std::string GetAddress();

	void SetCity(std::string city);
	std::string GetCity();

	void SetStreet(std::string street);
	std::string GetStreet();



private:
	std::string m_name;
	std::string m_city;
	std::string m_street;

};

