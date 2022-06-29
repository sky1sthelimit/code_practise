//code to check whether given string is palindrome or not
#include<iostream>
using namespace std;

int main(){

    string str;

    cout << "Enter the string : "<< endl;
    getline(cin,str);
    bool flag = true;

    for(int i = 0; i < str.length() && ( i <= str.length()-1-i  ); i++){
        if(str[i] == str[str.length() - 1 - i]){
            continue;
        }
        else{
            cout<< "Not a palindrome" << endl;
            flag = false;
            break;
        }
    }
    
    if(flag == true){
        cout << "Input string is a palindrome" << endl;
    }
    
    return 0;
}