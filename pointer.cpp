#include<iostream>

using namespace std;

int main(){

    // pointer is used to store a location of other vairables

    int a = 12;
    int *p = &a;

    cout << p << endl;
    cout << *p << endl;

    return 0;
}