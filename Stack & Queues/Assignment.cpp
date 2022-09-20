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

