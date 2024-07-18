#include <iostream>

using namespace std;

class Collge
{

    // atributes and function
    // atritutes = variable and datatypes data memebers
    // function member fuction
    // object is a bundle

public:
    int no_student = 10; // default values of class variables
    string name = "Nirma";

    void display()
    {
        cout << "From Display Fucntion" << endl;
    }
};

int main()
{
    Collge c;

    cout << c.name << endl;
    cout << c.no_student << endl;

    c.display();

    Collge c1;
    getline(cin, c1.name);
    cin >> c1.no_student;
    cout << c1.name << endl;
    cout << c1.no_student << endl;

    c1.display();

    return 0;
}