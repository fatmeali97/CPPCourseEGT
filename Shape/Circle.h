#pragma once
#include "TwoDemShape.h"
#include <iostream>
using namespace std;

class Circle : public TwoDemShape {
public:

	Circle(int sideA, int r, int p, string position, int size, string fill);

	virtual double getArea();
	virtual void print();
	void setR(int b);
	int getR();



private:
	int r;
	int p;

};