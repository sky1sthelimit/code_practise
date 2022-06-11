#include<iostream>

using namespace std;


void arr(int *a, int size);

int main(){
    
    int a[] = {1,2,3};
    
    arr(a,3);
    cout << a[0];
   
    
    return 0;
}

void arr(int *a, int size){
    
        a[0] = 100;
        a[1] = 200;
        a[3] = 300;


    }