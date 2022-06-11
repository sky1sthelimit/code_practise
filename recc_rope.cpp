// problem to find highest number of cuttings to a rope possible with given lengths a,b,c

#include<iostream>
using namespace std;


int rope(int Num, int a,int b,int c);

int main(){
    int num = 5;
    int a = 2, b = 1, c = 3;
    

    cout << rope(num, a,b,c) << endl;
    
    return 0;
}

int rope(int Num, int a,int b,int c){

    if(Num == 0)
        return 0;
    
    if(Num < 0)
        return -1;
    
    int res =  max(rope(Num-a,a,b,c), max(rope(Num-b,a,b,c), rope(Num-c, a,b,c)));

    if(res == -1)
        return -1;
    
    return res + 1; 

}