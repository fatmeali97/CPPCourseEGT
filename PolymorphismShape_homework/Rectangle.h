#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
public:
	Rectangle(int sideA, int sideB);

	void SetB(int sideB);
	int GetB();
	virtual void Draw() override;

private:
	int b;
};

