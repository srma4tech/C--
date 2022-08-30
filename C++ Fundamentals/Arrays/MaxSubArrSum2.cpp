#include<iostream>
using namespace std;

void pairSum2(int *arr, int n, int sum){
    
}

int main() {
    int n,sum;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>sum;
    pairSum2(arr, n, sum);
}