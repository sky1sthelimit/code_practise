/*
    Algorithm for pattern searching. This is the most easy of all and also has worst time cpmplexities compared to other advanced algo.
    Time complexity of this algorithm is (n-m+1)*m

*/

#include<iostream>
#include<string.h>
using namespace std;

void patternSearch(string &str,string &target);


int main(){

    string str , target;
    cout << " Enter the text : "<< endl;
    getline(cin,str);

    cout << " Enter the pattern to search : "<< endl;
    getline(cin,target);

    patternSearch(str,target);
    return 0;
}

void patternSearch(string &str,string &target){

    int n = str.length();
    int m = target.length();
    int flag = 0;

    for(int i = 0 ; i<= n-m ; i++)
    {
        int j;
        for( j = 0 ; j < m ; j++) 
        {
            if(target[j] != str[i+j])
            {
                break;
            }
        }
        if( j == m)
        {
        cout << i << " ";
        flag = 1;
        }
    }

    if (flag == 0)
    {
        cout << "Pattern not found" << endl;
    }


}