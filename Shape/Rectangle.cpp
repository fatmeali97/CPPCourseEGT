#include "Rectangle.h"

Rectangles::Rectangles(int sideA, 
    int b,
    string position, 
    int size,
    string fill) 
    : TwoDemShape(sideA, position, size, fill)
{
    setB (b);
}


void Rectangles::setB(int b)
{
    this->b = b;
}

int Rectangles::getB()
{
    return this->b;
}


void Rectangles::print()
{
    cout << "this is rectangle" << endl;
}


double Rectangles::getArea()
{
    return this->getA() * this->getB();
}