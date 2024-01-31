#pragma once
#include <string>

class Drinks
{
public:
	Drinks(std:: string name, double price, double quantity,std::string type);
	void SetName(std::string name);
	void SetPrice(double price);
	void SetQuantity(double quantity);
	void SetType(std::string type);

	std::string GetName();
	double GetQuantity();
	double GetPrice();
	virtual double CalculatePrice();
	virtual void print();

private:
	std::string m_name;
	double m_price;
	double m_quantity;
	std::string m_type;


};

