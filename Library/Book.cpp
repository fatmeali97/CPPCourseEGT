#include "Book.h"
#include <iostream>
using namespace std;

Book::Book(Author author, string bookName, int year) : author(author)
{
    setBook(bookName);
    setYear(year);
}


void Book::setBook(string bookName)
{
    this->bookName = bookName;
}

void Book::setYear(int year)
{
    this->year = year;
}

string Book::getBook()
{
    return this->bookName;
}


int Book::getYear()
{
    return this->year;
}

//string Book::findBookByName()
//{
//    return string();
//}

void Book::print()
{
    cout << getBook() << " is written "
        << getYear() << " by " << this->author.getName() << endl;
}
