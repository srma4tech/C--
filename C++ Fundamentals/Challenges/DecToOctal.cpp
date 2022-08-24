#include<iostream>
#include<math.h>

using namespace std;

string DecToOct(int n){
    string octal = "";
    while(n > 0){
        int rem = n % 8;
        n /= 8;
        char c = rem +'0';
        octal = c+octal;
    }

    return octal;
}

int main() {
    int N; cin>>N;
    int num;
    while(N > 0){
        cin>>num;
        cout<<"Octal is : " << DecToOct(num)<<endl;
        N--;
    }
    return 0;
}