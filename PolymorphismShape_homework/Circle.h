#pragma once
#include "Shape.h"
class Circle : public Shape
{
public: 
	Circle(int sideA);
	virtual void Draw() override;

private:
};

