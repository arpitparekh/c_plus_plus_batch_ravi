#include<iostream>

using namespace std;

int main(){

    for (int i = 0; i < 10;i++){
        cout << i << endl;
    }


    int arr[] = {1,
                 2,
                 3,
                 4,
                 5,
                 6};


    for(int i = 0; i < 6;i++){
        cout << arr[i] << endl;
    }

    for(int number : arr){              // advance for loop
        cout << number << endl;
    }

    float values[] = {12.24, 1.2, 1.4, 1.5, 1.6, 2.7};

    for(float n : values){
        cout << n << endl;
    }

    return 0;
}