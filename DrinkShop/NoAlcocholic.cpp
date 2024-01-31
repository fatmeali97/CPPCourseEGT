#include "NoAlcocholic.h"
#include <iostream>

NoAlcocholic::NoAlcocholic(std::string name,
    double price,
    double quantity,
    std::string type,
    double litres,
    double cityTax)
    : Drinks (name, price, quantity, type)
{
    SetCityTax(cityTax);
    SetLitres(litres);
}

void NoAlcocholic::SetLitres(double litres)
{
    this->m_litres = litres;
}

double NoAlcocholic::GetLitres()
{
    return m_litres;
}

void NoAlcocholic::SetCityTax(double cityTax)
{
    this->m_cityTax = cityTax;
}

double NoAlcocholic::GetCityTax()
{
    return m_cityTax;
}

double NoAlcocholic::CalculatePrice()
{
    double CalculatedPrice = GetQuantity() * (GetPrice() + GetCityTax());
    return CalculatedPrice;
}

void NoAlcocholic::print()
{
    std::cout << GetName() << GetPrice() << " " << GetQuantity() << " " << GetCityTax() << " " << GetLitres() << std::endl;

}
