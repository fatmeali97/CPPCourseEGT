#include "LuxuryCar.h"

LuxuryCar::LuxuryCar(string brand, string model, string type, string color,
    string vin, string plate, string fuelPerKm,
    double taxPerDay, double passedDistance, double luxPrice) : Car(brand, model, type, color, vin, plate,
        fuelPerKm)
{
    this->setTaxPerDay(taxPerDay);
    this->setPassedDistance(passedDistance);
    this->setLuxPrice(luxPrice);
}


void LuxuryCar::setLuxPrice(double luxPrice)
{
    if (luxPrice <= 3)
    {
        this->luxPrice = luxPrice;
    }

}

double LuxuryCar::getLuxPrice()
{
    if (luxPrice == 1)
    {
        this->luxPrice = 40;
        cout << "you choose chocolate" << endl;
    }
    else if (luxPrice == 2)
    {
        this->luxPrice = 50;
        cout << "you choose wine" << endl;
    }
    else if (luxPrice == 3)
    {
        this->luxPrice = 100;
        cout << "you choose champagne" << endl;
    }
    else {
        cout << "choose between 1, 2, 3" << endl;
    }

    return luxPrice;
}

double LuxuryCar::GetDistanceBasedDiscount()
{
    double discount = 0;

    if (getPassedDistance() >= 200)
    {
        discount = getPassedDistance() * 0.4;

    }
    else
    {
        discount = getPassedDistance() * 0.6;

    }

    return discount;
}

double LuxuryCar::CalculateCarPrice()
{
    double carPrice = (getTaxPerDay() * GetDistanceBasedDiscount()) +
        getLuxPrice();
    return carPrice;
}
