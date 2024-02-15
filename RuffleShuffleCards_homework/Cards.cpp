#include "Cards.h"
#include <iostream>


void Cards::ShuffleCards()
{
	srand(time(0));
	std::cout << std::endl;
	for (int i = 0; i < 52; i++)
	{
		int randomCard = rand() % 52;
		Card temp = cards.at(i);
		cards.at(i) = cards.at(randomCard);
		cards.at(randomCard) = temp;
	}
	std::cout << std::endl;
	std::cout << std::endl;
}


void Cards::ShowCards()
{
	for (auto card : cards) {


		std::cout << card.getFace();

		std::cout << " of " << card.getSuit() << std::endl;
	}
}


void Cards::CreateCards()
{
	for (int i = 1; i < 5; i++)
	{
		std::string suit;
		if (i == 1)
		{
			suit = "Clubs";
		}
		else if (i == 2)
		{
			suit = "Diamonds";
		}
		else if (i == 3)
		{
			suit = "Hearts";
		}
		else
		{
			suit = "Spades";
		}

		for (int j = 1; j < 14; j++)
		{
			std::string face;


			if (j == 1)
			{
				face = "A";
			}
			else if (j == 11)
			{
				face = "J";
			}
			else if (j == 12)
			{
				face = "Q";
			}
			else if (j == 13)
			{
				face = "K";
			}
			else 
			{
				face = std::to_string(j);
			}

			cards.push_back(Card(suit, face));
		}

	}
}