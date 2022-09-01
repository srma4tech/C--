#include<iostream>
using namespace std;
// Needs to correct, will work later
void unique_ele(int *arr, int n){
    int uniq;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i] != arr[j]){
                uniq = arr[i];
            }
        }
    }
    cout<<uniq;
}

int main() {
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unique_ele(arr, n);
    return 0;
}