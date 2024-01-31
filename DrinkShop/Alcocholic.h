#pragma once
#include "Drinks.h"

class Alcocholic : public Drinks
{
public:
	Alcocholic(std::string name,
		double price,
		double quantity,
		std::string type,
		double volume,
		double tax);

	void SetVolume(double volume);
	double GetVolume();
	void SetTax(double tax);
	double GetTax();

	double CalculatePrice() override;
	void print() override;

private:
	double m_volume;
	double m_tax;

};

