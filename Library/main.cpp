#include <iostream>
using namespace std;

#include "Book.h"
#include "Author.h"
#include "Library.h"

int main()
{



	Author a1("Leo", "Smith", "bulgarian");
	Author a2("John", "Brown", "american");
	Book book1(a1, "Beautifull world", 1987);
	Book book2(a2, "2 world", 1994);


	Library library;

	library.addBookToVector(book1);
	library.addBookToVector(book2);
	library.findBook("Beautifull");

	return 0;
}

