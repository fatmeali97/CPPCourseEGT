#pragma once

#include "Car.h"
class FamilyCar : public Car
{
public:
	FamilyCar(string brand, string model, string type, string color, string vin,
		string plate, string fuelPerKm, double taxPerDay, double passedDistance);

	virtual double GetDistanceBasedDiscount();
	virtual double CalculateCarPrice();

};