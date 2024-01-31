#include "Member.h"

Member::Member(string name, int age, string memberID)
{
    SetName(name);
    SetAge(age);
    SetMemberID(memberID);
}

void Member::SetName(string name)
{
    this->name = name;
}

string Member::GetName() const
{
    return this->name;
}

void Member::SetAge(int age)
{
    this->age = age;
}

int Member::GetAge() const
{
    return this->age;
}

void Member::SetMemberID(string memberID)
{
    this->memberID = memberID;
}

string Member::GetMemberID()
{
    return this->memberID;
}

void Member::display()
{
    cout << "The Library member data: " 
        << GetName()  << ", " 
        << GetAge() << ", " 
        <<  GetMemberID() << endl;
}

void Member::borrowBook(Book* book)
{
        borrowedBook = book;
        cout << GetName() << " successfully borrowed the book: " << book->GetTitle() << endl;
}


