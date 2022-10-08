//Reverse Stack

void reverseStack(stack<int> &input, stack<int> &extra) {
    //Write your code here
    while(!input.empty()) {
        extra.push(std::move(input.top()));
        input.pop();
    }
    input = std::move(extra);
}

//Reverse Queue


#include<queue>
void reverseQueue(queue<int> &input) {
	// Write your code here
    if(input.empty()){
        return;
    }
    int data = input.front();
    input.pop();
    
    reverseQueue(input);
    input.push(data);
}

#include<stack>
#include<vector>
int* stockSpan(int *price, int size)  {
	// Write your code here
    int *si=new int[size];
    
    stack<int> s;
    si[0]=1;
    s.push(0);
    for(int i=1;i<size;i++){
        
            while(!s.empty() && price[s.top()]<price[i]){
                s.pop();
            }
        if(s.empty())
            si[i]=i+1;
        else
            si[i]=i-s.top();
        s.push(i);
    }
    return si;
}