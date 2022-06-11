//best way to rotate and array be d elements 
// time complexity if theta(n) and auxiliary space of 1
#include<iostream>
using namespace std;

void arrayReverse(int *arr, int size, int d, int start, int end);

int main(){

   int arr[] = { 1,2,3,4,5,6,7};
   int size = sizeof(arr)/ sizeof(int);
   int d = 2;
    //3 steps solution
    // reverse from 0 to d-1;
    //reverse from d to n-1;
    // reverse whole array;

    arrayReverse(arr,size,d,0,d);
    arrayReverse(arr,size,d,d,size);
    arrayReverse(arr,size,d,0,size);

    for(int i = 0; i < size ; i++)
    cout << arr[i] << " ";


    return 0;
}

void arrayReverse(int *arr, int size, int d, int start, int end){

        int temp;
        for( start,end ; start < end ; start++,end--){
            
              temp = *(arr + start);
              *(arr + start) = *(arr + (end-1)); 
              *(arr + (end - 1)) = temp;


        }

}