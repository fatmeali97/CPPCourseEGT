#include "Shape.h"

Shape::Shape(int sideA)
{
    setA(sideA);
}


void Shape::setA(int sideA)
{
    this->a = sideA;
}

int Shape::getA() {
    return this->a;
}


double Shape::getArea()
{
    return this->a;
}


void Shape::print() {
    cout << "in Shape thr sade is" << this->a << endl;
}