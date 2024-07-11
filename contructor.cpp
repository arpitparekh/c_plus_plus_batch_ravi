#include <iostream>

using namespace std;

class Vehicle
{

    string type;
    string name;

    // contructor
    // is type of fucntion which calls automatically when we create an object of that class
    // and class is same
    // there is no return type in constructor

public:
    Vehicle() // default contructor
    {
        cout << "This is Conctructor" << endl;
    }
};

int main()
{
    Vehicle v;

    return 0;
}