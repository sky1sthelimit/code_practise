// include<stack> // this can be used to include stack from standard library.
// or include<bits/stdc++.h> -> This includes all standard libraries in C++.

#include<iostream>
#include<stack>

using namespace std;


void stack_elements(stack <int> stack);



int main(){

    stack <int> stack;

    stack.push(10);
    stack.push(20);
    stack.push(25);
    stack.push(50);
    stack.push(100);

    cout << "Stack elements are : ";
    stack_elements(stack);
    
    cout << "\nstack.size() : " << stack.size(); 
    cout << "\nstack.top() : " << stack.top(); 

    cout << "\nstack.pop() : "; 
    stack.pop(); 
    stack_elements(stack); 

    cout << stack.empty() << endl;


    
    
    return 0;
}

void stack_elements(stack <int> stack){

    while(!stack.empty()){

        cout << stack.top() << " ";
        stack.pop();
    }
    cout << "\n";
}