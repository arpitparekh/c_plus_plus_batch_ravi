// inheritance
// varso
// we can access one class properties and functions into another class

#include <iostream>

using namespace std;

class Animal
{ // parent  // base

public:
    string name;
    string breed;
    int height;

    void eat()
    {
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal
{ // child  // derived class
};

int main()
{

    Dog d1;
    d1.name = "rotvier";
    d1.breed = "German";
    d1.height = 20;

    // i'm accessing parent class propery using child class

    cout << d1.name << endl;
    cout << d1.breed << endl;
    cout << d1.height << endl;
    d1.eat();

    return 0;
}