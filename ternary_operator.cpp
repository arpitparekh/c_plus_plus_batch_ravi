#include<iostream>

using namespace std;

int main(){

    // ?  :  // ternary operator

    int a = 12;

    a < 15 ? cout << a << " is less then 15" << endl : cout << a << " is greater then 15" << endl;

    // one liners

    // find max from 3 numbers

    int x = 100;  // nikado
    int y = 12;
    int z = 99;

    x > y && x > z ? cout << "X moto che " : y < z ? cout << "Z moto che "
                                                 : cout << "Y moto che ";

    return 13;
}