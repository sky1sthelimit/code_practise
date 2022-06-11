#include<iostream>
#include<climits> // for using INT_MIN ans INT_MAX
using namespace std;

int binarySearch(int arr[], int size, int key);

int main(){

    int size;
    cout << " Enter size of array : ";
    cin>>size;      //inserting size in array
    
    

    int arr[size];
    cout << " Enter element of the array : ";
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];                  //inserting values in array [here input is already sorted values ]
    }

    int key;
    cout << " Enter the key : ";
    cin>>key;

    cout << binarySearch(arr, size, key);

    return 0;
}
     

   

int binarySearch(int arr[], int size, int key){
        
        int start = 0, end = size , mid = 0;

         while (start <= end ){

                mid = (start+end) / 2;

                if(arr[mid] == key){
                    return mid;
                }

                else if(arr[mid] < key){
                    start = mid + 1;
                }
                else {
                    end = mid-1;
                }

    }
        return -1;
}

