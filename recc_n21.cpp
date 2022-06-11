// code to print N to 1 number using recusrion 

#include<iostream>
using namespace std;

void printNto1(int n);

int main(){

    printNto1(5);
    return 0;
}

void printNto1(int n){
    if(n == 0)
        return;
    cout << n << " ";
    printNto1(n-1);
}