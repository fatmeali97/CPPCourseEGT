#pragma once
#include "Shape.h"

class Circle : public Shape
{
public:
	Circle(std::string color, double radius);
	void draw() override;
	virtual double area()  override;

private:
	double radius;
};

