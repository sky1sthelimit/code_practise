#include<iostream>
using namespace std;

int sum_digit(int N);

int main(){

    int Num = 841;
    int ans = sum_digit(Num);
    cout << ans << endl;


}

int sum_digit(int Num){

    if ( Num <= 9 )
        return Num;

    return Num%10 + sum_digit(Num/10);

}