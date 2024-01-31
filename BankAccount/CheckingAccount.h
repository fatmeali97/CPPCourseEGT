#pragma once
#include "Account.h"
class CheckingAccount : public Account
{
public:
	CheckingAccount(double balance, double feeAmount);

	void Credit(double amount) override;
	bool Debit(double amount) override;

private:
	double m_feeAmount;
};

