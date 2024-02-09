#include <iostream>
#include "Balance.h"



void MenuChoice() 
{
	std::cout << "Choose between:" << std::endl;
	std::cout << "1.See your balance" << std::endl;
	std::cout << "2.Bet and play " << std::endl;
	std::cout << "3.Close " << std::endl;
	std::cout << std::endl;
}

int main()
{

	Balance b1(1000); // създаваме си първия обект
	std::cout << "Menu" << std::endl;
	MenuChoice();

	int choice;

	while (std::cin >> choice && choice != 3)
	{

		if (b1.GetBalance() != 0)
		{
			switch (choice)
			{
			case 1: std::cout << "Your balance is: " << b1.GetBalance() << std::endl;
				MenuChoice();
			break;

			case 2:

				double amount;
				std::cout << "How much do you want to bet: " << std::endl;
				std::cin >> amount;
				b1.SetAmount(amount);
				b1.Play();
				MenuChoice();

				if (b1.GetBalance() == 0)
				{
					int choicee;
					std::cout << "You don't have enought in you balance " << std::endl;
					std::cout << "Do you want to set? Press 1 for yes" << std::endl;
					std::cin >> choicee;
					switch (choicee)

					{
					case 1:
						std::cout << "How much do you want to set? " << std::endl;
						int settingToBalance;
						std::cin >> settingToBalance;
						b1.SetBalance(settingToBalance);
						MenuChoice();
						break;

					default: std::cout << "See you soon" << std::endl;
						break;
					}
				}
			break;
				

			default:
				std::cout << "you need to choose between options: 1, 2 and 3 " << std::endl;
			break;
			}
		}
	}

	std::cout << "See you soon" << std::endl;

	return 0;
}

