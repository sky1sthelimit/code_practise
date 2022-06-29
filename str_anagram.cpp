#include<iostream>
using namespace std;

void anagaram(string &s1, string &s2);

int main(){

    string s1 = "aaacb";
    string s2 = "babaa";
    
    anagaram(s1,s2);
    return 0;
}

void anagaram(string &s1, string &s2){

    if(s1.length() != s2.length())
    {
            cout << " Strings aren't anagrams" << endl;
            return;
    }
    
    int count = 0;
    int exit_count = 0;

    for(int i = 0;  ; i++){
       
        exit_count++;
        if(exit_count >= 2 * (s2.length()))
        {
            cout << " Strings aren't anagrams" << endl;
            return;
        }

        if( s1[count] == s2[i % (s2.length())]  )
        {
            count++;
            exit_count = 0;
        }

        if(count  == s1.length())
        {
            cout << "They are anagrams" << endl;
            return;
        }

    }

}