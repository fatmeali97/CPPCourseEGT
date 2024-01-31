#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(Adress sender,
	Adress recipient,
	double weight,
	double costPerOunce,
	double feePerOunce)
	: Package(sender, recipient, weight, costPerOunce)
	, m_feePerOunce(feePerOunce)
{}

double OvernightPackage::CalculateCost()
{
	double finalCostPerOunce = GetCostPerOunce() + m_feePerOunce;
	return finalCostPerOunce * GetWeight();
}