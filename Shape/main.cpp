#include <iostream>
#include <vector>
#include "Shape.h"
#include "TwoDemShape.h"
#include "ThreeDemShape.h"

#include "Rectangle.h"

using namespace std;

int main() {

    // Shape *sPtr1 = new TwoDemenssionShape(30);
    Shape* sPtr1 = new ThreeDemShape(30, 2);
    Shape* sPtr2 = new ThreeDemShape(15, 20);
    Shape* sPtr3 = new Rectangles(10, 15, "left", 210, "pink");

    vector<Shape*> myShapes;

    myShapes.push_back(sPtr1);
    myShapes.push_back(sPtr2);
    myShapes.push_back(sPtr3);


    for (int i = 0; i < myShapes.size(); ++i)
    {
        myShapes.at(i)->print();
        double area = myShapes.at(i)->getArea();
        cout << area << endl;
    }

    return 0;
}
