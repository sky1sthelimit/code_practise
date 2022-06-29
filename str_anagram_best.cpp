// Solution to find whether given strings are anagram or not
// 2 strings are anagrams if all count of all character present in them is equal irrespective of their position.
// This is kinda like moore's voting algorith, increasing and decreasing the votes count while traversing only once

#include<iostream>
using namespace std;

const int CHAR = 256;
bool areAnagram(string &s1, string &s2);

int main(){

    string s1 = "abbcaa";
    string s2 = "ABBCAA";


    bool ans = areAnagram(s1,s2);
    if(ans == true)
    cout << "Anagrams"<< endl; 
    else
    cout << " Not Anagrams" << endl;

    return 0;
}

bool areAnagram(string &s1, string &s2){

    if(s1.length() != s2.length())
    {
        return false;
    }

    int count[CHAR] = {0};

    for(int i = 0; i < s1.length() ; i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }

    for(int i = 0; i < CHAR ; i++){
        if(count[i] != 0)
        {
            return false;
        }
    }

    return true;
}