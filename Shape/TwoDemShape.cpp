#include <iostream>
using namespace std;
#include "TwoDemShape.h"

TwoDemShape::TwoDemShape(int sideA,
    string position,
    int size,
    string fill) : Shape(sideA) 
{
    this->b = b;
    this->position = position;
    this->size = size;
    this->fill = fill;
}



void TwoDemShape::print() {
    cout << "in two demention shape" << endl;
}

double TwoDemShape::getArea()
{
    cout << "In two demention shape area" << endl;
    return 0;
}


void TwoDemShape::setB(int b)
{
    this->b = b;
}

int TwoDemShape::getB()
{
    return this->b;
}



string TwoDemShape::ShapeOf()
{
    string shapeType;
    cout << "what type of shape you want?";
    cin >> shapeType;
    cout << " the shape you want is ";

    return shapeType;
}



void TwoDemShape::SetPosition(string position)
{
    this->position = position;
}

int TwoDemShape::SetSize(int size)
{
    return size;
}


void TwoDemShape::SetFill(string fill)
{
    this->fill = fill;
}
