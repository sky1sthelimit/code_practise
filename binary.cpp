#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int binary(int decimal);

int main(){

    int decimal = 10;

    cout << binary(decimal) << endl;

    return 0;
}

int binary(int decimal){

    int mod = 0, bin = 0, i=1;

    
    for( ; decimal > 0 ;){

        mod = decimal % 2;
        bin += mod*i;
        i *= 10;
        decimal /= 2;

    }

    return bin;

}