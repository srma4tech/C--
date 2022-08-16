#include<bits/stdc++.h>
using namespace std;

void combinations(int arr[], int data[], int start, int end, int index, int r);
void printCombi(int arr[], int n, int r){
    int data[r];
    combinations(arr, data, 0, n-1, 0, r);
}
void combinations(int arr[], int data[], int start, int end, int index, int r) {
    if(index == r) {
        for(int j=0;j<r;j++){
            cout<<data[j]<< " ";
        }
        cout<<endl;
        return;
    }
    for(int i=start; i<= end && end-i+1 >= r - index;i++){
        data[index] = arr[i];
        combinations(arr, data, i+1, end, index+1, r);
    }
}
int main(){
    int arr[] = {2,5,8,1,4,7};
    int r=4;
    int n = sizeof(arr)/sizeof(arr[0]);
    printCombi(arr, n, r);
}