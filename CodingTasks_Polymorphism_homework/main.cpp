#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectagle.h"

void printArea(Shape* Ptr)
{
    std::cout << Ptr->area() << std::endl;
}

int main()
{
    Shape* c1 = new Circle(3);
    Shape* r1 = new Rectagle(6, 9);

    printArea(c1);
    printArea(r1);
}
