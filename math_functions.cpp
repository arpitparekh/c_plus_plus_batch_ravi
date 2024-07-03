#include<iostream>
#include<cmath>

using namespace std;

int main(){

    // math functions

    cout << abs(-12) << endl;
    cout << pow(2, 3) << endl;
    cout << sqrt(16) << endl;
    cout << cbrt(64) << endl;
    cout << fma(2, 3, 5) << endl;
    cout << remainder(10,5) << endl;
    cout << 10%5 << endl;
    cout << exp2(5) << endl;
    cout << log(5) << endl;   // e
    cout << log2(5) << endl;  // 2
    cout << log10(5) << endl; 
    cout << ceil(5.9) << endl;
    cout << floor(5.9) << endl;
    cout << round(5.4) << endl;  // proper round function

    return 0;
}