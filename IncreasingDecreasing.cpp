#include<iostream>
using namespace std;

/*
Problem Name: Increasing Decreasing Sequence
Problem Difficulty: None
Problem Constraints: 0 < N < 1000 
Each number in sequence S is > 0 and < 1000000000
Problem Description:
Given an array S of size N , check if it is possible to split sequence into two sequences -  
s<sub>1</sub> to s<sub>i</sub> and  s<sub>i+1</sub> to s<sub>N</sub>  such that first sequence is strictly decreasing and second is strictly increasing. Print true/false as output.
Input Format: First line contains a single integer N denoting the size of the input.  <br>
Next N lines contain a single integer each denoting the elements of the array S.
Sample Input: 5 
1 
2 
3 
4 
5
Output Format: Print boolean output - "true" or "false" defining whether the sequence is increasing - decreasing or not.
Sample Output: true
*/

int main(){
    int N;cin>>N;
    int *arr= new int[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    
}