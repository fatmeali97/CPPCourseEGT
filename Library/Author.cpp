#include "Author.h"

Author::Author(string name, string lastName, string nationality) : name(name), lastName(lastName), nationality()
{
}

void Author::setName(string name)
{
    this->name = name;
}

void Author::setLastName(string lastName)
{
    this->lastName = lastName;
}

void Author::setNationality(string nationality)
{
    this->nationality = nationality;
}

string Author::getName()
{
    return this->name;
}

string Author::getLastName()
{
    return this->lastName;
}

string Author::getNationality()
{
    return this->nationality;
}
