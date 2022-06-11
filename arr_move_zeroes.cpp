//code to move zeroes towards end in an array 
#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,4,0,0,5,2,0,0,0,2};
    int size = sizeof(arr)/sizeof(int);
    int count = 0;
    
    for(int i = 0 ; i < size ; i++){
        if(arr[i] != 0){
            swap(arr[count], arr[i]);
            count++;
        }
        
    }
    cout << "elements in the array are : " ;
     for(int i = 0 ; i < size; i++){
         cout << arr[i] << " ";
     }
    return 0;
}