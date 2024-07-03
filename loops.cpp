#include<iostream>

using namespace std;

int main(){

    // int a = 1;
    // while(a<=10){
    //     cout << a <<endl;
    //     a++;
    // }

    // break and continue

    // break will break the whole loop
    // continue will break the iteration 

    for (int i = 1; i <= 10;i++){

        if(i==7){
            continue;
        }

        cout << i << endl;
    }
    
    return 0;
}

    
