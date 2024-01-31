#pragma once
#include "Drinks.h"
#include <vector>

class Purchase
{
public:
	Purchase(
		std::string date,
		std::string purchaseNumber);



	void SetPurchase(std::string purchaseNumber);
	void SetDate(std::string date);
	std::string GetDate();
	void AddDrink(Drinks*); 
	std::vector<Drinks*> GetDrinks(); 
	double CalculateTotalPrice();

	double HowMuchEqualDrinksIsPurchase();
	double ThePurchaseWithSameAtr();
	double TopTenPurchases();



	

private:
	std::vector<Drinks*> m_drink;
	std::string m_date;
	std::string m_purchaseNumber;
	int number;
	static int NumberOfOrders;
	
};

