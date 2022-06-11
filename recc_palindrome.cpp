#include<iostream>
using namespace std;

bool palindrome(string &str, int size, int start);

int main(){
    int start = 0;
    string str = "abba";
    int size = str.size(); // to get size of an string, str.length(); will also give the same results 
    int ans = 0;

    ans = palindrome(str , size ,start ); // sizeof(str) will return value of 4 for each alphabet ex: abba, size will be 16
    // hence sizeof(str)/sizeof(int);
    if(ans == 1)
        cout << "Palindrome";
    else 
        cout << " Not a palindrome";
    
    return 0;
}

bool palindrome(string &str, int size, int start){

    if(size <= start){
        return true;
    }
    
    return (str[size] == str[start]) && palindrome(str, size-1, start+1);

}