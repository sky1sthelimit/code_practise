//code to find the number occuring odd times in an array
// using XOR operator //This solution has complexity O(n) and auxiliary space O(1)

// XOR Properties 
// X^Y = Y^X
// X^(Y^Z) = (X^Y)^Z
//X^0 = X

#include<iostream>
using namespace std;

int main(){

    int arr[] = {4,4,3,4,4,5,5};
    int count = 0;

    for(int i = 0 ; i < 7 ; i++){
        count = count ^ arr[i];
    }
    cout << count;


    
    
    return 0;
}
/* ANother question of same type is 
finding missing nnumber from an array having nnumber 1 to n 
Example : [1,2,4,5,6] here missing is 3
so to find missing number take xor of all the elements in the arrays and than take Xor os result with numbers 1toN 
hence you'll find he missing element. */
