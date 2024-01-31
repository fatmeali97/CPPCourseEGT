
#include <iostream>
#include "Book.h"
#include "Member.h"
#include <vector>

int main()
{
	Book book1("The notebook", "Nicolas Sparks", "A2458");
	Book book2("Alaska", "James A. Michener", "B2458");

	Member member1("Nicole", 26, "0124");
	Member member2("Maya", 30, "0125");

	//initializing vector of book with pointer
	vector<Book*> books;

	//adding book to the vector of ;
	//the book is with &, because we have made vector of pointer for Book;
	books.push_back(&book1);
	books.push_back(&book2);

	vector<Member> members;

	//adding member in vector of members
	members.push_back(member1);
	members.push_back(member2);

	//vector of members on index 0 borrow from vector of book index 1;
	members[0].borrowBook(books[1]);
	//vector of members on index 1 borrow from vector of book index 0;
	members[1].borrowBook(books[0]);


	return 0;
}
