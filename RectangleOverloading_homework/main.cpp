
#include <iostream>
#include "Rectangle.h"

int main()
{

	Rectangles r1(5, 8, "left", 20, "brown");
	Rectangles r2(5, 8, "left", 20, "brown");

	if (r1 == r2) {
		cout << r1.getArea() << " is equal to " << r2.getArea() << endl;
	}

	if (r1 <  r2) {
		cout << r1.getArea() << " is lesst than  " << r2.getArea() << endl;
	}

	if (r1 > r2) {
		cout << r2.getArea() << " is lesst than " << r1.getArea() << endl;
	}

	return 0;
}