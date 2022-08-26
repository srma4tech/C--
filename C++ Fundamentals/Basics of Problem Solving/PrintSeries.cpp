#include<iostream>
using namespace std;

/*
A number (N1)  
A number (N2)  
Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.
Input Format: 
Sample Input: 10 
4
Output Format: 
Sample Output: 5 
*/

int main(){
    int N1, N2;cin>>N1>>N2;
    int n=1, count = 1;
    while(count <= N1){
        int res = 3*n+2;
        if(res%N2 != 0){
            cout<<res<<endl;
            count++;
        }
        n++;
    }


    return 0;
}