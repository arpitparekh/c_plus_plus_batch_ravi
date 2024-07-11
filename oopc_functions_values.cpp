#include <iostream>

using namespace std;

class Intitute
{
public:
    string name = "";
    int no_student = 0;
    int no_chair = 0;

    void assignValues(string n, int no1, int no2)
    {
        name = n;
        no_student = no1;
        no_chair = no2;
    }
    void displayValues()
    {
        cout << name << endl;
        cout << no_student << endl;
        cout << no_chair << endl;
    }
};

int main()
{

    Intitute i;

    i.assignValues("Bascom", 25, 35);
    i.displayValues();

    Intitute i2;
    i2.assignValues("Tops", 70, 40);
    i2.displayValues();

    return 0;
}