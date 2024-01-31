
#include "ThreeDemShape.h"


ThreeDemShape::ThreeDemShape(int sideA, int h) : Shape(sideA) {
    this->h = h;
}


void ThreeDemShape::setH(int h)
{
    this->h = h;
}

int ThreeDemShape::getH() {
    return this->h;
}


double ThreeDemShape::getArea()
{
    cout << "in shape is in 3D the area " << endl;
    return 0;
}

int ThreeDemShape::getVolume()
{
    cout << "in shape is in 3D the volume" << endl;
    return getH() * getA();
}

void ThreeDemShape::print() {
    cout << "In 3D shape " << endl;
}