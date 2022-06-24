#include <iostream>
using namespace std;

int convertFive(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int last_digit = n % 10;
    if (last_digit == 0)
    {
        last_digit = 5;
    }
    return convertFive(n / 10) * 10 + last_digit;
}

int main()
{
    cout << "Res is : " << convertFive(10045);
}