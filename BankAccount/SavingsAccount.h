#pragma once
#include "Account.h"
class SavingsAccount : public Account
{
public:
	SavingsAccount(double balance, double interestRate);

	double CalculateInterest();

private:
	double m_interestRate;
};

