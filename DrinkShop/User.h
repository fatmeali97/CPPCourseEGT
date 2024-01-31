#pragma once
#include <string>
#include "Purchase.h"

class User
{
public:
	User(std::string userName, std::vector<Purchase> purchase);
	User(std::string userName);

	void AddPurchase(Purchase purchase);
	
	void SetUserName(std::string userName);
	std::string GetUserName();
	std::vector<Purchase> GetPurchase();

	double TheMostExpensivePurchaseOfUser();


private:
	std::string m_userName;
	std::vector<Purchase> m_purchase;
	//std::vector<Purchase> purchase;

};

