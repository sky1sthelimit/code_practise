#include<iostream>

using namespace std;

int power(int base, int pwr); //pwr is power to be raised on any integer "base".

int main(){
    int base = 2, pwr = 5;
    

    cout << power(base,pwr); 
    return 0;
}

int power(int base, int pwr){

    if( pwr == 0){
        return 1;
    }
    if(pwr ==1){
        return base;
    }
    int product = base * power(base, pwr-1);
    return product;
}