#pragma once
#include "Shape.h"

class ThreeDemShape : public Shape
{

public:

    ThreeDemShape(int sideA, int h);
    double getArea() override;
    void print() override;
    int getVolume();

    void setH(int);
    int getH();

private:
    int h;

};

