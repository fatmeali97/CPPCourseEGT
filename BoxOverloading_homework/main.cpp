
#include <iostream>
#include "Box.h"

int main()
{
	Box box1 (6, 6, 6);
	Box box2(4, 4, 4);
	Box box3;

	box3 = box1 + box2;
	std::cout << box3.GetHeight();
}
