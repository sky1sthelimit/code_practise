#include<iostream>

using namespace std;


int main(){

    int arr[] = {1,0,2,3};
    int arr2[] = {1,0,3,3};

    if(arr == arr2) {
        cout << "Equal" << endl;
    }
    else{
        cout << " NOPE" << endl;
    }

    return 0;
}