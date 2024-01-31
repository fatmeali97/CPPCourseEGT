#pragma once
#include "Author.h"
using namespace std;

class Book {
public:

	Book(Author author, string bookName, int year);

	void setBook(string bookName);
	void setYear(int year);
	string getBook();
	int getYear();
	//string findBookByName();
	void print();



private:
	Author author;
	string bookName;
	//Genre genre;
	int year;
};