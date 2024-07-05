#include<iostream>

using namespace std;

int main(){

    cout << "Lets Learn String in C++" << endl;

    char name[] = "Hello Bascom";

    string name2 = "Hello";

    string space = " ";

    cout << name << endl;
    cout << name2 << endl;

    // strcpy()  // strcmp() // strlen()

    cout << name2.length() << endl;

    cout << name2[1] << endl;
    cout << name2.at(2) << endl;

    string name3 = name + string(" ") + name2;
    // string name3 = name + space + name2;

    // cout << (name + " " + name2) << endl;  // this will not work directly    

    cout << name3 << endl;

    cout << name << " " << name2 << endl;

    string address = string(5, 'a');
    cout << address << endl;

    string company = "Bascom Bridge";

    string subCompany = company.substr(7,12);   // sub string function

    cout << subCompany<<endl;

    // find

    cout << company.find("Bridge") << endl;

    // replace function

    cout << company.replace(7,12,"Pull") << endl;

    // insert function

    cout << company.insert(0, "Maru ") << endl;

    // erase function

    cout << company.erase(12, 15) << endl;  

    string str1 = "Bascom";
    string str2 = "Bascom";

    cout << (str1 != str2) << endl;   // string comparision

    for(char ch : str1){            // looping through string
        cout << ch << endl;
    }
    
    return 0;
}