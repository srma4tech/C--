#include<iostream>
using namespace std;

int main(){
    int n = 15, prod = 1;
    for(int i=1;i<=n;i++){
        prod *= i;
    }
    cout<<prod<<endl;
}