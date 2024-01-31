
#include <iostream>
#include "Car.h"
#include "FamilyCar.h"
#include "LuxuryCar.h"

using namespace std;

int main()
{
	Car car1("audi", "rs6", "sport", "blue", "45Fvss", "XA2054BA",
		"10km");

	FamilyCar fcar1("audi", "rs6", "sport", "blue", "45Fvss", "XA2054BA",
		"10km", 12, 500);

	LuxuryCar lcar1("audi", "rs6", "sport", "blue", "45Fvss", "XA2054BA",
		"10km", 12, 500, 1);

	cout << lcar1.getTaxPerDay() << endl;
	cout << lcar1.getPassedDistance() << endl;

	cout << lcar1.GetDistanceBasedDiscount() << endl;

	cout << lcar1.CalculateCarPrice() << endl;

	return 0;
}

