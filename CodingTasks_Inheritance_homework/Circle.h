#pragma once
#include "Shape.h"

class Circle : public Shape
{
public:
	Circle(std::string color);
	void draw() override;
};

