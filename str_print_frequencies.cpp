/* 
    Code to print frequencies of of alophabet in a string AND also output each character in sorted order

*/

#include<iostream>
using namespace std;

int main(){

    string str = "geeksforgeeks";
    int count[26] = {0};

    for(int i = 0; i < str.length(); i++){

        count[str[i] - 'a']++;

    }

    for(int i = 0; i< 26; i++){

        if(count[i] > 0){
            cout << (char)(i + 'a') << " : " << count[i] << endl;  
        }
    }


    return 0;
}