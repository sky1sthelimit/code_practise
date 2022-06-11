#include<bits/stdc++.h>
using namespace std;
//code to convert hexadecimal number to decmial

int hexadecimalToDecimal(string n);

int main(){

    string n;
    cout << "Enter the Hexadecimal Number : ";
    cin >> n;

    cout << hexadecimalToDecimal(n);
    
    
    return 0;
}

int hexadecimalToDecimal(string n){

    int ans = 0;
    int x = 1; //x is base of 16

    int size = n.size();

    for ( int i = size-1 ; i >=0 ; i--){

        if (n[i] >= 'A' && n[i] <= 'F'){
            ans = ans + x*(n[i] - 'A' + 10);
        }
        
        else if ( n[i] >= '1' && n[i]<= '9'){
            ans = ans + x*(n[i] - '0');
        }
         
        x = x*16; 

    }
    return ans;

}
