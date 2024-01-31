#include "Book.h"

Book::Book(string title, string author, string isbn)
{    
    SetTitle(title);
    SetAuthor(author);
    SetISBN(isbn);
}

void Book::SetTitle(string title)
{
    this->title = title;

}

void Book::SetAuthor(string author)
{
    this->author = author;
}

string Book::GetAuthor() const
{
    return this->author;
}

void Book::SetISBN(string isbn)
{
    this->isbn = isbn;
}


string Book::GetTitle() const
{
    return this->title;
}


string Book::GetISBN()
{
    return this->isbn;
}

void Book::display()
{
    cout << "The book title is: " << GetTitle()
        << " writen by: " << GetAuthor()
        << " with ISBN code:  " << GetISBN() << endl;
}
