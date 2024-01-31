
#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"


int main()
{
	Account account1(100);
	SavingsAccount savingAccount1(80, 0.2);
	CheckingAccount chekingaccount1(100, 2);

	int withdraw;
	int credit;

	std::cout << "The balance is: " << chekingaccount1.GetBalance() << std::endl;
	std::cout << "how much do you want to withdraw" << std::endl;
	std::cin >> withdraw;
	chekingaccount1.Debit(withdraw);
	std::cout << "Your current balance after debit operation is : " << chekingaccount1.GetBalance() << std::endl;

	std::cout << "The balance is: " << chekingaccount1.GetBalance() << std::endl;
	std::cout << "how much do you want to credit" << std::endl;
	// in saving account we have to take fee, in my case it is 

	std::cin >> credit;
	chekingaccount1.Credit(credit);
	std::cout << "Your current balance after debit operation is : " << chekingaccount1.GetBalance() << std::endl;
}