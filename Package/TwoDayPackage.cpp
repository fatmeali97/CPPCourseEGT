#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(Adress sender,
	Adress recipient,
	double weight, 
	double costPerOunce, 
	double flatFee)
	: Package(sender, recipient, weight, costPerOunce)
	, m_flatFee(flatFee)
{

}

double TwoDayPackage::CalculateCost()
{
	double cost = Package::CalculateCost();
	cost += m_flatFee;
	return cost;
}
