#include <iostream>

using namespace std;

int main()
{

jump:

    cout << "\nPlease Enter 2 Numbers : " << endl;
    float a, b;
    cin >> a >> b;

    cout << "\nPlease Choose One Option : " << endl;
    cout << "1)Addition\n2)Subtraction\n3)Division\n4)Multiplication\n5)Exit" << endl;

    cout << "Option : ";
    int n;
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "Addition is " << a + b << endl;
        goto jump;
        break;
    case 2:
        cout << "Subtraction is " << a - b << endl;
        goto jump;
        break;
    case 3:
        cout << "Division is " << a / b << endl;
        goto jump;
        break;
    case 4:
        cout << "Multiplication is " << a * b << endl;
        goto jump;
        break;
    case 5:
        exit(0);
        break;
    }

    return 0;
}