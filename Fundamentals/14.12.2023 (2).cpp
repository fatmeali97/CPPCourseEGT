// Класове и обекти

#include <iostream>
#include <string>
using namespace std;

// марка, модел, година на производство, вид гориво, вин, цвят, скоротстна кутия;


class Car
{
public: 
    
    // конструктура се вика само 1 път при създаване на обекта

    Car(string model, int year, string color, string fuel, string vin, string transmission, string plate)
    {
        this->model = model;
        setYear(year);
        // this->year = year;
        this->color = color;
        this->fuel = fuel;
        this->vin = vin;
        this->transmission = transmission;
        this->plate = plate;
    }

    void SetModel(string model) // сетър
    {
        this->model = model;
    }   

    string getModel() 
    {
        return this->model;
    }

    void setYear (int year) // void няма return statement
    {
        if (year > 1970 && year < 2024)
        {
            this->year = year;
        }
        else 
        {
            this->year = 0;

            cout << " invalid year. Year must be between 1970 and 2024." << endl;
        } 

    }

    int getYear()
    {
        return this->year;

    }

    void DisplayMessage()
    {
        cout << "Model " << model << " year is " << year << " color " << color << endl;
    }

private: 
    string model;
    int year;
    string color;
    string fuel;
    string vin;
    string transmission;
    string plate;
};



main() {
    
    Car firstCar(); // обект от клас кар;
    Car firstCar("citroen", 2020 , "green", "diesel", "1457d" ,"auto", "X 6510 KA"); // когато имаме контуктор;
    //firstCar.setYear(1997);  въвеждайки я тук, променяме стойността и;
    Car SecondCar("honda", 2023 , "black", "electric", "1457d" ,"auto", "X 0550 KA"); // когато имаме контуктор;

    // string model;
    // cout << "Enter car model: ";
    // cin >> model;
    // firstCar.SetModel("model");

    // cout << "Enter your car year";
    // int year;
    // cin >> year;

    // firstCar.setYear(year);

    // firstCar.DisplayMessage();
    // SecondCar.DisplayMessage();

    // string carModel = firstCar.getModel();
    // cout << "Car Model " << carModel;

    // int carYear = firstCar.getYear();
    // cout << "Car year is: " << carYear;


    return 0;
}

// направи клас със сетъри и гетъри - студент - име, фамилия, години, дата на раждане и т.н







