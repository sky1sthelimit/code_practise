// Longest substring without repeating characters 

#include<iostream>
#include<climits>

using namespace std;

int main(){

    char str[] = "abcdefgha";

    int count = 1;
    int maxlen = 0;
    bool flag = 0;
    int n = sizeof(str)/sizeof(char);

    for (int i = 1; i < n-1 ; i++){
        for(int j = 0 ; j < i ; j++){

            if(str[i] != str[j]){
                flag = 1;
            }
            else{
                maxlen = max(maxlen, count);
                count = 1;
                flag = 0;
            }

        }
        if(flag ==1){
            count ++;
        }
    }
    
    cout << " Length of longest substring is : " << maxlen <<endl;
    return 0;
}