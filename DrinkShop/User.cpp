#include "User.h"

User::User(std::string userName){
	SetUserName(userName);
}
User::User(std::string userName, std::vector<Purchase> purchase)
	:m_purchase(purchase)
{
	SetUserName(userName);
}

void User::AddPurchase(Purchase purchase)
{
	m_purchase.push_back(purchase);
}

void User::SetUserName(std::string userName)
{
	this->m_userName = userName;
}

std::string User::GetUserName()
{
	return m_userName;
}

std::vector<Purchase> User::GetPurchase()
{
	return m_purchase;
}


double User::TheMostExpensivePurchaseOfUser()
{
	double TotalPriceForUser = 0;
	
	for (int i = 0; i < m_purchase.size(); ++i)
	{
		TotalPriceForUser += m_purchase[i].CalculateTotalPrice();
	}

	return TotalPriceForUser;
}
