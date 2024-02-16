#pragma once
#include <string>

class Book
{
public:
	Book(std::string title, std::string author, int pages); //constructor from attributes;
	void display();

private:
	std::string title;
	std::string author;
	int pages;
};

