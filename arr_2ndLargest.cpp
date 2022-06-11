//code to find the second largest element in an array
#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,5,3,2,17,22,81,64};
    int sizeArr = sizeof(arr)/sizeof(int);
    int lar = 0, lar2 = -1;

    for(int i = 0 ; i < sizeArr ; i++){

        if(lar < arr[i] ){
            lar = arr[i];
        }
        if(lar > arr[i] && lar2 < arr[i]){
            lar2 = arr[i];
        }

    }
    cout << "Elements of the array are : ";
    for(int i = 0 ; i < sizeArr ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "2nd largest element in the array is : " << lar2 << endl;
    return 0;
}