#include <iostream>
#include "Drinks.h"
#include "Alcocholic.h"
#include "NoAlcocholic.h"
#include "User.h"
#include "Purchase.h"
#include "OnlineShop.h"

int main()
{
  
    Drinks *Ptr1 = new Alcocholic("cycle", 20, 4, "wine", 500, 5);
    Drinks *Ptr2 = new Alcocholic("JM", 80, 2, "wiskey", 1000, 6);
  
    Drinks *Ptr3  = new NoAlcocholic("orange", 10, 3, "juice", 500, 2);
    Drinks *Ptr4 = new NoAlcocholic("apple", 10, 3, "juice", 500, 2);


    Purchase p1("22.01", "N:001");
    p1.AddDrink(Ptr1);
    p1.AddDrink(Ptr3);
    p1.AddDrink(Ptr4);


    User user1("Fati");
    user1.AddPurchase(p1);

    Purchase p2("23.01", "N:002");
    p2.AddDrink(Ptr2);
    p2.AddDrink(Ptr2);
    p2.AddDrink(Ptr3);
    p2.AddDrink(Ptr4);

    User user2("Mincho");
    user2.AddPurchase(p2);


    for (Purchase p : user1.GetPurchase())
    {
        std::cout << "The purchase date is : " << p.GetDate() << std::endl;

        for (Drinks* d : p.GetDrinks())
        {
            std::cout << d->GetName() << " " << std::endl;
        }
    }

    for (Purchase p : user2.GetPurchase())
    {
        std::cout << "The purchase date is : " << p.GetDate() << std::endl;

        for (Drinks* d : p.GetDrinks())
        {
            std::cout << d->GetName() << " " << std::endl;
        }
    }


    OnlineShop shop1;
    shop1.AddUser(user1);
    shop1.AddUser(user2);

    double maxPurchase = 0;
    std::string currentUser;


    for (User u : shop1.GetUser())
    {

        if (maxPurchase < u.TheMostExpensivePurchaseOfUser())
        {
            maxPurchase = u.TheMostExpensivePurchaseOfUser();
            currentUser = u.GetUserName();

        }

    }

    std::cout << "The most expensive Purchase is: " << TheMostExpensivePurchaseOfUser() << std::endl;;






    return 0;
}

