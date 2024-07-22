#include <iostream>

using namespace std;

class Base
{

public:
    int x;

private:
    int y;

protected: // only accessible inside a sub class
    int z;
};

class PublicDerived : public Base
{
    // x is public
    // z is protected
    // y is not accesible

    void print()
    {
        cout << x << endl;
        cout << z << endl;
    }
};

class ProtectedDerived : protected Base
{
    // x is protected
    // z is protected
    // y is not accesible

    void print()
    {
        cout << x << endl;
        cout << z << endl;
    }
};

class PrivateDerived : private Base
{
    // x is private
    // z is private
    // y is not accesible

    void print()
    {
        cout << x << endl;
        cout << z << endl;
    }
};

int main()
{

    // public
    // private
    // protected
    // access modifiers

    Base b;
    b.x = 23;
    cout << "Only Accesible : " << b.x << endl;

    PublicDerived p1;
    ProtectedDerived p2;
    PrivateDerived p3;

    return 0;
}