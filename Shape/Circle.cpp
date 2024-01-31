
#include <iostream>
using namespace std;
#include "Circle.h"


Circle::Circle(int sideA,
	int r,
	int p,
	string position,
	int size,
	string fill)
	: TwoDemShape(sideA, position, size, fill)
{
	setR(r);
	this->p = p;
}


void Circle::setR(int r)
{
	this->r = r;
}

int Circle::getR()
{
	return this->r;
}


void Circle::print()
{
	cout << "this is circle" << endl;
}


double Circle::getArea()
{
	cout << "this is circle area" << endl;
	return 0;
}