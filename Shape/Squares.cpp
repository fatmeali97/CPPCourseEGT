#include "Squares.h"

Square::Square(int sideA, string position, int size, string fill) 
    : TwoDemShape(sideA, position, size, fill) {}


void Square::print()
{
    cout << "this is square" << endl;
}


double Square::getArea()
{
    return this->getA() + this->getA();
}