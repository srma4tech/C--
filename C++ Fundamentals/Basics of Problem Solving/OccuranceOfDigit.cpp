#include <iostream>
using namespace std;

/*
Problem Name: Count Digits
Problem Difficulty: None
Problem Constraints: 0 <= N <= 1000000000
0 <= Digit <= 9
Problem Description:
Take the following as input.
A number
A digit
Write a function that returns the number of times digit is found in the number. Print the value returned.
Input Format: Integer (A number)
Integer (A digit)
Sample Input: 5433231
3
Output Format: Integer (count of times digit occurs in the number)
Sample Output: 3
*/

int countDig(int num, int dig)
{
    int count = 0;
    while (num != 0)
    {
        int rem = num % 10;
        if (rem == dig)
        {
            count++;
        }
        num /= 10;
    }
    return count;
}

int main()
{
    int num, d;
    cin >> num >> d;
    cout << "Occurance is: " << countDig(num, d) << endl;
}