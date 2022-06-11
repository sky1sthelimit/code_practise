// code showcasing insertion sorting technique
#include<iostream>
using namespace std;

int main(){

    int arr[] = {3,3,4,4,5,1,2,8,2};
    int size = sizeof(arr)/sizeof(int);
    int temp = 0;

    
    for(int j = 1; j < size ; j++ ){
 
        for(int i = j; i > 0 ; i--){
            
            if(arr[i] < arr[i-1]){

                    temp = arr[i];
                    arr[i] = arr[i-1];
                    arr[i-1] = temp;
                }

            else{ 

                    break;
            }
        }
    }

    cout << " Sorted array : ";
    for(int i = 0; i < size ; i++){
        cout << arr[i] << " ";
    }

    return 0;
}