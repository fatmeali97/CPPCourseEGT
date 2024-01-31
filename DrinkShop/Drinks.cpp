#include "Drinks.h"
#include <iostream>

Drinks::Drinks(std::string name,
	double price,
	double quantity,
	std::string type)
{
	SetName(name);
	SetPrice(price);
	SetQuantity(quantity);
	SetType(type);
}

void Drinks::SetName(std::string name)
{
	this->m_name = name;
}

void Drinks::SetPrice(double price)
{
	this->m_price = price;
}

void Drinks::SetQuantity(double quantity)
{
	this->m_quantity = quantity;
}

void Drinks::SetType(std::string type)
{
	this->m_type = type;
}

std::string Drinks::GetName()
{
	return std::string(m_name);
}

double Drinks::GetQuantity()
{
	return m_quantity;
}

double Drinks::GetPrice()
{
	return m_price;
}

double Drinks::CalculatePrice()
{
	return 0;
}

void Drinks::print()
{
	std::cout << GetName() << GetPrice() << " " << GetQuantity() << " " << std::endl;
}

