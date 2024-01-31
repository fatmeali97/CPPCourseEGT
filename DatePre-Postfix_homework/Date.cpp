#include <iostream>
#include "Date.h"
#include <string>
using namespace std;

const int Date::days[] =
{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

Date::Date(int d, int m, int y)
{
    setDate(d, m,  y);
} 

void Date::setDate(int dd,  int mm,  int yy)
{
    month = (mm >= 1 && mm <= 12) ? mm : 1;
    year = (yy >= 1900 && yy <= 2100) ? yy : 1900;

    if (month == 2 && leapYear(year))
        day = (dd >= 1 && dd <= 29) ? dd : 1;
    else
        day = (dd >= 1 && dd <= days[month]) ? dd : 1;
}

Date& Date::operator++()
{
    helpIncrement(); 
    return *this; 
} 


Date Date::operator++(int)
{
    Date temp = *this; 
    helpIncrement();
   
    {
        return temp;
    }
}

Date& Date::operator--()
{
    helpDecreament();
    return *this;
}

Date Date::operator--(int)
{
    Date temp = *this;
    helpIncrement();

    {
        return temp;
    }
}

const Date& Date::operator+=(int additionalDays)
{
    for (int i = 0; i < additionalDays; i++)
        helpIncrement();

    return *this; 
} 


bool Date::leapYear(int testYear) const
{
    if (testYear % 400 == 0 ||
        (testYear % 100 != 0 && testYear % 4 == 0))
        return true; 
    else
        return false; 
} 

bool Date::endOfMonth(int testDay) const
{
    if (month == 2 && leapYear(year))
        return testDay == 29;
    else
        return testDay == days[month];
} 

void Date::helpIncrement()
{
  
    if (!endOfMonth(day))
        day++; 
    else
        if (month < 12)
        {
            month++; 
            day = 1;
        }
        else 
        {
            year++;
            month = 1; 
            day = 1; 
        } 
} 


void Date::helpDecreament()
{
    if (!endOfMonth(day))
        day--; 
    else
        if (month < 12) 
        {
            month--; 
            day = 1; 
        } 
        else 
        {
            year--; 
            month = 1; 
            day = 1; 
        } 
} 


ostream& operator<<(ostream& output, const Date& d)
{
    static string monthName[13] = { "", "January", "February",
     "March", "April", "May", "June", "July", "August",
      "September", "October", "November", "December" };

    output << d.day << ' ' << monthName[d.month] << ", " << d.year;
    return output; 
} 


