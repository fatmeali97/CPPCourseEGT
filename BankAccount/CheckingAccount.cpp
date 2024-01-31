#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double balance, double feeAmount)
	: Account(balance)
{
	m_feeAmount = feeAmount;
}

void CheckingAccount::Credit(double amount)
{
	Account::Credit(amount);
	double balanceAfterFee = GetBalance() - m_feeAmount;
	SetBalance(balanceAfterFee);
}

bool CheckingAccount::Debit(double amount)
{
	bool transactionSuccess = Account::Debit(amount);
	if (transactionSuccess)
	{
		double balanceAfterFee = GetBalance() - m_feeAmount;
		SetBalance(balanceAfterFee);
		return true;
	}

	return false;
}
