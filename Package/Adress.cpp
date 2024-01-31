#include "Adress.h"

Adress::Adress(std::string name, std::string city, std::string street)
	: m_name(name)
	, m_city(city)
	, m_street(street)
{}

void Adress::SetName(std::string name)
{
	m_name = name;
}

std::string Adress::GetName()
{
	return m_name;
}



void Adress::SetCity(std::string city) 
{
	m_city = city;
}
std::string Adress::GetCity() 
{
	return m_city;
}

void Adress::SetStreet(std::string street) 
{
	m_street = street;
}
std::string Adress::GetStreet()
{
	return m_street;
}


