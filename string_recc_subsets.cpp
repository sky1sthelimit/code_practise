/* String subsets 
    if input is string ABC, O/p will be '', A,B,C,AB,AC,BC, ABC. [This is also called Sub-sequence] 
    This gives 2^n outputs 
*/

#include<iostream>
using namespace std;

void subsets(string &s, string curr , int i );

int main(){

    string s = "ABCD";
    string curr = "";
    int i = 0;

    subsets(s,curr,i);
    
    return 0;
}

void subsets(string &s, string curr , int i  ){

        if(i == s.size()){
            cout << curr<<endl;
            return;
        }

        subsets(s,curr,i+1);
        subsets(s,curr + s[i], i+1);

}