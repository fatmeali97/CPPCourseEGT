#pragma once
#include <string>

class Shape
{
public:
	Shape(std::string color);
	virtual void draw();
	virtual double area() = 0;
	virtual ~Shape();

protected:
	std::string color;
};

