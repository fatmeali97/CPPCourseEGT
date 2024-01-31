//Задача 2: Напише следния код :
//Имплементирайте следната йерархия :
//Напишете програма на C++ в която е имплементирана проста йерархия от класове,
//  за да демонстрирате наследяване и полиморфизъм.
//Например : Може да създадете базов клас Shape с метод draw(), 
// и класове Circle and Rectangle, които да “override” - нат метода draw().
//Използвайте указател(pointer) в примера.

#include <iostream>
#include "Circle.h"
#include "Rectangle.h"


int main()
{
	Shape* shp1 = new Circle(3);
	Shape* shp2 = new Rectangle(4,3);
	Shape* shp3 = new Shape(7);

	shp1->Draw();
	shp2->Draw();
	shp3->Draw();
}
