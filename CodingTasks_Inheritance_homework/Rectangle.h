#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
public:
	Rectangle(std::string color): Shape(color) {}
	void draw() override;
};

