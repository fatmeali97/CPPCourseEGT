#include "Car.h"

Car::Car(string brand, string model, string type, string color, string vin,
	string plate, string fuelPerKm)
{
	this->setBrand(brand);
	this->setColor(color);
	this->setFuel(fuelPerKm);
	this->setModel(model);
	this->setType(type);
	this->setVin(vin);
	this->setPlate(plate);
}

void Car::setBrand(string brand)
{
	this->brand = brand;
}

void Car::setModel(string model)
{
	this->model = model;
}

void Car::setType(string)
{
	this->type = type;
}

void Car::setColor(string color)
{
	this->color = color;
}

void Car::setVin(string vin)
{
	this->vin = vin;
}

void Car::setPlate(string plate)
{
	this->plate = plate;
	this->plate = plate;
}

void Car::setFuel(string fuelPerKm)
{
	this->fuelPerKm = fuelPerKm;
}

void Car::setTaxPerDay(double taxPerDay)
{
	this->taxPerDay = taxPerDay;
}

void Car::setPassedDistance(double passedDistance)
{
	this->passedDistance = passedDistance;
}

double Car::GetDistanceBasedDiscount()
{
	double discount = 0;
	return discount;
}


double Car::CalculateCarPrice()
{
	double carPrice = taxPerDay * GetDistanceBasedDiscount();
	return carPrice;
}

double Car::getPassedDistance()
{
	if (passedDistance > 0)
		return passedDistance;
}

double Car::getTaxPerDay()
{
	return taxPerDay;
}

