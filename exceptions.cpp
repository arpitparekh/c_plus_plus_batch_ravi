#include <iostream>

using namespace std;

int main()
{

    // exception handling in c++
    // try catch block
    // throw keyword

    // expection means abnormality in code
    // exception handling is a mechanism to handle abnormality in code

    try
    {
        int a = 12;
        int b = 0;

        if (b == 0)
        {
            throw 45;
        }
        else
        {
            cout << a / b << endl;
        }
    }
    catch (...)
    {
        cout << "zero thi divide no thay bhaya" << endl;
    }

    cout << "Hello World" << endl;

    return 0;
}