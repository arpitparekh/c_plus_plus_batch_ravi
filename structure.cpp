#include<iostream>

using namespace std;

// strcuture is a group of datatype under single datatype name

struct Person
{
    string name;
    int age;
    float height;

}p;

int main(){

    getline(cin, p.name);
    cin >> p.age;
    cin >> p.height;

    cout << "Name is " << p.name << endl;
    cout << "Age is " << p.age << endl;
    cout << "Height is " << p.height << endl;
}