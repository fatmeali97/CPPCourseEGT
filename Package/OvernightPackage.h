#pragma once
#include "Package.h"

class OvernightPackage : public Package
{
public:
	OvernightPackage(Adress sender,
		Adress recipient,
		double weight,
		double costPerOunce,
		double feePerOunce);

	double CalculateCost() override;
private:
	double m_feePerOunce;
};

