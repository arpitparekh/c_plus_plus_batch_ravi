#include <iostream>

using namespace std;

int main()
{
   
    arpit:

    cout << "Lets Learn about Conditions in c++" << endl;

    int a = 12;
    int b = 13;

    if (a < b)
    {
        cout << a << " nano che" << endl;
    }
    else
    {
        cout << b << " nano che" << endl;
    }

    cout << "Please 0 For exit or other for continue" << endl;
    int n;
    cin >> n;

    if(n==0){
        
    }else{
        goto arpit;
    }
}