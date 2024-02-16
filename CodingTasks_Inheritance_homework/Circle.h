#pragma once
#include "Shape.h"

class Circle : public Shape
{
public:
	Circle(std::string color): Shape(color){}
	void draw() override;
};

