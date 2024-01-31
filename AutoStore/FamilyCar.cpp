#include "FamilyCar.h"

FamilyCar::FamilyCar(string brand, string model, string type, string color,
    string vin, string plate, string fuelPerKm,
    double taxPerDay, double passedDistance) : Car(brand, model, type, color, vin, plate,
        fuelPerKm)
{
    this->setTaxPerDay(taxPerDay);
    this->setPassedDistance(passedDistance);
}

double FamilyCar::GetDistanceBasedDiscount()
{
    double discount = 0;

    if (getPassedDistance() >= 500)
    {
        discount = getPassedDistance() * 0.4;
        cout << "if";
    }
    else
    {
        discount = getPassedDistance() * 0.7;
        cout << "else";

    }

    return discount;
}

double FamilyCar::CalculateCarPrice()
{
    double carPrice = getTaxPerDay() * GetDistanceBasedDiscount();
    return carPrice;
}
