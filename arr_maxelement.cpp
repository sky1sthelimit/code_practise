// code to find max and min element in an array entered by user
//user will define the size of array

#include<iostream>
#include<climits> // for using INT_MIN ans INT_MAX
using namespace std;

int main(){

    int size;
    cin>>size;

    int arr[size];
    int maxNum = INT_MIN; //chooses min value of int available to CPP 
    int minNum = INT_MAX; // chooses max value available to CPP

    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }

    for(int i = 0 ; i < size ; i++){
        maxNum = max(maxNum, arr[i]);    //Logic using max and min function
        minNum = min(minNum, arr[i]);
    }

    cout << maxNum << " " << minNum;
    
    
    return 0;
}