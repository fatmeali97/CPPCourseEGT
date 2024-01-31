#pragma once


class Account {
public:
	Account(double balance);

	void SetBalance(double balance);
	virtual void Credit(double amount);
	virtual bool Debit(double amount);
	double GetBalance();


private:
	double m_balance;
};