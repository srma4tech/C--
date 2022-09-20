#include<iostream>
#include<stack>

using namespace std;

bool isBalanced(string expression) 
{
    stack<char> st;
    if(expression[0] == ')'){
        return false;
    }
    int len = expression.length();
    for(int i=0;i<len;i++){
        if(st.empty()){
            st.push(expression[i]);
        }
        else if((st.top() == '(' && expression[i] == ')') || (st.top() == '{' && expression[i] == '}') || (st.top() == '[' && expression[i] == ']')){
            st.pop();
        }
        else{
            st.push(expression[i]);        
        }
    }
    if(st.empty()){
        return 1;
    }
    return 0;
}

int main() {
    cout<<"Enter the expression : "<<endl;
    char str[10];
    cin.getline(str, 10);

    if(isBalanced(str)){
        cout<<"Balanced!"<<endl;
    }else{
        cout<<"Un-Balanced!"<<endl;
    }
    
    return 0;
}