#pragma once
#include <iostream>


class Shape {
public:
    Shape(int sideA);

    void SetA(int);
    int GetA();
    virtual void Draw();

private:
    int a;
};



