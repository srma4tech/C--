#include <iostream>
using namespace std;

/*
Problem Name:  Basic Calculator
Problem Difficulty: None
Problem Constraints: 0 <= Input integers <= 100000000 <br>
 ( It is assured that the second integer provided for division and modulo operations will not be 0. )
Problem Description:
Write a program that works as a simple calculator.

1.It reads a character (ch)  <br>
2.If ch is among '+', '-', '*', '/' or '%' it furthur takes two numbers (N1 and N2 as input). It then
performs appropriate appropriate operation between numbers and print the number. <br>
3.If ch is 'X' or 'x', the program terminates.  <br>
4.If ch is any other character, the program should print 'Invalid operation. Try again.' and seek inputs again (starting from character).  <br><br>

Write code to achieve above functionality.
Input Format:
Sample Input: *
1
2
/
4
2
+
3
2
;
X
Output Format: Output a single integer output for the operations in a new line each.
Sample Output: 2
2
5
Invalid operation. Try again.
*/

int main()
{
    char ch;
    cin >> ch;
    int a, b;
    switch (ch)
    {
    case '+':
        cin >> a >> b;
        cout << a + b << endl;
        break;
    case '-':
        cin >> a >> b;
        cout << a - b << endl;
        break;
    case '*':
        cin >> a >> b;
        cout << a * b << endl;
        break;
    case '/':
        cin >> a >> b;
        cout << a / b << endl;
        break;
    case '%':
        cin >> a >> b;
        cout << a % b << endl;
        break;
    case 'X':
        cout << "Invalid operation. Try again." << endl;
        break;
    case 'x':
        cout << "Invalid operation. Try again." << endl;
        break;
    default:
        break;
    }

    return 0;
}