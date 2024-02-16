#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
public:
	Rectangle(std::string color,
		double width,
		double height);
	void draw() override;
	virtual double area()  override;

private:
	double width;
	double height;
};

