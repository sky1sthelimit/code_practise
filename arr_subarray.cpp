//Longest subarray length with constant difference 
// length of largest continuous subarray
// google 

#include<iostream>
#include<climits>
using namespace std;

int main(){

    int arr[] = {10, 7, 4, 6, 8, 11};
    int n = sizeof(arr) / sizeof(int);
    int diff = arr[1] - arr[0];
    int count = 2;
    int maxlen = INT_MIN;
 
    for(int i = 1; i < n-1 ; i++){

        if( diff == arr[i+1] - arr[i]){
            count++;
        }
        else{
            maxlen = max(maxlen, count);
            count = 2;
            diff = arr[i+1] - arr[i];
        }
    }

    cout << "Length of largest contiguous subarray is : " << maxlen << endl;
    

    return 0;
}