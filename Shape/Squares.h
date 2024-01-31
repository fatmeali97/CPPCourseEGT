#pragma once

#include "TwoDemShape.h"

#include <iostream>
using namespace std;

class Square : public TwoDemShape {
public:
	Square(int sideA, string position, int size, string fill);

	virtual double getArea();
	virtual void print();

};

