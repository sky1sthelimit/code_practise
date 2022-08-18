//stack code to check whether parenthesis are balanced or not
// here we store only opening brackets inside stack, and as soon as a closing bracket comes we check whether it is same as the top 
//opening bracket at stack ( whcich it should be if it is balanced)
/* 
Time complexity : O(n);
Space complexity : O(n);

*/



#include<iostream>
#include<stack>
#include<string.h>

using namespace std;

bool isMatching(char open, char close);
bool isBalanced(string &str);

int main(){

    string str = " ";
   cout <<  isBalanced(str) <<endl;


    
    

    return 0;
}

bool isMatching(char open, char close){

    return (open== '(' && close == ')') || (open== '[' && close == ']') || (open== '{' && close == '}');
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
}

bool isBalanced(string &str){

    stack <char> s;

    for(char x : str){
        if(x == '(' || x == '[' || x == '{'){
            s.push(x);
        }
        else{
            // else here has 3 conditions --> for cases where we have open brackets
            

            //condition 1 : open bracket and stack is empty
                if(s.empty() == true  )
                {
                return false;
                }


            //condition 2 : open bracket and stack is filled ( we check)
                if(isMatching(s.top(),x ) == false){
                return false;
                }

            //condition 3 : if they are matching, pop the top element
            else 
                s.pop();
        }
        
    }
    //checks when only opening brackets are remaining at the stack 
    return (s.empty() == true);
}