#include "Book.h"
#include <iostream>

Book::Book(std::string title,
	std::string author,
	int pages):
	title(title),
	author(author),
	pages(pages){}

void Book::display()
{
	std::cout << "The title of the book is: " << this->title
		<< " the auhor is: " << this->author << " the book have "
		<< this->pages << " pages." << std::endl;

	//
}
