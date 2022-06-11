//to remove duplicate elements in a sorted array

#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,1,1,2,2,2,2,2,3,3,4,5,6,6,9,9,9,9};
    int sizeArr = sizeof(arr)/sizeof(int);
    int count = 1, index = 0;
    int newArr[sizeArr];
    newArr[0] = arr[0];



    for(int i = 0; i < sizeArr - 1 ; i++){

            if(arr[i] != arr[i+1]){
                count++;
                newArr[++index] = arr[i+1];
            }
    }
    cout << "Number of discreet elements in an array are : "<< count << endl;
    cout << "NUmber of elements in array are : ";
    for(int i = 0; i < count ; i++){
        cout << newArr[i] << " ";
    }
    
    
    return 0;
}