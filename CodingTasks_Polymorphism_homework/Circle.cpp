#include "Circle.h"
#include <iostream>

Circle::Circle(std::string color, double radius)
	: Shape(color), radius(radius){}

void Circle::draw()
{
	std::cout << "Drawing a "
		<< color << " circle"
		<< std::endl;
}

double Circle::area()
{
	double pi = 3.14;
	double area = radius * radius * pi;
	return area;
}

