#include "Circle.h"

Circle::Circle(int sideA): Shape(sideA){}

void Circle::Draw()
{
    std::cout << "Draw in derived class Circle" << std::endl;
}