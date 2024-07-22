// method overloading
// method overriding  // inheritance

#include <iostream>

using namespace std;

class P
{
public:
    void show()
    {
        cout << "parent class" << endl;
    }
};

class Q : public P
{
public:
    void show()
    {
        cout << "child class" << endl;
    }
};

int main()
{
    Q q;
    q.show();
    q.P::show(); // :: scope  operator

    // child can access parent's scope

    P p;
    p.show();

    return 0;
}
