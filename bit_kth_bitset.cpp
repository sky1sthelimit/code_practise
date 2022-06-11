#include<iostream>

using namespace std;

int main(){

    int num = 5;
    int position = 2;

    if( (num >> (position - 1)) &  1 == 1){         //Logic 
        cout << "True";
    } 
    else {
        cout << "False";
    }

    return 0;
}