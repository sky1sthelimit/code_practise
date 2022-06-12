//TO find maximum sum of circular subarrays
//Solution is based on kadane's algo.
/*
    HOW TO SOLVE IT?
    Logic : Find Max. sum of Normal array using Kadanes, then find Max sum of Circular sub-array. Pick max. sum among normal subarray 
    or circular sub-array.

    HOW TO FIND SUM OF CIRCULAR SUBARRAY?
    Way 1 : Find sum of all array elements and SUBTRACT the min. sum(min. sum can be found by changing kadanes to find min.sum)
    Way 2 : Find sum of all array elements and ADD the max sum of inverted subarray.(Inverted as in multiply array by negative 1, and
    find the max in that.)(This works as Max. sum in an inverted array is equal to Min. Sum in original array)
  
    Here i am solving using Way 1.
*/

#include<iostream>
#include<climits>
using namespace std;


int circular_maxsum(int *arr, int size);
int normal_maxsum(int *arr,int size);

int main(){

    int arr[] = {4,5,-3,2};
    int size = sizeof(arr)/sizeof(int);

    cout << " Max Sum of circular subarray :" << max( circular_maxsum(arr, size) , normal_maxsum(arr,size) ) << endl;
    return 0;
}

int circular_maxsum(int *arr, int size){

    int min_tillnow = arr[0];
    int res = arr[0];
    int arr_sum = 0;
    

    // Max sum of circular subarray = Sum of all elements in array - min sum. of subarray
    // for minimum sum of any subarray kadane's algo needs to be edited a little bit

    for(int i = 1; i < size; i++){
        min_tillnow = min(min_tillnow + arr[i], arr[i]);
        res = min(res, min_tillnow);
    }

    for(int i = 0; i < size ; i++){
        arr_sum += arr[i]; 
    }

    int min_sum = arr_sum - res; 

    return min_sum;
    
}

int normal_maxsum(int *arr,int size){

    int max_tillnow = arr[0];
    int res = arr[0];
    
    
    for(int i = 1; i < size  ; i++){
        
        

        max_tillnow = max(max_tillnow + arr[i], arr[i] );
        res = max(res, max_tillnow);

    }

    return res;

}