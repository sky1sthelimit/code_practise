#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int arr[n];
    cout << " Enter elements of array : ";
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    //logic for insertion sort
    for(int i = 1 ; i < n ; i++ ){

        int current = arr[i];
        int j ;

        for( j = i-1 ; arr[j] > current && (j>=0) ;j--){          //important to put condition j>=0
            arr[j+1] = arr[j];

        }
        arr[j+1] = current;
    }

    for(int i = 0 ; i < n ; i++){          //Printing final sorted array
        cout << arr[i] << " ";
    }


    return 0;
}