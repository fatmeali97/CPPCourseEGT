#include "Account.h"
#include <iostream>


Account::Account(double balance)
{
	if (balance < 0)
	{
		std::cout << " The balance is negative number" << std::endl;
		balance = 0;
	}
	m_balance = balance;
}


void Account::SetBalance(double balance)
{
	this->m_balance = balance;
}

void Account::Credit(double amount)
{
	this->m_balance = m_balance + amount;
}

bool Account::Debit(double amount)
{
	if (this->m_balance >= amount)
	{
		this->m_balance = m_balance - amount;
		return true;
	}
	else
	{
		std::cout << "Debit amount exceeded account balance."
			<< std::endl;
		return false;
	}
}
double Account::GetBalance()
{
	return this->m_balance;
}
