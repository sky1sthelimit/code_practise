//code to buy and sell stock based on price given in an array 

#include<iostream>
using namespace std;

#define BUY 0
#define SELL 1

int main(){

    int arr[] = {1,5,3,1,2,8};
    int size = sizeof(arr)/sizeof(int);
    int position = 0;
    int buyPrice = 0, sellPrice = 0, profit = 0;

    for(int i = 0; i < size ; i++){

        if(position == BUY){
            
            if(i == size-1){
                cout << "Profit : "<< profit <<endl;
                break;
            }
            
            if(i == 0){
                buyPrice = arr[i];
                position = SELL;
            }
            else if(arr[i+1] < arr[i]){ //checking for lower prices in future before entering the market 
                continue;
            }
            else{
                buyPrice = arr[i];
                position = SELL;
            }
        }

        else if(position == SELL ){

           if( i < size-1 ){
                if(arr[i+1] > arr[i]){
                    continue;
                }
                else if((arr[i+1] < arr[i]) && buyPrice < arr[i]){
                    sellPrice = arr[i];
                    profit += (sellPrice - buyPrice);
                    position = BUY;
                }
           }

             if(i == size-1){
                if(arr[i] > buyPrice){
                    sellPrice = arr[i];
                     profit += (sellPrice - buyPrice);
                     cout << "Profit : "<< profit <<endl;
                }
                else
                cout << "Profit : "<< profit <<endl;
        
            }
           

        }

    
    
    }
    return 0;
}