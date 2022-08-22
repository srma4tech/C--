#include<iostream>
using namespace std;

int main() {
    int n; cin>>n;
    int row =1;
    while(row <= n){
        int col = 1;
        if(row % 2 != 0){
            //Odd
            while(col <= row){
                cout<<1;
                col++;
            }
        }else{
            cout<<1;
            while(col <= row-2){
                cout<<0;
                col++;
            }
            cout<<1;
        }
        cout<<endl;
        row++;
    }
    return 0;
}