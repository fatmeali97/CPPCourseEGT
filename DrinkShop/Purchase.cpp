#include "Purchase.h"
#include "Drinks.h"
#include <iostream>

int Purchase::NumberOfOrders = 0;

Purchase::Purchase(
    std::string date,
    std::string purchaseNumber) 
{
    SetDate(date);
    SetPurchase(purchaseNumber);
    NumberOfOrders++;
    this->number = NumberOfOrders;
}


void Purchase::SetPurchase(std::string purchaseNumber)
{
    this->m_purchaseNumber = purchaseNumber;
}

void Purchase::SetDate(std::string date)
{
    this->m_date = date;

}

std::string Purchase::GetDate()
{
    return std::string(m_date);
}

void Purchase::AddDrink(Drinks *drink)
{
    this->m_drink.push_back(drink);
}

void Order::addDrink(Drink* drink)
{
    m_drinks.push_back(drink);
    time_t now = time(0);
    ctime_s(m_timeAndDate, sizeof m_timeAndDate, &now);
    m_dateOfPurchase = m_timeAndDate;
    NonAlcoholic* nonAlcoholicPtr = dynamic_cast<NonAlcoholic*>(drink);
    Alcoholic* alcoholicPtr = dynamic_cast<Alcoholic*>(drink);
    if (nonAlcoholicPtr != nullptr) {
        m_nonAlcoholicDrinks++;
    }
    else if (alcoholicPtr != nullptr) {
        m_alcoholicDrinks++;
    }
}

std::vector<Drinks*> Purchase::GetDrinks()
{
    return m_drink;
}

double Purchase::CalculateTotalPrice()
{
    double total = 0;
    for (int i = 0; i < m_drink.size(); ++i)
    {
        total += m_drink[i]->GetPrice();
    }

    return total;
   
}

double Purchase::HowMuchEqualDrinksIsPurchase()
{
    std::cout << "Order number" << this->number;
    for (int i = 0; m_drink.size(); ++i)
    {
        m_drink.at(i)->print();
    }
    return 0.0;
}




double Purchase::ThePurchaseWithSameAtr()
{
    return 0.0;
}

double Purchase::TopTenPurchases()
{
    return 0.0;
}
