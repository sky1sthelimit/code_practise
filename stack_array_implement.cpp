// implementing stack using array and making a class stack

#include<iostream>
using namespace std;

#define SIZE 100;

class Stack{

    int top;
    int a[SIZE];
public:
    
    Stack(){
        top = -1;
    }

    void push(int x);
    void pop();
    bool isEmpty();
    int peek();

};


void Stack::push(int x){

    if(top == 99){
        cout << "STACK OVERFLOW!!"<<endl;
    }
    else{
            a[++top] = x;
            cout<< x << " pushed into stack"<<endl;
    }
}

void Stack::pop(){

    if(top == -1){
        cout<<"STACK UNDERFLOW!!";
    }
    else{
        cout << a[top] << " is popped out of stack "<<endl;
        top = top-1;
    }
}

bool Stack::isEmpty(){

    return top == -1;
}

int Stack::peek(){
    if(top <= -1){
        cout << "Stack is empty!!"<<endl;
    }
    else{
        cout << "Top element is : ";
        return a[top];
    }
}


int main(){

    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.peek()<<endl;

    s.pop();
    s.pop();
    s.pop();
    s.pop();

    cout << s.peek()<<endl;
    cout << s.isEmpty()<<endl;



    return 0;
}