#pragma once
#include "Package.h"

class TwoDayPackage : public Package
{
public:
	TwoDayPackage(Adress sender,
		Adress recipient,
		double weight,
		double costPerOunce,
		double flatFee);

	double CalculateCost() override;
private:
	double m_flatFee;
};

