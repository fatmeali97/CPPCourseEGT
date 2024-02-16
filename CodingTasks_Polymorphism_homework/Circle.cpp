#include "Circle.h"

Circle::Circle(double radius): radius(radius)
{}

double Circle::area()
{
	double pi = 3.14;
	double area = radius * radius * pi;
	return area;
}
