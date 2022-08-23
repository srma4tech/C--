#include<iostream>
using namespace std;

int main() {
    int N;
    cin>>N;

    int no;
    while(N > 0){
        cin>>no;
        cout<<"Swuare of "<< no << " is: "<< no*no << endl;

        N--;
    }
    return 0;
}