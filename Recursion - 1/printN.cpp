#include<iostream>
using namespace std;

void printN(int n){
    if(n > 1){
        printN(n-1);
    }
    cout<< n << " ";
}

int main(){
    //int num;
    //cin>>num;
    printN(5);
}