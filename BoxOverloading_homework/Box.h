#pragma once
#include <iostream>
using std::ostream;

class Box {
public:
	Box();
	Box(double lenght, double height, double width);

	void SetLenght(double lenght);
	double GetLenght();

	void SetHeight(double height);
	double GetHeight();

	void SetWidth(double width);
	double GetWidth();

	Box operator+(Box b);

private:
	double m_lenght;
	double m_height;
	double m_width;
};