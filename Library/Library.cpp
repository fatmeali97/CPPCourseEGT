#include "Library.h"

void Library::addBookToVector(Book b)
{
	this->books.push_back(b);
}

void Library::printVector()
{
	//for (int i : arr)
	//{
	//}

	for (Book book : books)
	{
		book.print();
	}
}

void Library::findBook(string text) {
	for (Book book : books)
	{
		//if (book.getBook().find(text) != string::npos)

		if (book.getBook().find(text) != -1)
		{
			cout << "We found the book" << endl;
			book.print();

		}
	}
}