#include <iostream>
#include "Circle.h"
#include "Rectangle.h"


void printArea(Shape* Ptr)
{
	std::cout << Ptr->area() 
		<< std::endl;
}

int main()
{
	Shape* c1 = new Circle("red", 3);
	Shape* r1 = new Rectangle("blue", 6, 8);

	printArea(c1);
	printArea(r1);
	
	return 0;
}

