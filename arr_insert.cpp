//code to insert an element at the given index 

#include<iostream>
using namespace std;


void insert(int arr[], int size, int pos, int x, int n){
    // n = number of elements present in array;
    // x = new element to be entered
    // pos == position at which new element needs to be entered 
    // size = size of array

    if(n == size){
        cout << "Array already full" << endl;
        return;
    }
    
    int idx = pos - 1;
    for(int i = n-1 ; i >= idx ; i--){
        arr[i+1] = arr[i];
    }
    arr[idx] = x;
    n++;

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    
}


int main(){

    int arr[5] = {1,3,8};
    insert(arr,5,1,18,3);
    
    
    return 0;
}