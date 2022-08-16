#include<iostream>
using namespace std;

void combi(char a[], int reqLen, int s, int currLen, bool check[], int l){
    if(currLen > reqLen)return;
    else if(currLen == reqLen) {
        cout<<"\t";
        for(int i=0;i<l;i++){
            if(check[i] == true) {
                cout<< a[i]<<" ";
            }
        }
        cout<<endl;
        return;
    }
    if(s == l){
        return;
    }
    check[s] = true;
    combi(a, reqLen, s+1, currLen+1, check, l);
    check[s] = false;
    combi(a, reqLen, s+1, currLen, check, l);
}

int main() {
    int i,n;
    bool check[n];
    cout<<"Enter number";
    cin>>n;
    char a[n];
    cout<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
        check[i] = false;
    }
    for(i=0;i<n;i++){
        combi(a, i, 0, 0, check, n);
    }
}