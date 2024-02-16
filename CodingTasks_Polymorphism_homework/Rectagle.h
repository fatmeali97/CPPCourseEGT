#pragma once
#include "Shape.h"
class Rectagle : public Shape
{
public:
	Rectagle(double width, double height);
	virtual double area()  override;

private:
	double width;
	double height;
};

