#include "Rectagle.h"

Rectagle::Rectagle(double width,
    double height):
    width(width),
    height(height)
{}

double Rectagle::area()
{
    double area = (2 * width) + (2 * height);
    return area;
}
