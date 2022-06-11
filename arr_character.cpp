#include<iostream>
//#include<bits/stdc++.h>
using namespace std;



int main(){

    char arr[100];

    int n;
    cin >> n;
    cin.ignore();

    cin.getline(arr,n);
    cin.ignore();
    
    int count = 0, maxlen = 0, i = 0;
    int current = 0, maxstart = 0; // maxstart would point to position of longest starting word 

    while(1){

        if(arr[i] == ' ' || arr[i] == '\0'){

            if(current >maxlen){
                maxlen = current;
                maxstart = i - maxlen;
                
            }
            current = 0;
        }
        else
        current++;

        if(arr[i] == '\0'){
            break;
        }
        i++;
    }

    cout << maxlen<< endl;
    
    for(int i = 0; i < maxlen ; i++){
        cout << arr[i + maxstart];
    }
    return 0;
}

