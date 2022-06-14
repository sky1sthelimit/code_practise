/* 
    Moore's Voting Algorithm
        Works in 2 Parts ->
            1st Part : Like voting every vote to a certain candidate adds to vote and every vote to another candidates cancels out a vote
                        (cancels out means it decreases the lead of former contestant). Hence at the end every element cancels out 
                        each other but person with majortiy vote has atleast has count as positive in the end.
            2nd Part : It maybe possible that the contestant remaining with positive count may not have absolute (more than half) 
                        majority hence we check this by getting the index at which the probably majority element is present and then 
                        running simple counter loop to count whether its more than half the size of array ( which is a condition for
                        an element to ba a majority elelment)

    (If it is asked that necesarrily there is a majority element in the array,(even if it doesnt has >50% majority) in that case only 
    Part 1 of algo can give us the majority element)
             
*/

#include<iostream>
using namespace std;

int majority_element(int *arr,int size);

int main(){

    int arr[] = {8,3,6,6,6,6};
    int size = sizeof(arr)/sizeof(int);

    cout << "Majority Element index = " << majority_element(arr,size) << endl;
    return 0;
}

int majority_element(int *arr,int size){

    int count = 1;
    int res = 0;
    for(int i = 1 ; i < size ; i++){
        // This will give us index of majority element(whether its absolutely majority element or not is checked later) //
        if(arr[res] == arr[i]){
            count++;
        }
        else{
            count--;
        }
    
        if(count == 0){
            count = 1;
            res = i;
        }
    }
        int count2 = 0;
    // To check whether it really a majority element or not //
        for(int i = 0; i < size ; i++){
                if(arr[res] == arr[i]){
                    count2++;
                }
        }

    if(count2 < (size/2)){
        return -1;
    }
    else{
        return res;
    }
    


}