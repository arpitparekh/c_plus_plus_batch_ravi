#include<iostream>

#define PI 3.14

using namespace std;

enum DAY                    // enum must be declared
{
    a=20,
    b,
    c
};

int main()
{

    // enum is a group of constant
    enum DAY ravi = c;                    // enum day type variable
    cout << ravi << endl;

    return 0;
}