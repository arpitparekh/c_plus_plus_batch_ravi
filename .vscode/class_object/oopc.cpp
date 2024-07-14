// oopc
// object oriented programming concepts

#include <iostream>

using namespace std;

int sum(int a, int b)
{
    return a + b;
}

class Student
{
    // some data
    // some functiom
    // access control

public:              // use public to access propery outside of a class
    int roll_no = 0; // default value
    string name = "Harshil";
    int age = 20;
    string collegeName = "CK Pithawala";

    void display()
    {
        cout << "From Display Function" << endl;
    }
};

int main()
{

    int a = 12;
    printf("%d\n", a);

    printf("%d\n", sum(10, 20));

    cout << a << endl;
    cout << sum(10, 20) << endl;

    // strcuture is a group of datatype using one datatype name

    // class and object
    // class is blueprint
    // class is a group of datatypes and functions
    // all the variables and functions are access outside of the class using objects

    // Student
    // name, age,course_name,college_name // properties
    // walking, learning,reading,timepassing  // functions

    // to access property and function outside of a class we need object

    cout << "Please Enter Student Data : " << endl;

    Student s1; // object is a group data
    // cout << "Please Enter Roll No : " << endl;
    // cin >> s1.roll_no;
    // cout << "Please Enter Age : " << endl;
    // cin >> s1.age;
    // cin.ignore();
    // cout << "Please Enter College Name : " << endl;
    // getline(cin, s1.collegeName);
    // cout << "Please Enter Name : " << endl;
    // getline(cin, s1.name);

    cout << "Student Data in s1 object is : " << endl;

    cout << s1.roll_no << endl;
    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.collegeName << endl;

    Student s2;

    s1.display();

    return 0;
}
