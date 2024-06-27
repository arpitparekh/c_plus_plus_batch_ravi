#include<iostream>
#define PI 3.14     // global constant
#define jimit float // give custom name to datatype  // User-Defined Literals

using namespace std;

int main(){

    int a = 34;
    a = 45;

    cout << "Value is " << a << "\n";
    cout << "Value is " << PI << endl;

    cout << "Enter Radius of Circle" << endl;
    double radius;
    cin >> radius;

    double area = radius * radius * PI;

    cout << "Area of circle is " << area << endl;

    const int num = 34;   // local constant

    jimit value = 45.45;

    cout << value << endl;
}