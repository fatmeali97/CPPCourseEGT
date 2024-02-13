#include "Balance.h"
#include <iostream>

#include <vector>


Balance::Balance(double balance)
{
	SetBalance(balance);
}

void Balance::SetBalance(double balance)
{
	m_balance = balance;
}

double Balance::GetBalance() const
{
	return m_balance;
}

void Balance::SetAmount(double amount)
{
	m_amount = amount;
}

double Balance::GetAmount() const
{
	return m_amount;
}

double Balance::Win()
{
	double newBalance = m_balance + m_amount;
	SetBalance(newBalance);
	return 	GetBalance();

}

 double Balance::Loose()
{
	if (m_balance >= m_amount)
	{
		double newBalance = m_balance - m_amount;
		SetBalance(newBalance);
	}
	else {
		std::cout << "Your balance is: " << this->m_balance << 
			" you don't have enought money for this operation." << std::endl;
	}
	return GetBalance();
}

void Balance::Play()
{
	/*int betTime;
	std::cout << "How much time do you want to bet this." << std::endl;
	std::cin >> betTime;*/

	for (int i = 0; i < 1; i++)
	{
		srand(time(NULL)); // дава ни възможност да подберем случайно число;
		int num;
		int lowest = 1;
		int highest = 10;
		int range = (highest - lowest) + 1;
		num = lowest + rand() % range;
		
		//std::cout <<"only for us: " << num << std::endl;

		if (num % 2 == 0) 
		{ 
		//да приемем, че при четна стойност - печели
		std::cout << "you win " <<  GetAmount() <<
			" you balance now is " << Win() <<  std::endl;
		}
		else if (num % 2 != 0)
		{
			//да приемем, че при нечетна стойност - печели

			std::cout << "you loose " <<  GetAmount() <<
				" you balance now is " << Loose()  << std::endl;
		}
		
	}

}
