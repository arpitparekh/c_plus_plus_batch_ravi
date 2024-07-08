// function
// function overloading
// structure
// pointer
// enums   // group of constant

#include<iostream>

using namespace std;

int sum(int a,int b){
    return a + b;
}

// function overloading
// multiple function with same name
// change paramter

int sum(int a){   // no of parameter is different
    return a;
}
float sum(float a,float b)   // if no of parameter is same then chnage the patameter type
{
    return a+b;
}
int sum(float a,float b,float c){
    return a + b + c;
}

int main(){

    cout << sum((float)10.0,(float)20.0) << endl;

    // double d = 23.23;
    // float f = (float)d;

    return 0;
}