#pragma once
#include <iostream>
using std::ostream;

class Date
{
	friend ostream& operator<<(ostream&,
		const Date&);
public:
	Date(int d = 1, 
		int m = 1, 
		int y = 1900);
	void setDate(int, int, int);
	
	Date& operator++();
	Date operator++(int); 
	Date& operator--(); // prefix decreament operator
	Date operator--(int); // postfix decreament operator
	const Date& operator+=(int); 
	bool leapYear(int) const; 
	bool endOfMonth(int) const; 

private:
	int month;
	int day;
	int year;


	static const int days[];
	void helpDecreament(); 
	void helpIncrement(); 
}; // end class Date




