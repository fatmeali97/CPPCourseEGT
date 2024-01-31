#include "Rectangle.h"

Rectangle::Rectangle(int sideA,
	int sideB) 
	: Shape(sideA)
{
	SetB(sideB);
}

void Rectangle::SetB(int sideB)
{
	this->b = sideB;
}

int Rectangle::GetB()
{
	return b;
}

void Rectangle::Draw()
{
	std::cout << "Draw in derived class Rectangle" << std::endl;
}
