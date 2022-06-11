#include<iostream>

using namespace std;

int main(){

    int rows, collumns;
    
    cout << "Enter rows and collumns";
    cin >> rows >> collumns;


    for(int i = 1 ; i <= rows ; i++){
        for(int j = 1 ; j <= collumns ; j++){
            if( i == 1 || i == rows){
                cout << "* ";
            }
            else {
                if ( j == 1 || j == collumns){
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
                
            }

        }
        cout << endl;
    }

    return 0;
}