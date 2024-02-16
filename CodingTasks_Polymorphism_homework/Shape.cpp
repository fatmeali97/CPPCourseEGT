#include "Shape.h"
#include <iostream>

Shape::Shape(std::string color) : color(color) {}

void Shape::draw()
{
	std::cout << "Drawing a "
		<< color << " Shape"
		<< std::endl;
}

Shape::~Shape() {}

