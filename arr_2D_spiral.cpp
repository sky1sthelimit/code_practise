#include<iostream>
using namespace std;

int main(){

    int row , collumn;
    cin >> row >>collumn;

    int arr[row][collumn];

    for(int i = 0 ; i < row ; i++){
        for( int j = 0; j < collumn ; j++ ){
            cin >> arr[i][j];
        }
    }
    int row_start = 0, row_end = row - 1;
    int col_start = 0 , col_end = collumn - 1;

    for(;row_end >= row_start && col_end >= col_start;){

        for(int i = col_start ; i <= col_end ; i++){
            cout << arr[row_start][i] << " ";
        }
        row_start++;

        for(int i = row_start ; i <= row_end ; i++){
            cout << arr[i][col_end] << " ";
        }
        col_end--;

        for(int i = col_end ; i >= col_start ; i-- ){
            cout << arr[row_end][i] << " ";
        }
        row_end--;

        for(int i = row_end ; i >= row_start ; i--){
            cout << arr[i][col_start] << " ";
        }
        col_start++;

    }



    return 0;
}