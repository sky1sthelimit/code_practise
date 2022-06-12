//Kadane's Algorithm
// Algo to find maximum sum of a subarray
//SUbarray means element should be "contiguous"

#include<iostream>
#include<climits>
using namespace std;


int maxsum(int *arr, int size);

int main(){

    int arr[] = {100,-2,-5,-4,100};
    int size = sizeof(arr)/sizeof(int);

    cout << " Max subarray sum :" << maxsum(arr, size) << endl;
    return 0;
}


int maxsum(int *arr, int size){

    int max_tillnow = arr[0];
    int res = arr[0];
    
    
    for(int i = 1; i < size ; i++){

        max_tillnow = max(max_tillnow + arr[i], arr[i] );
        res = max(res, max_tillnow);

    }

    return res;


}