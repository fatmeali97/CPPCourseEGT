#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(std::string color,
	double width, double height)
	: Shape(color), width(width),
	height(height) {}


void Rectangle::draw()
{
	std::cout << "Drawing a "
		<< color << " rectangle"
		<< std::endl;
}

double Rectangle::area()
{
	double area = (2 * width) + (2 * height);
	return area;
}

