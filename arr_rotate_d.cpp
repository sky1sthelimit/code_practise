// rotate and array leftwards by d elements 
// theta(n) complexity  but required theta(d) extra space 
#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    int newArr[size];
    int d = 2;

    for(int i = 0 ; i < d ; i++){
        newArr[i] = arr[i];
    }

    for(int i = d ; i < size ; i++){
        arr[i-d] = arr[i];
    }

    for(int i = 0 ; i < d ; i++ ){
        arr[size - d + i] = newArr[i];
    }

    for(int i = 0 ; i < size ; i++ ){
        cout << arr[i] << " " ;
    }
    
    return 0;
}