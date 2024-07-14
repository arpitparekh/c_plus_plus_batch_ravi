#include <iostream>

using namespace std;

class Car
{

public:
    string name = "";
    string model_name = "";
    int price = 0;
    int mileage = 0;

    Car(string n, string n1, int p, int m) // assgning a property using contructor
    {
        name = n;
        model_name = n1;
        price = p;
        mileage = m;
    }

    Car()
    {
    }

    ~Car()
    {
        cout << "Object is destroyed" << endl;
    }
};

int main()
{

    Car car1("BMW", "S3", 2000000, 10);

    cout << car1.name << endl;
    cout << car1.model_name << endl;
    cout << car1.price << endl;
    cout << car1.mileage << endl;

    return 0;
}