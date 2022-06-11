#include<iostream>
using namespace std;

int main(){

    int n = 17;

    for( int i = 2 ; i < n ; i++){

        if (n % i ==0){
            cout << " Not a prime " <<endl;
            return 0;
        }
    }
    
    cout << "Prime Number"; 

    return 0;
}