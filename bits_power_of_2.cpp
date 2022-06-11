//Using brian kerningham algorithm 

#include<iostream>
using namespace std;

int main(){

    int num = 256;

    // num = num & (num-1); //Brian kerningham algorithm 
    // if(num == 0){
    //     cout << "Given number is power of Two";
    // }
    // else{
    //     cout << "Not a power of two";
    // }

    if ( (num & (num-1)) == 0 ) { //Brian kerningham algorithm
        if(num ==0){                // Zero also gives answer zero so it must be excluded 
            cout << "Not a power of 2";
        }
        else
        cout << "Power of 2";
    }
    else{
        cout << "Not a power of 2";
    }

    return 0;
}