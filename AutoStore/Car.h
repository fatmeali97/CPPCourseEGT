#pragma once
#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
	Car(string brand, string model, string type, string color, string vin,
		string plate, string fuelPerKm);

	void setBrand(string brand);
	void setModel(string model);
	void setType(string type);
	void setColor(string color);
	void setVin(string vin);
	void setPlate(string plate);
	void setFuel(string fuelPerKm);
	void setTaxPerDay(double taxPerDay);
	void setPassedDistance(double passedDistance);

	double getPassedDistance();
	double getTaxPerDay();

	virtual double GetDistanceBasedDiscount();
	virtual double CalculateCarPrice();

private:
	string brand;
	string model;
	string type;
	string color;
	string vin;
	string plate;
	string fuelPerKm;

	double taxPerDay;
	double passedDistance;
	//double carPrice;

};