#include "Alcocholic.h"
#include <iostream>

Alcocholic::Alcocholic(std::string name,
    double price,
    double quantity,
    std::string type,
    double volume,
    double tax) : Drinks(name, price, quantity, type)
{
    SetVolume(volume);
    SetTax(tax);
}

void Alcocholic::SetVolume(double volume)
{
    this->m_volume = volume;
}

double Alcocholic::GetVolume()
{
    return m_volume;
}

void Alcocholic::SetTax(double tax)
{
    this->m_tax = tax;
}

double Alcocholic::GetTax()
{
    return m_tax;
}

double Alcocholic::CalculatePrice()
{
    double CalculatedPrice = GetQuantity() * (GetPrice() * GetTax());
    return CalculatedPrice;
}

void Alcocholic::print()
{
    std::cout << GetName() << GetPrice() << " " << GetQuantity() << " " << GetTax() << " " << GetVolume() << std::endl;
}
