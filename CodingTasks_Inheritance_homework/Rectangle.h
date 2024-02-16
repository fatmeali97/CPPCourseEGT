#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
public:
	Rectangle(std::string color);
	void draw() override;
};

