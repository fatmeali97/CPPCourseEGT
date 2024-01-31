#pragma once
#include "Drinks.h"
class NoAlcocholic :public Drinks
{
public:
	NoAlcocholic(std::string name,
		double price,
		double quantity,
		std::string type,
		double litres,
		double cityTax);

	void SetLitres(double litres);
	double GetLitres();
	void SetCityTax(double cityTax);
	double GetCityTax();

	double CalculatePrice() override;
	void print() override;

private:
	double m_litres;
	double m_cityTax;

	


};

