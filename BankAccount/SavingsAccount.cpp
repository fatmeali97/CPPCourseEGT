#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double balance, double interestRate)
	: Account(balance)
{
	m_interestRate = interestRate;
}

double SavingsAccount::CalculateInterest()
{
	return m_interestRate * GetBalance();
}
