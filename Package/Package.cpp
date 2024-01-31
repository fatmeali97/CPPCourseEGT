#include "Package.h"
#include <iostream>

Package::Package(Adress sender,
	Adress recipient,
	double weight,
	double costPerOunce)
	: m_senderData(sender)
	, m_recipientData(recipient)
	, m_weight(weight)
	, m_costPerOunce(costPerOunce)
{
	if (m_weight < 0)
	{
		std::cout << "Weight should be a positive value !" << std::endl;
	}

	if (m_costPerOunce < 0)
	{
		std::cout << "Cost per ounce should be a positive value !" << std::endl;
	}
}

double Package::CalculateCost()
{
	return m_weight * m_costPerOunce;
}

double Package::GetCostPerOunce()
{
	return m_costPerOunce;
}

double Package::GetWeight()
{
	return m_weight;
}