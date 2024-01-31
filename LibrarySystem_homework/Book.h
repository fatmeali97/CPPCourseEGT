#pragma once
#include <string>
#include <iostream>
using namespace std;

class Book
{
public:
	Book(string title,
		string author,
		string isbn);

	//making set (to set the value we writed) and get (to get it when we need it )
	void SetTitle(string title);
	string GetTitle() const; // const because, we need to be sure that always be the value  that we set;

	void SetAuthor(string author);
	string GetAuthor() const;

	void SetISBN(string isbn);
	string GetISBN();

	void display();

private:
	string title;
	string author;
	string isbn;
};

