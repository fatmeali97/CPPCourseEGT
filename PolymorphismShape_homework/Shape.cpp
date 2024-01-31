#include "Shape.h"

Shape::Shape(int sideA)
{
    SetA(sideA);
}


void Shape::SetA(int sideA)
{
    this->a = sideA;
}

int Shape::GetA() {
    return this->a;
}



void Shape::Draw() {
    std::cout << "Draw in base class Shape" << std::endl;
}