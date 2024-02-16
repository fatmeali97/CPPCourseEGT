#pragma once
#include "Shape.h"
class Circle : public Shape
{
public:
	Circle (double radius);
	virtual double area()  override;

private:
	double radius;
};

