// Max difference among the element in the array
// condition a[j] - a[i] should be max where j>i.
// below solution has time complexity of O(n)

#include<iostream>
using namespace std;

int main(){

    int arr[] = {2,3,10,6,4,8,1};
    int size_arr = sizeof(arr)/sizeof(int);

    int max_diff = arr[1] - arr[0];
    int min_el = arr[0];

    
    for(int i = 1 ; i < size_arr -1 ; i++ ){
       
        max_diff = max(max_diff , arr[i+1] - min_el);
        min_el = min(min_el, arr[i]);
    }

    cout << " Maximum difference is : " << max_diff << endl;


    return 0;
}