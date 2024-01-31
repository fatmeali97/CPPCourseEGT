#pragma once

#include "Car.h"
class LuxuryCar : public Car
{
public:
	LuxuryCar(string brand, string model, string type, string color, string vin,
		string plate, string fuelPerKm, double taxPerDay, double passedDistance,
		double luxPrice);

	void setLuxPrice(double luxPrice);
	double getLuxPrice();
	virtual double GetDistanceBasedDiscount();
	virtual double CalculateCarPrice();

private:
	double luxPrice;


};