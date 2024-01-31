#pragma once
#include <iostream>
using namespace std;

class Shape {
public:
    Shape(int sideA);
    virtual double getArea();
    virtual void print();

    void setA(int);
    int getA();

private:
    int a;
};



