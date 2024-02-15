#pragma once
#include <vector>

#include "Card.h"


class Cards
{
public:
	void ShuffleCards();
	void ShowCards();
	void CreateCards();

private:
	std::vector<Card> cards;
};