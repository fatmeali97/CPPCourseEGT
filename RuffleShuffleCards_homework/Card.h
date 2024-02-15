#pragma once
#include <string>
class Card
{
public:
	Card(std::string suit, std::string face);
	std::string getSuit() const;
	std::string getFace() const;

private:
	std::string suit;
	std::string face;
};