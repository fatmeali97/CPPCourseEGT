#pragma once
#include <string> // uing tring library
#include <iostream> // output input stream
using namespace std;
#include "Book.h" // include also book because we need to make a object of it

class Member
{

public:
	Member(string name,
		int age,
		string memberID);
	void SetName(string name);
	string GetName() const;

	void SetAge(int age);
	int GetAge() const;

	void SetMemberID(string memberID);
	string GetMemberID();

	void display();
	void borrowBook(Book* book);

private:
	string name;
	int age;
	string memberID;
	Book* borrowedBook; // borrowed book; object of poiter of Class Book;

};



