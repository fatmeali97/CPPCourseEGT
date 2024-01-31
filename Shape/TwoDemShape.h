#pragma once
#include "Shape.h"
#include <iostream>
using namespace std;

class TwoDemShape : public Shape
{
public:

    TwoDemShape(int sizeA, string position, int size, string fill);

    double getArea() override;
    void print() override;

    string ShapeOf();
    void setB(int b);
    int getB();

    void SetPosition(string position);
    int SetSize(int size);
    void SetFill(string fill);

private:
    int b;
    string position;
    int size;
    string fill;
    
};

