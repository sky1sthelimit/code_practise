// To find frequencies of sorted array elements in an array 
#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};
    int size_arr = sizeof(arr)/sizeof(int);
    int count = 1;
    int i = 0;


    for(i = 1; i < size_arr ; i++){
        if(arr[i] == arr[i-1])
        {
            count++;
        }
        else{
                cout << "Element " << arr[i-1] << " ---> " << count << " times "<< endl;
                count = 1;
        }
    }
    cout << "Element " << arr[i-1] << " ---> " << count << " times "<< endl;
    
    return 0;
}