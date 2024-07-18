#include <iostream>

using namespace std;

class Library
{
public:
    string name;
    string department;
    string librarian;
    int no_books;

    void reading()
    {
        cout << "Reading" << endl;
    }
};

class Books : public Library
{

public:
    string book_name;
    string author;
    int no_pages;

    Books(string name, string d, string l, int no, string book_name, string a, int no1)
    {
        this->name = name;
        department = d;
        librarian = l;
        no_books = no;
        this->book_name = book_name;
        author = a;
        no_pages = no1;
    }

    void display()
    {
        cout << "Name of the Library : " << name << endl;
        cout << "Department : " << department << endl;
        cout << "Librarian : " << librarian << endl;
        cout << "No. of Books : " << no_books << endl;
        cout << "Book Name : " << book_name << endl;
        cout << "Author : " << author << endl;
        cout << "No. of Pages : " << no_pages << endl;
    }
};

int main()
{

    Books b1("Central Library", "Computer Science", "Rajesh", 100, "C++ Programming", "Mc Grow Hill", 300);
    b1.display();

    return 0;
}