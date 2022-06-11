//Code to count number of set digits in a number's binary form

//brian kerningam's algorithm 
/* 
        int count = 0;

        while( n>0){
            n = (n & ( n - 1)); // it only counts set bits as substracting n with n-1 sets first rightmost set bit to Zero and
            count++;               all zeroes right of that bit to 1. 
        }                           Time complexity : theta(set bits count)

        cout << count;
*/

/*
theta(1) method



*/


#include<iostream>

using namespace std;                                                                                           

int main(){
//naive solution
    int num = 25;
    int count = 0;
    
    for(    ; num > 0 ;  ){

            if((num & 1) == 1 ){
                count++;
            }
        num = num >> 1;
    }

    cout << count;

    return 0;
}

