// Using Strings related basic function in C++


#include<iostream>
#include<algorithm> // this is needed to use reverse function
using namespace std;

int main(){

    string str;

/*
    //taking string as an input
    cout << "Enter the string" << endl;
    getline(cin,str);
    cout << "Input string is : " << str << endl;
*/
    // another way os using getline
    cout << "Enter the 2nd string" << endl;
        //below line will take input until user enters \n
    getline(cin,str,'\n'); 
    cout << "Input string is : " << str << endl;

    //string length
    cout << "Length of string is : " << str.length() << endl;

    //Printing substring
    // substr(initial index, length);
    cout << "Substr printing : " << str.substr(2,4) << endl;

    //finding a part of string 
    cout<< "Jain is starting from index : " << str.find("Jain") << endl;

    //reversing a string
    string rev = str;
    reverse(rev.begin(),rev.end());
    reverse(str.begin(),str.end());
    cout << "Inversed string is : " << rev <<endl;
    cout << "Inversed string is : " << str <<endl;





    
    return 0;
}