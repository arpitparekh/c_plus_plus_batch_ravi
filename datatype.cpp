#include<iostream>

using namespace std;

// default

int main(){

    cout << "Lets Learn Datatypes in C++" << endl;
    cout << "Arambh he prachand" << endl;

    // short s;                   // 2 byte
    // int a;                     // 4 byte
    // long l;              // atleast 4 byte
    // long long l1;        // 8 byte
    // float f;                // 4 byte
    // double d;          // 8 byte
    // long double ld;  // 12 bytes
    // char ch;                  // 1 byte
    // bool b;                 // only 2 values true false
    // string name;         // 6 byte

    // cout << "Enter Short Value : ";
    // cin >> s;
    // cout << "Enter Int Value : ";
    // cin >> a;
    // cout << "Enter Long Value : ";
    // cin >> l;
    // cout << "Enter Long Long Value : ";
    // cin >> l1;
    // cout << "Enter Float Value : ";
    // cin >> f;
    // cout << "Enter Double Value : ";
    // cin >> d;
    // cout << "Enter Long Double Value : ";
    // cin >> ld;
    // cout << "Enter Char Value : ";
    // cin >> ch;
    // cout << "Enter Boolean Value : ";
    // cin >> b;
    // getchar();
    // cout << "Enter String Value : ";   // can not take string like this
    // // cin >> name;
    // getline(cin, name); // take input from user in string

    // cout << "\n";

    // cout << s << endl;
    // cout << a << endl;
    // cout << l << endl;
    // cout << l1 << endl;
    // cout << f << endl;
    // cout << d << endl;
    // cout << ld << endl;
    // cout << ch << endl;
    // cout << b << endl;
    // cout << name << endl;

    // operators

    // arithmetic operator + - * / %
    // assignment operator += -= *= /= %=
    // conditional operator < > <= >= ==
    // logical operators  &&  ||
    // ?: ternary operator

    int num = 12;
    num %= 10;
    cout << num << endl;

    int num1 = 12;
    int num2 = 13;

    cout << (num1 == num2  || num1<num2) << endl;

    int a1 = 1;
    int b1 = 4;
    cout << (b1 += a1 -= 6) <<  endl;   // operator associativity

    int c1 = a1 + b1 + a1 + b1;  // b1 = -1 // a1 = -5

    cout << c1 << endl;

    return 0;
}