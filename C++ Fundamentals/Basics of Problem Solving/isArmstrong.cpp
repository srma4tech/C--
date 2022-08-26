#include<iostream>
#include<math.h>
using namespace std;

/*
Problem Name: Is Armstrong Number
Problem Difficulty: None
Problem Constraints: 0 < N < 1000000000
Problem Description:
Take the following as input.

A number  
Write a function which returns true if the number is an armstrong number and false otherwise, where Armstrong number is defined as follows.

A positive integer of n digits is called an Armstrong number of order n (order is number of digits) if.

abcd... = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + .... 

1634 is an Armstrong number as 1634 = 1^4 + 6^4 + 3^4 + 4^4

371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3 

Input Format: Single line input containing an integer
Sample Input: 371
Output Format: Print boolean output for each testcase. <br>
"true" if the given number is an Armstrong Number, else print "false".
Sample Output: true
*/

int isArmNum(int n) {
    int count = 0, res = 0, temp = n;
    while(temp != 0){
        count++;
        temp /= 10;
    }
    while(n != 0){
        int rem = n%10;
        res += pow(rem, count);
        n /= 10;
    }
    return res;
}

int main() {
    int num;cin>>num;
    if(num == isArmNum(num)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}