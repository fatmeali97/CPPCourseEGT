#pragma once
#include <iostream>
#include <string>

using namespace std;

class Author {
public:
	Author(string name, string lastName, string nationality);

	void setName(string name);
	void setLastName(string lastName);
	void setNationality(string nationality);
	string getName();
	string getLastName();
	string getNationality();

private:
	string name;
	string lastName;
	string nationality;
};



