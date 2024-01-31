#pragma once
#include "Book.h"
#include <vector>

class Library {
public:
	void addBookToVector(Book);
	void printVector();
	void findBook(string);

private:
	vector<Book> books;
};