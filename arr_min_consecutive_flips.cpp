/* 

    How many min. flips are required in a binary array to make all elements same.
    arr = {0,0,1,1,1,0,0} -> Here answer is 1 i.e if we changle all ones(is 1's or 0's are consecutive they'll be counted as one stroke)
    arr = {1,1,0,0,0,1,1,0,1} ->  Here 1 needs to be changed 3 times and 0 needs to be change 2 times -> hence we will change Zeroes 
    (as 0 will be min. consecutive flip) 
    
    O/p -> Output needs to be index of 0's or 1's that needs to be flipped.

    || THEORY ||
    1.Interesting to note that if array starts with 1 and ends with 1 this means series of consecutive 1's will be appearing one time
    more than zero, and similarly same for zero. Hence in this case we will change 0's as they are consecutively one less in number.
    2. If array begins with 1 and ends with zero ( or vice versa, starts with 0 and ends with 1) in that case, number of consectuive flips
    needed will be same for both 1 or 0.

*/

#include<iostream>
using namespace std;

void min_flip(int *arr, int size);

int main(){

    int arr[] = {1,1,0,0,0,1,1,0,0,1};
    int size = sizeof(arr)/sizeof(int);

    min_flip(arr,size);





    
    return 0;
}

void min_flip(int *arr, int size){

    int temp = 0;

    if(arr[0] == arr[size-1]){
        temp = !(arr[0]);
    }
    else{
        temp = arr[0];
    }

    for(int i = 0; i < size; i++){
        if(temp == arr[i]){
            start = i;
        }
        else{
            
        }
        else
    }
}