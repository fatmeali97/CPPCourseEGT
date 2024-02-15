#include "Card.h"

Card::Card(std::string suit, std::string face)
	: suit(suit), face(face) {}

std::string Card::getSuit() const
{
	return this->suit;
}

std::string Card::getFace() const
{
	return this->face;
}